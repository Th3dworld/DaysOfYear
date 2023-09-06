//This is the implementation file of the days of year class.
#include "DaysOfYear.h"
#include<iostream>
#include<string>
using namespace std;
/**********************************************************************************************************************************
* The method used to display the date in the month day format is a very basic one.
* The specification file for the DaysOfYear class has two string arrays, one that holds the month and one that holds the day number
* To determine the date a series of if else statements are used
* Upper and lower limits are used to determine the month. For example, for the month February, the lower limit is 31 and the upper
*** is 59 because January has 31 days(lower limit) and February has 28 days(upper limit 31(Jan) + 28(Feb) = 59) the month is then
*** added to a string named date and the argument daynum(user input) - lower limit(days past from previous months) is used as an 
*** index in the day_in_month array in order to output a day number which is then added to the date.
*** the result is then displayed.
***********************************************************************************************************************************/
void DaysOfYear:: print()
{
	
	string date ="";
	
	if(daynum <= 31)//January
	{
		date += months[1];
		date += " ";
		date += day_in_month[daynum];
	}
	else if (daynum > 31 && daynum <= 59)//Febraury
	{
		date += months[2];
		date += " ";
		date += day_in_month[daynum - 31];
	}
	else if (daynum > 59 && daynum <= 90)//March
	{
		date += months[3];
		date += " ";
		date += day_in_month[daynum - 59];
	}
	else if (daynum > 90 && daynum <= 120)//April
	{
		date += months[4];
		date += " ";
		date += day_in_month[daynum - 90];
	}
	else if (daynum > 120 && daynum <= 151)//May
	{
		date += months[5];
		date += " ";
		date += day_in_month[daynum - 120];
	}
	else if (daynum > 151 && daynum <= 181)//June
	{
		date += months[6];
		date += " ";
		date += day_in_month[daynum - 151];
	}
	else if (daynum > 181 && daynum <= 212 )//July
	{
		date += months[7];
		date += " ";
		date += day_in_month[daynum - 181];
	}
	else if (daynum > 212 && daynum <= 243 )//August
	{
		date += months[8];
		date += " ";
		date += day_in_month[daynum - 212];
	}
	else if (daynum > 243 && daynum <= 273)//September
	{
		date += months[9];
		date += " ";
		date += day_in_month[daynum - 243];
	}
	else if (daynum > 273 && daynum <= 304)//October
	{
		date += months[10];
		date += " ";
		date += day_in_month[daynum - 273];
	}
	else if (daynum > 304 && daynum <= 334)//November
	{
		date += months[11];
		date += " ";
		date += day_in_month[daynum - 304];
	}
	else if (daynum > 334 && daynum <= 365)//December
	{
		date += months[12];
		date += " ";
		date += day_in_month[daynum - 334];
	}
	
	cout << date;//Display date

}

//Prefix++
DaysOfYear DaysOfYear :: operator++()
{
	++daynum;
	if (mon_name == "January" && daynum > 31)
	{
		mon_name = "February";
		daynum = 1;
	}
	else if (mon_name == "February" && daynum > 28)
	{
		mon_name = "March";
		daynum = 1;
	}
	else if (mon_name == "March" && daynum > 31)
	{
		mon_name = "April";
		daynum = 1;
	}
	else if (mon_name == "April" && daynum > 30)
	{
		mon_name = "May";
		daynum = 1;
	}
	else if (mon_name == "May" && daynum > 31)
	{
		mon_name = "June";
		daynum = 1;
	}
	else if (mon_name == "June" && daynum > 30)
	{
		mon_name = "July";
		daynum = 1;
	}
	else if (mon_name == "July" && daynum > 31)
	{
		mon_name = "August";
		daynum = 1;
	}
	else if (mon_name == "August" && daynum > 31)
	{
		mon_name = "September";
		daynum = 1;
	}
	else if (mon_name == "September" && daynum > 30)
	{
		mon_name = "October";
		daynum = 1;
	}
	else if (mon_name == "October" && daynum > 31)
	{
		mon_name = "November";
		daynum = 1;
	}
	else if (mon_name == "November" && daynum > 30)
	{
		mon_name = "December";
		daynum = 1;
	}
	else if (mon_name == "December" && daynum > 31)
	{
		mon_name = "January";
		daynum = 1;
	}
	return *this;
}

//Postfix++
DaysOfYear DaysOfYear :: operator++(int)
{
	daynum++;
	if (mon_name == "January" && daynum > 31)
	{
		mon_name = "February";
		daynum = 1;
	}
	else if (mon_name == "February" && daynum > 28)
	{
		mon_name = "March";
		daynum = 1;
	}
	else if (mon_name == "March" && daynum > 31)
	{
		mon_name = "April";
		daynum = 1;
	}
	else if (mon_name == "April" && daynum > 30)
	{
		mon_name = "May";
		daynum = 1;
	}
	else if (mon_name == "May" && daynum > 31)
	{
		mon_name = "June";
		daynum = 1;
	}
	else if (mon_name == "June" && daynum > 30)
	{
		mon_name = "July";
		daynum = 1;
	}
	else if (mon_name == "July" && daynum > 31)
	{
		mon_name = "August";
		daynum = 1;
	}
	else if (mon_name == "August" && daynum > 31)
	{
		mon_name = "September";
		daynum = 1;
	}
	else if (mon_name == "September" && daynum > 30)
	{
		mon_name = "October";
		daynum = 1;
	}
	else if (mon_name == "October" && daynum > 31)
	{
		mon_name = "November";
		daynum = 1;
	}
	else if (mon_name == "November" && daynum > 30)
	{
		mon_name = "December";
		daynum = 1;
	}
	else if (mon_name == "December" && daynum > 31)
	{
		mon_name = "January";
		daynum = 1;
	}
	return *this;
}

//Prefix--
DaysOfYear DaysOfYear :: operator--()
{
	--daynum;
	
	if (mon_name == "December" && daynum < 1)
	{
		mon_name = "November";
		daynum = 30;
	}
	else if (mon_name == "November" && daynum < 1)
	{
		mon_name = "October";
		daynum = 31;
	}
	else if (mon_name == "October" && daynum < 1)
	{
		mon_name = "September";
		daynum = 30;
	}
	else if (mon_name == "September" && daynum < 1)
	{
		mon_name = "August";
		daynum = 31;
	}
	else if (mon_name == "August" && daynum < 1)
	{
		mon_name = "July";
		daynum = 31;
	}
	else if (mon_name == "July" && daynum < 1)
	{
		mon_name = "June";
		daynum = 30;
	}
	else if (mon_name == "June" && daynum < 1)
	{
		mon_name = "May";
		daynum = 31;
	}
	else if (mon_name == "May" && daynum < 1)
	{
		mon_name = "April";
		daynum = 30;
	}
	else if (mon_name == "April" && daynum < 1)
	{
		mon_name = "March";
		daynum = 31;
	}
	else if (mon_name == "March" && daynum < 1)
	{
		mon_name = "February";
		daynum = 28;
	}
	else if (mon_name == "February" && daynum < 1)
	{
		mon_name = "January";
		daynum = 1;
	}
	else if (mon_name == "January" && daynum < 1)
	{
		mon_name = "December";
		daynum = 31;
	}
	return *this;
}

//Postfix--
DaysOfYear DaysOfYear :: operator--(int)
{
	
	daynum--;

	if (mon_name == "December" && daynum < 1)
	{
		mon_name = "November";
		daynum = 30;
	}
	else if (mon_name == "November" && daynum < 1)
	{
		mon_name = "October";
		daynum = 31;
	}
	else if (mon_name == "October" && daynum < 1)
	{
		mon_name = "September";
		daynum = 30;
	}
	else if (mon_name == "September" && daynum < 1)
	{
		mon_name = "August";
		daynum = 31;
	}
	else if (mon_name == "August" && daynum < 1)
	{
		mon_name = "July";
		daynum = 31;
	}
	else if (mon_name == "July" && daynum < 1)
	{
		mon_name = "June";
		daynum = 30;
	}
	else if (mon_name == "June" && daynum < 1)
	{
		mon_name = "May";
		daynum = 31;
	}
	else if (mon_name == "May" && daynum < 1)
	{
		mon_name = "April";
		daynum = 30;
	}
	else if (mon_name == "April" && daynum < 1)
	{
		mon_name = "March";
		daynum = 31;
	}
	else if (mon_name == "March" && daynum < 1)
	{
		mon_name = "February";
		daynum = 28;
	}
	else if (mon_name == "February" && daynum < 1)
	{
		mon_name = "January";
		daynum = 1;
	}
	else if (mon_name == "January" && daynum < 1)
	{
		mon_name = "December";
		daynum = 31;
	}
	return *this;
}
