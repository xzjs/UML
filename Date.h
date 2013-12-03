#ifndef DATE_H
#define DATE_H
#pragma once
#include<ctime>
#include<string>
#include<sstream>
#include <strstream>
//#include"DataBase.h"
using namespace std;

class Date
{
public:
	Date(void);
	Date(int year,int month,int day);
	~Date(void);
	int Year;
	int Month;
	int Day;
//增加一个月
	Date* AddMonth();
//与制定日期相差的天数
	int Compare(Date d);
//将时间转换成string类型
	string Tostring();
};
#endif

