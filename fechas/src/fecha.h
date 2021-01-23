#include <iostream>

#include <string>

#include <fstream>



#ifndef DATE_H

#define DATE_H

using namespace std;

class Date {


private : 

int year_{0};

int month_{0};

int day_{0};

string file_{"sample.txt"};

public :

void SetDay(int value){
  day_ = value;
}

void SetMonth(int value){
  month_ = value;
}

void SetYear(int value){
  year_ = value;
}

void SetFile(string fichero_salida){
  file_ = fichero_salida;
}



void Print();

bool LeapYear ();

void NextDate();


int GetYear() {

return year_;


}

int GetMonth() {

return month_;

}


int GetDay() {

return day_;

}

};

#endif