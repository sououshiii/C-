#include <iostream>
using namespace std;
#include <vector>
#include "HistoricalSites.h"
#include "MyCity.h"
#include "MyDate.h"
#include <string>
#include <string.h>
#include <sstream>
vector <HistoricalSites> arr;
string PrintMenu()
{
    stringstream txt;
    txt << "\n\t**************";
    txt << "\n\tInternational Historical Sites Data Center\n";
    txt << "\n\t1- Add a new Historical Site.\n\n\t2- Delete a Historical Site.";
    txt << "\n\n\t3- Edit an exsisting Data.\n\n\t4- Show Data.\n\n\t5- Search by name.\n\n\t6- Search by city.\n\n\t7- Exit\n";
    txt << "\n\t--------------------------------\n Enter your choice : ";
    return txt.str();
}
void Add(HistoricalSites obj)
{
    arr.push_back(obj);
}
void Delete(int value)
{
    arr.erase(arr.begin() + value);
}
void Edit(int edit, int editchoice)
{
    switch (editchoice)
    {
    case 1:
    {
        cout << "\n\t Enter the Site Name : ";
        string sitename;
        getline(cin, sitename);
        arr[edit].SetSiteName(sitename);
        break;
    }
    case 2:
    {
        MyCity city;
        cout << "\n\t Enter the City Name : ";
        string cityname;
        getline(cin, cityname);
        city.SetCityName(cityname);
        cout << "\n\t Enter the City Population : ";
        double population;
        cin >> population;
        city.SetCityPopulation(population);
        cout << "\n\t Enter the City Area : ";
        double area;
        
        cin >> area;
        city.SetCityArea(area);
        cout << "\n\t Enter the Country Name : ";
        string countryname;
        getline(cin, countryname);
        city.SetCountry(countryname);
        arr[edit].SetCity(city);
        break;
    }
    case 3:
    {
        MyDate date;
        cout << " Enter the Year of the Site Construction : ";
        int year;
        cin >> year;
        date.SetYear(year);
        cout << " Enter the Month of the Site Construction : ";
        int month;
        cin >> month;
        date.SetMonth(month);
        cout << " Enter the Day of the Site Construction : ";
        int day;
        cin >> day;
        date.SetDay(day);
        arr[edit].SetDate(date);
        break;
    }
    case 4:
    {
        cout << "\n" << arr[edit].UsageManual();
        cout << "\n\t Enter the Site Usage : ";
        int ch;
        cin >> ch;
        arr[edit].SetLandUsage((Usage)ch);
        break;
    }
    case 5:
    {
        cout << "\n\t Enter the Historical Site Area : ";
        double hsarea;
        cin >> hsarea;
        arr[edit].SetArea(hsarea);
        break;
    }
    }

}
int main()
{
    int cnt = 1;
    cout<< PrintMenu();
    int choice =0;
    cin >> choice;
    while (choice != 7)
    {
        switch (choice)
        {
        case 1: {
            cout << "\n\t\t**ADD**\n";
                HistoricalSites obj;
                MyCity city;
                obj.SetCaseNumber(cnt);
                cin.ignore();
                cout << "\n\t Enter the Site Name : ";
                string sitename;
                getline(cin, sitename);
                obj.SetSiteName(sitename);
                cout << "\n\t Enter the City Name : ";
                string cityname;
                getline(cin, cityname);
                city.SetCityName(cityname);
                cout << "\n\t Enter the City Population : ";
                double population;
                cin >> population;
                city.SetCityPopulation(population);
                cin.ignore();
                cout << "\n\t Enter the City Area : ";
                double area;
                cin >> area;
                city.SetCityArea(area);
                cin.ignore();
                cout << "\n\t Enter the Country Name : ";
                string countryname;
                getline(cin, countryname);
                city.SetCountry(countryname);
                obj.SetCity(city);
                MyDate date;
                //cin.ignore();
                cout << "\n\tEnter the Year of the Site Construction : ";
                int year;
                cin >> year;
                date.SetYear(year);
                cin.ignore();
                cout << "\n\tEnter the Month of the Site Construction : ";
                int month;
                cin >> month;
                date.SetMonth(month);
                cin.ignore();
                cout << "\n\tEnter the Day of the Site Construction : ";
                int day;
                cin >> day;
                date.SetDay(day);
                obj.SetDate(date);
                cout << "\n" << obj.UsageManual();
                cin.ignore();
                cout << "\n\t Enter the Site Usage : ";
                int ch;
                cin >> ch;
                obj.SetLandUsage((Usage)ch);
                cin.ignore();
                cout << "\n\t Enter the Historical Site Area : ";
                double hsarea;
                cin >> hsarea;
                obj.SetArea(hsarea);
                Add(obj);
                cnt++;
                break;
            }
        case 2:
            {
            cout << "\n\t\t**DELETE**\n";
                cout << " Choose which Entery number you want to erase : ";
                int del;
                cin >> del;
                Delete(del-1);
                break;
            }
        case 3:
            {
            cout << "\n\t\t**EDIT**\n";
                cout << "\n\tWhich Entry do you want to edit? Enter the number please. ";
                int edit;
                cin >> edit;
                cout<<"\n"<<arr[edit - 1].PrintInfo();
                cout<<"\n"<<arr[edit - 1].EditManual();
                int editchoice;
                cin >> editchoice;
                Edit(edit - 1, editchoice);
                cin.ignore();
                break;
            }
        case 4:
            {
            cout << "\n\t\t**SAVED DATA**\n";
                for (int i = 0; i < arr.size(); i++)
                    cout << arr[i].PrintInfo()<<"\n";
                break;
            }
        case 5:
            {
            cout << "\n\t\t**SEARCH BY THE SITE NAME**\n";
            cin.ignore();
                cout << "\n\t Enter the Historical Site Name : ";
                string searchname;
                getline(cin, searchname);
                for (int i = 0; i < arr.size(); i++)
                {
                    cout << "**";
                    if (arr[i].GetSiteName() == searchname)
                        cout<<"\n"<<arr[i].PrintInfo();
                }
                break;
            }
        case 6:
            {
            cout << "\n\t\t**SEARCH BY THE SITE CITY**\n";
            cin.ignore();
                cout << "\n\t Enter the City of Historical Site : ";
                string searchcity;
                getline(cin, searchcity);
                for (int i = 0; i < arr.size(); i++)
                {
                    if (arr[i].GetCity().GetCityName() == searchcity)
                        cout<<"\n"<<arr[i].PrintInfo();
                }
                break;
            }
        }
        cout << PrintMenu();
        cin >> choice;
    }
    return 0;
}
