#ifndef DATE_H

#define DATE_H



class Date {


private : 

int year_;

int month_;

int day_;


public :

Date() = default;

Date(int year, int month, int day);

void Print();

void SetDate(int year, int month, int day);

bool LeapYear (int year);


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