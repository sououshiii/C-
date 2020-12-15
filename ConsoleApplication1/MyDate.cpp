#include "MyDate.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
MyDate::MyDate()
{
}
MyDate::MyDate(int year, int month, int day)
{
	int Year = year;
	int Month = month;
	int Day = day;
}
void MyDate::SetYear(int Year)
{
	this->Year = Year;
}
int MyDate::GetYear()
{
	return this->Year;
}
void MyDate::SetMonth(int Month)
{
	this->Month = Month;
}
int MyDate::GetMonth()
{
	return this->Month;
}
void MyDate::SetDay(int Day)
{
	this->Day = Day;
}
int MyDate::GetDay()
{
	return this->Day;
}
string MyDate::ShowDate()
{
	stringstream item;
	item << to_string(Year) << " / " <<to_string(Month) <<" / "<< to_string(Day);
	return item.str();
}
