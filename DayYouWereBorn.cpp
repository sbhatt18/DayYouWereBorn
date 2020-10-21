#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
int month, day, year, daycode, total = 0;
bool leapyear;
string dayofweek;
cout << "This program will find out your Birth date" << endl;
cout << "Please enter the value of the month: ";
cin >> month;
cout << "Enter the day you were born: ";
cin >> day;
cout << "Enter the year you were born: ";
cin >> year;
total+=(year%100)/4;  
total+=year%100;
total+=day;
if(month==1||month==10)total=total+1;
if(month==5)total=total+2;
if(month==8)total=total+3;
if(month==2||month==3||month==11)total=total+4;
if(month==6)total=total+5;
if(month==9||month==12)total=total+6;
if(year%4!=0)leapyear=false;
else if(year%100!=0)leapyear=true;
else if(year%400!=0)leapyear=false;
else leapyear = true;
if (leapyear && ((month == 1) || (month == 2))) total--;
if (year >= 2000 & year <= 2099)
{
if (total % 7 == 0) daycode = 6;
else daycode = (total % 7) - 1;
}
else daycode = total % 7;
if (daycode == 0) dayofweek = "Saturday";
if (daycode == 1) dayofweek = "Sunday";
if (daycode == 2) dayofweek = "Monday";
if (daycode == 3) dayofweek = "Tuesday";
if (daycode == 4) dayofweek = "Wednesday";
if (daycode == 5) dayofweek = "Thursday";
if (daycode == 6) dayofweek = "Friday";
cout << "You were born on a " << dayofweek << "." << endl;
return 0;
}