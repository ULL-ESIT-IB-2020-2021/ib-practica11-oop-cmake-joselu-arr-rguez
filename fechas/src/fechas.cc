#include "tools.h"

#include <iostream>

#include "fecha.h"

using namespace std;


int main (int argc, char* argv[]) {
  Usage(argc, argv);
  
  string caracter_1{argv[1]}; //Day

  string caracter_2{argv[2]}; //Month

  string caracter_3{argv[3]}; //Year

  string caracter_4{argv[4]}; //N

  string caracter_5{argv[5]}; //File

  int day = stoi(caracter_1); //Stoi nos permite cambiar un string a Int

  int month = stoi(caracter_2); //Stoi nos permite cambiar un string a Int

  int year = stoi(caracter_3);  //Stoi nos permite cambiar un string a Int

  int number = stoi(caracter_4);  //Stoi nos permite cambiar un string a Int

  Date fecha;

  fecha.SetDay(day);

  fecha.SetMonth(month);

  fecha.SetYear(year);

  fecha.SetFile(caracter_5);

  fecha.Print();

  for (int i = 0; i < number; i++) {

    fecha.NextDate();

    fecha.Print();

  }

  return 0;

}