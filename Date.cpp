#include "Date.h"

string to(int n)
{
	strstream ss;
	string s;
	ss << n;
	ss >> s;
	return s;
}

Date::Date(void)
{
	struct tm *date;
	time_t TimeNow=time(NULL);
	date=localtime(&TimeNow);
	Year = date->tm_year+1900;
	Month = date->tm_mon;
	Day = date->tm_mday;
}
Date::Date(int year,int month,int day)
{
	this->Year=year;
	this->Month=month;
	this->Day=day;
}

Date::~Date(void)
{
}


Date* Date::AddMonth(void)
{
	this->Month+=1;
	if(this->Month>12)
	{
		this->Year+=1;
		this->Month=1;
	}
	Date* d=new Date(this->Year,this->Month,this->Day);
	return d;
}


int Date::Compare(Date d)
{
	return (d.Year-this->Year)*365+(d.Month-this->Month)*30+(d.Day-this->Day);
}

string Date::Tostring()
{
	return  to(this->Year)+"-"+to(this->Month)+"-"+to(this->Day);
}


