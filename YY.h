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
//0 ����Ա   ��1ѧ��
	string Type; 
//�û���Ƿ����
	double Cost;

	static bool AddUser(YY yy);
	static bool DL(YY & yy);
	static bool XGXX(YY u);
	static bool DeleteUser(string ID);
//��ѯ�����û�
	static bool Select(string ID,YY &y);
//���û�Ƿ������
	static bool ClearCost(string ID);
};
#endif

