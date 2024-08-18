#include <chrono>
#include <iomanip>

#include "../include/CMOS.h"

using namespace std::chrono;
using std::time_t, std::string;
using std::tm;
using std::ostringstream;

DateTime::DateTime() {
  DATE = GetActualDate();
  TIME = GetActualTime();
}
string DateTime::GetActualDate() {
  auto now_time = system_clock::now();
  time_t now_time_t = system_clock::to_time_t(now_time);
  tm now_tm;

  localtime_s(&now_tm, &now_time_t);

  ostringstream date_oss;
  date_oss << std::put_time(&now_tm, "%Y-%m-%d");

  const string date = date_oss.str();

  return date;
}

string DateTime::GetActualTime() {
  auto now_time = system_clock::now();
  time_t now_time_t = system_clock::to_time_t(now_time);
  tm now_tm;

  localtime_s(&now_tm, &now_time_t);

  ostringstream time_oss;
  time_oss << std::put_time(&now_tm, "%H:%M:%S");

  const string time = time_oss.str();

  return time;
}