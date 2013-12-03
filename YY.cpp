#include "YY.h"


YY::YY(void)
{
	ID=Guid();
	Type = "0";
}
YY::YY(string id,string name,string pwd,string type,double cost)
{
	ID=id;
	Name=name;
	Pwd=pwd;
	Type=type;
	Cost=0.0;
}

YY::~YY(void)
{
}


bool YY::AddUser(YY yy)
{
	if(YY::Select(yy.ID,yy))
	{
		return false;
	}
	else
	{
		MD5 md5(yy.Pwd);
		yy.Pwd=md5.md5();
		return DataBase::data_insert(yy);
	}
}


bool YY::DL(YY & yy)
{
	vector<YY> y;
	if (DataBase::data_select(yy,1,y))
	{
		MD5 md5(yy.Pwd);
		if(y[0].Pwd==md5.md5())
		{
			yy=y[0];
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}


bool YY::XGXX(YY u)
{
	YY y;
	if(YY::Select(u.ID,y))
	{
		vector<YY> y;
		if(DataBase::data_select(u,1,y))
		{
			MD5 md5(u.Pwd);
			u.Pwd=md5.md5();
			if(DataBase::data_update(y[0],u)==1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

}


bool YY::DeleteUser(string ID)
{
	YY y;
	y.ID=ID;
	vector<YY> yarr;
	if(DataBase::data_select(y,1,yarr))
	{
		if(DataBase::data_delete(yarr[0])==1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool YY::Select(string id,YY& y)
{
	y.ID=id;
	vector<YY> vy;
	if(DataBase::data_select(y,1,vy))
	{
		y.Pwd=vy[0].Pwd;
		y.Name=vy[0].Name;
		y.Type=vy[0].Type;
		y.Cost=vy[0].Cost;
		return true;
	}
	else
	{
		return false;
	}
}

bool YY::ClearCost(string ID)
{
	YY y;
	if(Select(ID,y))
	{
		YY y2(y.ID,y.Name,y.Pwd,y.Type,0.0);
		if(DataBase::data_update(y,y2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}