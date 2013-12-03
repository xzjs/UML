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
//该书是被借阅还是预约	0预约1借阅
	string Status;
	
	static bool Back(Book book);

//返回状态：0成功，1用户借书达上限，2用户欠款，3用户不存在，4该书已被借，5该书已被预约
	static int Lend(YY user, Book book, string status);
//查询用户当前借书，返回值为借阅了多少本书
	static int BorrowTab(YY yy,vector<UserBook>& ubs);
//查询一本书，返回5，该书被预约，返回4，该书已被借,返回0，该书可以借阅
	static int CheckBookCanLend(string BookID);
//	查询此用户是否可借书，0可借，1借书达到上限，2用户欠款,3用户不存在
	static int CheckUserCanLend(string UserID);
//结算用户罚款金额
	static bool CheckCost(YY y);
};
#endif

