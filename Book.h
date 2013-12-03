#ifndef BOOK_H
#define BOOK_H
#pragma once
#include <string>
#include "Object.h"
#include <vector>

using namespace std;

class Book:public Object
{
public:
	Book(void);
	Book(string id,string name,string bookclass,string publish,string Writer);
	~Book(void);
//	int ID;
	string ID;
//	string Nsmr;
	string Name;
	string BookClass;
	string Publish;
	string Writer;

	static bool AddBook(Book book);
	static bool DeleteBook(string ID);
	static bool GetBookList(string q,int clas,vector<Book>& b);//0BookName1 È∫≈2Editor3Publish4∑÷¿‡
	static bool Select(string id,Book& book);
};
#endif

