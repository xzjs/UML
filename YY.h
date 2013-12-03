#ifndef YY_H
#define YY_H
#pragma once
#include "object.h"
#include "DataBase.h"
#include "md5.h"
class YY :
	public Object
{
public:
	YY(void);
	YY(string id,string name,string pwd,string type,double cost);
	~YY(void);
	string ID;
	string Name;
	string Pwd;
//0 管理员   ；1学生
	string Type; 
//用户的欠款金额
	double Cost;

	static bool AddUser(YY yy);
	static bool DL(YY & yy);
	static bool XGXX(YY u);
	static bool DeleteUser(string ID);
//查询单个用户
	static bool Select(string ID,YY &y);
//将用户欠款清零
	static bool ClearCost(string ID);
};
#endif

