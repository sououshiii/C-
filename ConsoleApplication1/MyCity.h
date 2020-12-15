#pragma once
#include <iostream>
using namespace std;
class MyCity
{
	string CityName;
	double CityPopulation;
	double CityArea;
	string Country;
public:
	MyCity();
	MyCity(string cityname, double citypopulation, double Cityarea, string country);
	void SetCityName(string CityName);
	string GetCityName();
	void SetCityPopulation(double CityPopulation);
	double GetCityPopulation();
	void SetCityArea(double CityArea);
	double GetCityArea();
	void SetCountry(string Country);
	string GetCountry();
	string PrintCity();
};

