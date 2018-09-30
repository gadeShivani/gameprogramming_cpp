#pragma once

#include <string>
using std::string;

class Date
{
private:
    int month,day,year;
    void displayFormatA();
    void displayFormatB();
    void displayFormatC();
    bool isWrongDate(int month, int day, int year);
    string convertMonth();
public:
    Date();
    Date(int month,int day, int year);
    void display();
};
