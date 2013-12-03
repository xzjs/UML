#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include "YY.h"
#include "Book.h"
#include "UserBook.h"
#include<sstream>
#include <strstream>
#include"Date.h"

using namespace std;
class YY;
class UserBook;

class DataBase
{
public:
	DataBase(void);
	~DataBase(void);

	static bool data_select(YY u, int i, vector<YY>& selectArr);
	static bool data_insert(YY u);
	static int data_update(YY u, YY u2);
	static int data_delete(YY u);
	static bool data_select(Book u, int i, vector<Book>& selectArr);
	static bool data_insert(Book u);
	static int data_update(Book u, Book u2);
	static int data_delete(Book u);
	static bool data_select(UserBook ub, int i, vector<UserBook>& slectArr);
	static bool data_insert(UserBook u);
	static int data_update(UserBook u, UserBook u2);
	static int data_delete(UserBook u);
};

