#pragma once
#include <iostream>
using namespace std;
class MyDate
{
	int Year;
	int Month;
	int Day;
	
public:
	MyDate();
	MyDate(int year, int month, int day);
	void SetYear(int Year);
	int GetYear();
	void SetMonth(int Month);
	int GetMonth();
	void SetDay(int Day);
	int GetDay();
	string ShowDate();

};

