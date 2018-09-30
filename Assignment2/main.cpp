#include <iostream>
#include "Date.h"
#include <string>
using std::string;

int main()
{
    Date d;
    d.display();

    Date e(2,23,2018);
    e.display();

    Date f(22,23,2018);
    f.display();
}

Date::Date()
{
    month = 1; day = 1; year = 2018;
}

Date::Date(int l_month,int l_day, int l_year)
{
    if(isWrongDate(l_month, l_day, l_year))
    {
        month = 1; day = 1; year = 2018;
    }
    else
    {
        month = l_month; day = l_day; year = l_year;
    }
}

bool Date::isWrongDate(int month,int day, int year)
{
    if(month < 1 || month > 12){
        return true;
    }

    if (month == 2 && 1 <= day &&  day <= 28){
        return false;
    }
    //months 4, 6, 9, 11 is 30
    if ((month == 4 || month == 6 || month == 9 || month == 11) && 1 <= day &&  day <= 30){
        return false;
    }
    //months 1, 3, 5, 7, 8, 10, 12 is 31
    if(day == 31){
        return false;
    }
    return true;
}

void Date::displayFormatA()
{
    printf("%d/%d/%d\n", month, day, year);
}

void Date::displayFormatB()
{
    string l_month = convertMonth();
    printf("%s %d, %d\n", l_month.c_str(), day, year);
}

void Date::displayFormatC()
{
    string l_month = convertMonth();
    printf("%d %s %d\n", day, l_month.c_str(), year);
}


string Date::convertMonth(){
    switch(month)
    {
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        default: return "December";
    }
}

void Date::display()
{
    displayFormatA();
    displayFormatB();
    displayFormatC();
    printf("-----------------\n");
}
