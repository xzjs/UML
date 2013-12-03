#include "UserBook.h"


UserBook::UserBook(void)
{
	ID=Guid();
}
UserBook::UserBook(string id,string userid,string bookid,string status,Date lenddate)
{
	ID=id;
	UserID=userid;
	BookID=bookid;
	LendDate=lenddate;
	Status=status;

}

UserBook::~UserBook(void)
{
}


bool UserBook::Back(Book book)
{
	UserBook ub;
	ub.BookID=book.ID;
	vector<UserBook> ubs;
	if(DataBase::data_select(ub,2,ubs))
	{
		ub.ID=ubs[0].ID;
	}
	if(DataBase::data_delete(ub)>0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int UserBook::Lend(YY user, Book book, string status)
{
	if(status=="1")
	{
		int BookInt=CheckBookCanLend(book.ID);
		if(BookInt==0)
		{
			int UserInt=CheckUserCanLend(user.ID);
			if(UserInt==0)
			{
				UserBook ub;
				Date d;
				ub.BookID=book.ID;
				ub.UserID=user.ID;
				ub.Status=status;
				ub.LendDate=d;
				if(DataBase::data_insert(ub))
				{
					return 0;
				}
			}
			else
			{
				return UserInt;
			}
		}
		else
		{
			return BookInt;
		}
	}
	else
	{
		if(CheckBookCanLend(book.ID)==4)
		{
			int UserInt=CheckUserCanLend(user.ID);
			if(UserInt==0)
			{
				UserBook ub;
				Date d;
				ub.BookID=book.ID;
				ub.UserID=user.ID;
				ub.Status=status;
				ub.LendDate=d;
				if(DataBase::data_insert(ub))
				{
					return 0;
				}
			}
			else
			{
				return UserInt;
			}
		}
	}
}


int UserBook::BorrowTab(YY yy,vector<UserBook>& ubs)
{
	UserBook ub;
	ub.UserID=yy.ID;
	vector<UserBook> ubss;
	if(DataBase::data_select(ub,3,ubss))
	{
		for(int i=0;i<ubss.size();i++)
		{
			if(ubss[i].Status=="1")
			{
				ubs.push_back(ubss[i]);
			}
		}
		return ubs.size();
	}
	else
	{
		return 0;
	}	
}


int UserBook::CheckBookCanLend(string BookID)
{
	UserBook ub;
	ub.BookID=BookID;
	vector<UserBook> ubs;

	if(DataBase::data_select(ub,2,ubs))
	{

		if(ubs[0].Status=="0")
		{
			return 5;
		}
		else
		{
			return 4;
		}
	}
	else
	{
		return 0;
	}
}

int UserBook::CheckUserCanLend(string UserID)
{
	YY y;
	y.ID=UserID;
	vector<YY> ys;
	vector<UserBook> ubs;
	if(DataBase::data_select(y,1,ys))
	{
		if(CheckCost(ys[0]))
		{
			if(ys[0].Cost!=0.0)
			{
				return 2;
			}
			else if (BorrowTab(ys[0],ubs)>11)
			{
				return 1;
			}
			else if(ys[0].Type=="0")
			{
				return 6;
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		return 3;
	}
}

bool UserBook::CheckCost(YY y)
{
	double sum=0.0;
	vector<UserBook>vbs;
	if(BorrowTab(y,vbs)>0)
	{
		
		for(int i=0;i<vbs.size();i++)
		{
			Date date;
			int days=vbs[i].LendDate.Compare(date);
			if(days>30)
			{
				sum+=(days-30)*0.1;
			}
		}
		YY y1=y;
		y1.Cost=sum;
		if(DataBase::data_update(y,y1)>0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}