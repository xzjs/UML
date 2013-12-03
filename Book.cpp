#include "Book.h"
#include "DataBase.h"


Book::Book(void)
{
	//  ID = 0;
	ID=Guid();
}
Book::Book(string id,string name,string bookclass,string publish,string writer)
{
	ID=id;
	Name=name;
	BookClass=bookclass;
	Publish=publish;
	Writer=writer;
}


Book::~Book(void)
{
}


bool Book::AddBook(Book book)
{
	if(Book::Select(book.ID,book))
	{
		return false;
	}
	else
	{
		return DataBase::data_insert(book);
	}
}


bool Book::DeleteBook(string ID)
{
	Book b;
	b.ID=ID;
	if(DataBase::data_delete(b))
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool Book::GetBookList(string q,int clas,vector<Book>& vb)
{
	Book b;
	switch (clas)
	{
	case 0:
		b.ID=q;
		break;
	case 1:
		b.Name=q;
		break;
	case 2:
		b.BookClass=q;
		break;
	case 3:
		b.Publish=q;
		break;
	default:
		break;
	}

	return DataBase::data_select(b,clas,vb);
}

bool Book::Select(string id,Book& b)
{
	b.ID=id;
	vector<Book> vb;
	if(DataBase::data_select(b,0,vb))
	{
		b.Name=vb[0].Name;
		b.Publish=vb[0].Publish;
		b.Writer=vb[0].Writer;
		b.BookClass=vb[0].BookClass;
		return true;
	}
	else
	{
		return false;
	}
}