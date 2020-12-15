#pragma once
#include <iostream>
#include "MyCity.h"
#include "MyDate.h"
using namespace std;
enum Usage
{
	Mousque,Palace,Bath
};
class HistoricalSites
{
	int CaseNumber;
	string SiteName;
	MyCity City;
	MyDate Date;
	Usage LandUsage;
	double Area;
public:
	HistoricalSites();
	HistoricalSites(string sitename, MyCity city, MyDate date, Usage landusage,double area);
	void SetSiteName(string SiteName);
	string GetSiteName();
	void SetCity(MyCity City);
	MyCity GetCity();
	void SetDate(MyDate Date);
	MyDate GetDate();
	void SetLandUsage(Usage LandUsage);
	Usage GetLandUsage();
	void SetArea(double Area);
	double GetArea();
	string PrintInfo();
	string UsageManual();
	string EditManual();
	void SetCaseNumber(int CaseNumber);
	int GetCaseNumber();
};

