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
//����һ����
	Date* AddMonth();
//���ƶ�������������
	int Compare(Date d);
//��ʱ��ת����string����
	string Tostring();
};
#endif

