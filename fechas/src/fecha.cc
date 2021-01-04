#include <iostream>

#include "fecha.h"

using namespace std;


Date :: Date(int year, int month, int day) {

SetDate(year, month, day);

}


void Date :: SetDate(int year, int month, int day) {

year_ = year;

month_ = month;

day_ = day;


}


void Date :: Print() {

cout << day_ << "/" << month_ << "/" << year_ << "\n";


}