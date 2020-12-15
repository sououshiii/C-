#include "HistoricalSites.h"
#include <sstream>
#include <string>
#include <string.h>
#include "MyCity.h"
#include "MyDate.h"

string HistoricalSites::PrintInfo()
{
	stringstream item;
	item << "\n\t Case : " << GetCaseNumber();
	item << "\n\t Historical Site Name : " << GetSiteName();
	item << GetCity().PrintCity();
	item << "\n\t Date : " << GetDate().ShowDate();
	switch (LandUsage)
	{
	case 10:
		item << "\n\t Historical Site Usage : Mosque";
		break;
	case 11:
		item << "\n\t Historical Site Usage : Palace";
		break;
	case 12:
		item << "\n\t Historical Site Usage : Bath";
		break;
	}	
	item << "\n\t The Historical Site Area is : " << GetArea()<<" Square Meter";
	item << "\n\t ------------------------";
	return item.str();
}

string HistoricalSites::UsageManual()
{
	stringstream text;
	text << "\n\t Use the following content to choose the Land Usage.";
	text << "\n\t Mousque = 10 ,Palace = 11 ,Bath = 12 \n";
	return text.str();
}

string HistoricalSites::EditManual()
{
	stringstream text;
	text << "\n\t To Edit the Historical Site Name choose 1. ";
	text << "\n\t To Edit the City Data choose 2.";
	text << "\n\t To Edit the Date choose 3.";
	text << "\n\t To Edit the Land Usage choose 4";
	text << "\n\t To Edit the Area choose 5\n";
	return text.str();
}

void HistoricalSites::SetCaseNumber(int CaseNumber)
{
	this->CaseNumber = CaseNumber;
}

int HistoricalSites::GetCaseNumber()
{
	return this->CaseNumber;
}

HistoricalSites::HistoricalSites()
{
}

HistoricalSites::HistoricalSites(string sitename, MyCity city, MyDate date, Usage landusage, double area)
{
	string SiteName = sitename;
	MyCity City = city;
	MyDate Date = date;
	Usage LandUsage = landusage;
	double Area = area;
}

void HistoricalSites::SetSiteName(string SiteName)
{
	this->SiteName = SiteName;
}

string HistoricalSites::GetSiteName()
{
	return this->SiteName;
}

void HistoricalSites::SetCity(MyCity City)
{
	this->City = City;
}

MyCity HistoricalSites::GetCity()
{
	return this->City;
}

void HistoricalSites::SetDate(MyDate Date)
{
	this->Date = Date;
}

MyDate HistoricalSites::GetDate()
{
	return this->Date;
}

void HistoricalSites::SetLandUsage(Usage LandUsage)
{
	this->LandUsage = LandUsage;
}

Usage HistoricalSites::GetLandUsage()
{
	return this->LandUsage;
}

void HistoricalSites::SetArea(double Area)
{
	this->Area = Area;
}

double HistoricalSites::GetArea()
{
	return this->Area;
}
