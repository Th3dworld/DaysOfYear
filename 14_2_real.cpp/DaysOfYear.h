//Specification file for DaysOfYear class
#ifndef DAYSOFYEAR_H
#define DAYSOFYEAR_H
#include<string>
#include<iostream>
using namespace std;

class DaysOfYear
{
	private:
		int daynum;
		string months[13] = { "hold","January", "February", "March", "April",
						 "May", "June", "July", "August", "October",
						 "Septmer", "November", "December" };//This array holds month names

		string day_in_month[32] = { "0","1", "2", "3","4","5","6","7","8","9","10",
							   "11", "12", "13","14","15","16","17","18","19","20",
							   "21", "22", "23","24","25","26","27","28","29","30","31" };//This array holds possible day numbers

		string mon_name;


	public:
		//Parametized constructor that takes integer and sets it as day number
		DaysOfYear(int num)
		{
			daynum = num;
		}
		
		DaysOfYear(string mon, int num)
		{
			mon_name = mon;
			mon_name[0] = toupper(mon_name[0]);
			daynum = num;

			//Convert num to upper case to check which month it is
			for (int i = 0; i < mon.length();i++)
			{
				mon[i] = toupper(mon[i]);
			}
			
			//Check if month and day is valid
			if(mon == "JANUARY")
			{
				if(num < 0 || num > 31)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "FEBRUARY")
			{
				if (num < 0 || num > 28)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "MARCH")
			{
				if (num < 0 || num > 31)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "APRIL")
			{
				if (num < 0 || num > 30)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "MAY")
			{
				if (num < 0 || num > 31)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "JUNE")
			{
				if (num < 0 || num > 30)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "JULY")
			{
				if (num < 0 || num > 31)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "AUGUST")
			{
				if (num < 0 || num > 31)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "SEPTEMBER")
			{
				if (num < 0 || num > 30)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "OCTOBER")
			{
				if (num < 0 || num > 31)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "NOVEMBER")
			{
				if (num < 0 || num > 30)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
			else if (mon == "DECEMBER")
			{
				if (num < 0 || num > 31)
				{
					cout << "The day you entered for " << mon_name << " is out of range.";
					exit(EXIT_SUCCESS);
				}
			}
		}

	
		//Call print function to display date
		void print();

		DaysOfYear operator++();
		DaysOfYear operator++(int);
		DaysOfYear operator--();
		DaysOfYear operator--(int);
};

#endif // !DAYSOFYEAR_H
