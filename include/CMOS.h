#ifndef CMOS_H
#define CMOS_H

#include <string>
struct DateTime {
  std::string DATE;
  std::string TIME;

  std::string GetActualDate();
  std::string GetActualTime();

  DateTime();
  
};
class CMOS {
private:

};
#endif