#include <iostream>

#include "fecha.h"

using namespace std;



void Date :: Print() {
ofstream fichero_salida{file_, ios::app};

fichero_salida << day_ << '/' << month_ << '/' << year_ << '/' << "\n";


}

bool  Date :: LeapYear () {

  if (year_ % 4 == 0) {

    return true;

  }  
  
  else {

    return false;

  }

  

}

void Date::NextDate() {

  day_++;

  if (day_ > 31) {

    month_++;

    Date::SetDay(1);

  }

  if (month_ > 12) {

    year_++;

    Date::SetMonth(1);

}
}