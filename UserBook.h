#ifndef USERBOOK_H
#define USERBOOK_H
#pragma once
#include <string>
#include "YY.h"
#include "Book.h"
#include<ctime>
#include"Date.h"

using namespace std;
class YY;
class Date;

class UserBook:public Object
{
public:
	UserBook(void);
	UserBook(string id,string userid,string bookid,string status,Date lenddate);
	~UserBook(void);

	string ID;
	string UserID;
	string BookID;
	Date LendDate;
//�����Ǳ����Ļ���ԤԼ	0ԤԼ1����
	string Status;
	
	static bool Back(Book book);

//����״̬��0�ɹ���1�û���������ޣ�2�û�Ƿ�3�û������ڣ�4�����ѱ��裬5�����ѱ�ԤԼ
	static int Lend(YY user, Book book, string status);
//��ѯ�û���ǰ���飬����ֵΪ�����˶��ٱ���
	static int BorrowTab(YY yy,vector<UserBook>& ubs);
//��ѯһ���飬����5�����鱻ԤԼ������4�������ѱ���,����0��������Խ���
	static int CheckBookCanLend(string BookID);
//	��ѯ���û��Ƿ�ɽ��飬0�ɽ裬1����ﵽ���ޣ�2�û�Ƿ��,3�û�������
	static int CheckUserCanLend(string UserID);
//�����û�������
	static bool CheckCost(YY y);
};
#endif

