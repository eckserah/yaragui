#ifndef __MAIN_CONTROLLER_H__
#define __MAIN_CONTROLLER_H__

/* this class arbitrates scan engine operations on behalf of the GUI */

#include <boost/asio.hpp>
#include "main_window.h"
#include "rule_window.h"
#include "compile_window.h"
#include "about_window.h"
#include "settings.h"
#include "ruleset_manager.h"
#include "stats_calculator.h"
#include <boost/shared_ptr.hpp>

class MainController
{
public:

  MainController(int argc, char* argv[], boost::asio::io_service& io);

private:

  void handleChangeTargets(const std::vector<std::string>& files);
  void handleChangeRuleset(RulesetView::Ref ruleset);

  void handleScanResult(const std::string& target, ScannerRule::Ref rule, RulesetView::Ref view);
  void handleScanComplete(const std::string& error);
  void handleRulesUpdated();

  void handleFileStats(FileStats::Ref stats);

  void handleRequestRuleWindowOpen();
  void handleRuleWindowSave(const std::vector<RulesetView::Ref>& rules);
  void handleRuleWindowCompile(RulesetView::Ref view);

  void handleCompileWindowRecompile(RulesetView::Ref view);
  void handleAboutWindowOpen();
  void handleUserScanAbort();

  void handleOperationsComplete();
  void scan();
  void updateCompileWindows(const RulesetView::Ref& rule);
  void setCompileWindowsEnabled(bool state);

  boost::asio::io_service& m_io;
  boost::shared_ptr<Settings> m_settings;
  boost::shared_ptr<RulesetManager> m_rm;
  boost::shared_ptr<StatsCalculator> m_sc;

  boost::shared_ptr<MainWindow> m_mainWindow;
  boost::shared_ptr<RuleWindow> m_ruleWindow;
  boost::shared_ptr<AboutWindow> m_aboutWindow;
  std::list<CompileWindow::Ref> m_compileWindows;

  std::vector<std::string> m_targets;
  RulesetView::Ref m_ruleset;
  bool m_haveRuleset;
  bool m_scanning;
  int m_statsRemaining;

};

#endif // __MAIN_CONTROLLER_H__
