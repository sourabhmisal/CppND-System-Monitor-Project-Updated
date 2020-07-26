#include "format.h"

#include <iomanip>
#include <string>

using std::string;
using std::stringstream;

// DONE: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long seconds) {
  int h = seconds / (60 * 60);
  int m = (seconds / 60) % 60;
  int s = seconds % 60;

  stringstream ss;

  ss << std::setfill('0') << std::setw(2) << h << ":";
  ss << std::setfill('0') << std::setw(2) << m << ":";
  ss << std::setfill('0') << std::setw(2) << s;

  return ss.str();
}
