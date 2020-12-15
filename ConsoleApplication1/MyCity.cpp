#include "MyCity.h"
#include <sstream>
MyCity::MyCity()
{
}

MyCity::MyCity(string cityName, double citypopulation, double cityarea, string country)
{
	string CityName = cityName;
	double CityPopulation = citypopulation;
	double CityArea = cityarea;
	string Country = country;
}

void MyCity::SetCityName(string CityName)
{
	this->CityName = CityName;
}

string MyCity::GetCityName()
{
	return this->CityName;
}

void MyCity::SetCityPopulation(double CityPopulation)
{
	this->CityPopulation = CityPopulation;
}

double MyCity::GetCityPopulation()
{
	return this->CityPopulation;
}

void MyCity::SetCityArea(double CityArea)
{
	this->CityArea = CityArea;
}

double MyCity::GetCityArea()
{
	return this->CityArea;
}

void MyCity::SetCountry(string Country)
{
	this->Country = Country;
}

string MyCity::GetCountry()
{
	return this->Country;
}

string MyCity::PrintCity()
{
	stringstream txt;
	txt << "\n\t City : " << GetCityName();
	txt << "\n\t City Area : " << GetCityArea() <<" Square Meter";
	txt << "\n\t City Population : " << GetCityPopulation();
	txt << "\n\t Country : " << GetCountry();
	return txt.str();
}
