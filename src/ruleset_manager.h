#ifndef __RULESET_MANAGER_H__
#define __RULESET_MANAGER_H__

/* this is a high level interface to the scanner thread */
/* it deal with rule objects rather than rule file paths for the purpose of caching compiled rules */

#include <boost/asio.hpp>
#include "ruleset.h"
#include "scanner.h"
#include "settings.h"
#include <boost/signals2.hpp>
#include <vector>
#include <list>

class RulesetManager
{
public:

  ~RulesetManager();
  RulesetManager(boost::asio::io_service& io, boost::shared_ptr<Settings> settings);

  boost::signals2::signal<void ()> onRulesUpdated;
  boost::signals2::signal<void (const std::string& target, ScannerRule::Ref rule, RulesetView::Ref view)> onScanResult;
  boost::signals2::signal<void (const std::string& error)> onScanComplete;

  void scan(const std::string& target, RulesetView::Ref view);
  void scan(const std::vector<std::string>& targets, RulesetView::Ref view);
  void scanAbort();
  void compile(RulesetView::Ref view);

  std::vector<RulesetView::Ref> getRules() const;
  Ruleset::Ref createRule(const std::string& file);
  void updateRules(const std::vector<RulesetView::Ref>& rules);

private:

  void handleRuleCompile(Scanner::CompileResult::Ref compileResult);
  void handleScanResult(ScannerRule::Ref rule);
  void handleScanComplete(const std::string& error);
  void handleRuleHash(const std::string& hash);
  void handleRuleLoad(Scanner::LoadResult::Ref loadResult);
  void handleRuleSave(const std::string& error);

  void compileNextRule();
  void scanWithCompiledRules();
  void freeBinaries();

  enum QueueType {
    QueueAllRules,
    QueueCompiledRules
  };

  std::list<Ruleset::Ref> ruleToQueue(Ruleset::Ref rule, const QueueType type);
  Ruleset::Ref viewToRule(RulesetView::Ref view);
  std::string compiledRuleCache(const std::string& hash) const;

  boost::asio::io_service& m_io;
  boost::shared_ptr<Scanner> m_scanner;
  boost::shared_ptr<Settings> m_settings;

  std::vector<Ruleset::Ref> m_rules;
  std::map<std::string, YR_RULES*> m_binaries;

  Ruleset::Ref m_activeRule;
  std::list<std::string> m_queueTargets;
  std::list<Ruleset::Ref> m_queueRules;

  bool m_forceCompile;
  bool m_scanAborted;

};

#endif // __RULESET_MANAGER_H__
