#include <iostream>

#include "fecha.h"


int main() {
  
  Date today {2021, 1, 4};
  
  today.Print();

  const Date date1{};

  const Date date2{2002, 12, 12};
  
  const Date date3{2020, 12, 12};

}