#ifndef __STATS_CALCULATOR_H__
#define __STATS_CALCULATOR_H__

#include <boost/asio.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/signals2.hpp>
#include <boost/thread.hpp>
#include <boost/atomic.hpp>
#include "file_stats.h"

class StatsCalculator
{
public:

  typedef boost::shared_ptr<StatsCalculator> Ref;

  ~StatsCalculator();
  StatsCalculator(boost::asio::io_service& io);

  boost::signals2::signal<void (FileStats::Ref stats)> onFileStats;

  void reset();
  void abort();
  void getStats(const std::string& file);

private:

  void statsThread();
  void computeStats(const std::string& file);
  void reportStats(FileStats::Ref stats);

  boost::asio::io_service& m_io;
  boost::shared_ptr<boost::thread> m_thread;
  boost::asio::io_service m_thread_io;
  boost::atomic<bool> m_abort;

};

#endif // __STATS_CALCULATOR_H__
