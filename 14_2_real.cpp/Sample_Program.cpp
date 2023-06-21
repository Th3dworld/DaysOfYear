#include<iostream>
#include<string>
#include "DaysOfYear.h"
using namespace std;

int main()
{
	//Declare variables
	int user_inpt;

	//Display instructions to user and take input
	cout << "Greetings welcome to Day!\n";
	cout << "This program will allow you to check the date a specific day number is\n";
	cout << "To get started please input a number between 1 and 365\n";
	cout << "Input: ";
	cin >> user_inpt;

	//Validate user input
	while (user_inpt < 0 || user_inpt > 365)
	{
		cout << "!ERROR! day number must be a value between 1 and 365";
		cout << "Please input a correct value: ";
		cin >> user_inpt;
	}

	//Create DaysOfYear object
	DaysOfYear objct_one(user_inpt);

	//Remove one from that day to show operation of overloaded++ operator
	objct_one--;

	//Display date in month day format
	objct_one.print();

	cout << "\n\n\n\n";

	return 0;
}