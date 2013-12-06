#include "DataBase.h"



DataBase::DataBase(void)
{
}


DataBase::~DataBase(void)
{
}

string toString(double n)
{
	strstream ss;
	string s;
	ss << n;
	ss >> s;
	return s;
}
string toString(int n)
{
	strstream ss;
	string s;
	ss << n;
	ss >> s;
	return s;
}
template <class Type>  
Type stringToNum(const string& str)  
{  
	istringstream iss(str);  
	Type num;  
	iss >> num;  
	return num;      
}  

void StringSplit(string s,char splitchar,vector<string>& vec)
{
	if(vec.size()>0)//保证vec是空的
		vec.clear();
	int length = s.length();
	int start=0;
	for(int i=0;i<length;i++)
	{
		if(s[i] == splitchar && i == 0)//第一个就遇到分割符
		{
			start += 1;
		}
		else if(s[i] == splitchar)
		{
			vec.push_back(s.substr(start,i - start));
			start = i+1;
		}
		else if(i == length-1)//到达尾部
		{
			vec.push_back(s.substr(start,i+1 - start));
		}
	}
}

void get_info(vector<YY>& stuArr,string address)
{
	stuArr.clear();

	string s;
	vector<string> vec;


	ifstream inf;
	inf.open(address);
	/*
	ofstream outf;
	outf.open("out.txt");
	*/
	int i = 0;

	while(getline(inf,s))
	{
		StringSplit(s,'|',vec);
		if(vec.size()==5)
		{
			stuArr.push_back(YY(vec[0],vec[1],vec[2],vec[3],stringToNum<double>(vec[4])));   
			i++;
		}
	}   
	inf.close();

}
void get_info(vector<Book>& stuArr)
{
	string s;
	vector<string> vec;


	ifstream inf;
	inf.open("Book.txt");
	/*
	ofstream outf;
	outf.open("I:\\file\\out.txt");
	*/
	int i = 0;

	while(getline(inf,s))
	{
		StringSplit(s,'|',vec);
		if(vec.size() == 5)
		{
			stuArr.push_back(Book(vec[0],vec[1],vec[2],vec[3],vec[4]));   
			i++;
		}
	}   
	inf.close();

}
void get_info(vector<UserBook>& stuArr)
{
	string s;
	vector<string> vec;


	ifstream inf;
	inf.open("UserBook.txt");
	/*
	ofstream outf;
	outf.open("I:\\file\\out.txt");
	*/
	int i = 0;

	while(getline(inf,s))
	{
		StringSplit(s,'|',vec);
		if(vec.size() == 7)
		{
			Date date(stringToNum<int>(vec[4]),stringToNum<int>(vec[5]),stringToNum<int>(vec[6]));
			stuArr.push_back(UserBook(vec[0],vec[1],vec[2],vec[3],date));   
			i++;
		}
	}   
	inf.close();

}

bool DataBase::data_select(YY u,int i,vector<YY>& selectArr)
{
	vector<YY> UArr;
	vector<string> address;
	address.push_back("YY0.txt");
	address.push_back("YY1.txt");
	address.push_back("YY2.txt");
	address.push_back("YY3.txt");
	address.push_back("YY4.txt");
	address.push_back("YY5.txt");
	if(selectArr.size()>0)//保证vec是空的
		selectArr.clear();
	for(int num = 0;num < address.size();num++)
	{

		get_info(UArr,address[num]);
		int length = UArr.size();
		int count = 0;

		switch(i)
		{
		case 1://cout<<1<<endl;
			for(count = 0;count < length;count++)
			{
				if(u.ID == UArr[count].ID)
				{
					//cout<<"找到学生，编号为："<<count<<endl;//TEST
					selectArr.push_back(UArr[count]);
				}
			}
			break;
		}
	}
	if(selectArr.size()==0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool DataBase::data_insert(YY u)
{
	int i = 0;
	vector<YY> UArr;
	vector<string> address;
	address.push_back("YY0.txt");
	address.push_back("YY1.txt");
	address.push_back("YY2.txt");
	address.push_back("YY3.txt");
	address.push_back("YY4.txt");
	address.push_back("YY5.txt");
	for(int num = 0;num < address.size();num++)
	{
		get_info(UArr,address[num]);
		if(UArr.size() < 50)
		{
			UArr.push_back(u);
			ofstream outf;
			outf.open(address[num]);
			for(;i < UArr.size();i++)
			{
				outf<< UArr[i].ID + "|" + UArr[i].Name + "|" + UArr[i].Pwd + "|" + UArr[i].Type + "|" + toString(UArr[i].Cost)  << "\n";
			}
			outf.close();
		}
	}
	return true;
}


int DataBase::data_update(YY u, YY u2)
{
	int i = 0;
	int j = 0;
	vector<YY> UArr;
	vector<string> address;
	address.push_back("YY0.txt");
	address.push_back("YY1.txt");
	address.push_back("YY2.txt");
	address.push_back("YY3.txt");
	address.push_back("YY4.txt");
	address.push_back("YY5.txt");
	for(int num = 0;num < address.size();num++)
	{
		get_info(UArr,address[num]);
		for(i = 0;i < UArr.size();i++)
		{
			if(UArr[i].ID == u.ID && UArr[i].Name == u.Name && UArr[i].Pwd == u.Pwd && UArr[i].Type == u.Type)
			{
				UArr[i] = u2;
				j++;
			}
		}
		ofstream outf;
		outf.open(address[num]);
		for(i = 0;i < UArr.size();i++)
		{
			outf<< UArr[i].ID + "|" + UArr[i].Name + "|" + UArr[i].Pwd + "|" + UArr[i].Type + "|" + toString(UArr[i].Cost)  << "\n";
		}
		outf.close();
	}

	return j;
}


int DataBase::data_delete(YY u)
{
	int i = 0;
	int j = 0;
	vector<YY> UArr;
	vector<string> address;
	address.push_back("YY0.txt");
	address.push_back("YY1.txt");
	address.push_back("YY2.txt");
	address.push_back("YY3.txt");
	address.push_back("YY4.txt");
	address.push_back("YY5.txt");
	for(int num = 0;num < address.size();num++)
	{
		get_info(UArr,address[num]);
		for(vector<YY>::iterator it=UArr.begin();it!=UArr.end();++it)
		{
			if(it->ID == u.ID)		
			{
				UArr.erase(it);
				j++;
				break;
			}
		}
		ofstream outf;
		outf.open(address[num]);
		for(i = 0;i < UArr.size();i++)
		{
			outf<< UArr[i].ID + "|" + UArr[i].Name + "|" + UArr[i].Pwd + "|" + UArr[i].Type + "|" + toString(UArr[i].Cost)  << "\n";      //!!!!!!!!!!!!!!!!!!!!!!!!!
		}
		outf.close();
	}
	return j;
}


bool DataBase::data_select(Book u, int i, vector<Book>& selectArr)
{
	vector<Book> UArr;

	get_info(UArr);
	if(selectArr.size()>0)//保证vec是空的
		selectArr.clear();
	int length = UArr.size();
	int count = 0;

	switch(i)
	{
	case 0:
		for(count = 0;count < length;count++)
		{
			if(u.ID == UArr[count].ID)
			{
				//cout<<"找到学生，编号为："<<count<<endl;//TEST
				selectArr.push_back(UArr[count]);
			}
		}
		break;
	case 1:
		for(count = 0;count < length;count++)
		{
			if(u.Name == UArr[count].Name)
			{
				//cout<<"找到学生，编号为："<<count<<endl;//TEST
				selectArr.push_back(UArr[count]);
			}
		}
		break;
	case 2:
		for(count = 0;count < length;count++)
		{
			if(u.BookClass == UArr[count].BookClass)
			{
				//cout<<"找到学生，编号为："<<count<<endl;//TEST
				selectArr.push_back(UArr[count]);
			}
		}
		break;
	case 3:
		for(count = 0;count < length;count++)
		{
			if(u.Publish == UArr[count].Publish)
			{
				//cout<<"找到学生，编号为："<<count<<endl;//TEST
				selectArr.push_back(UArr[count]);
			}
		}
		break;
	case 4:
		for(count = 0;count < length;count++)
		{
			if(u.Writer == UArr[count].Writer)
			{
				//cout<<"找到学生，编号为："<<count<<endl;//TEST
				selectArr.push_back(UArr[count]);
			}
		}
		break;
	default:return false;
	}
	if(selectArr.size()==0)
	{
		return false;
	}
	else
	{
		return true;
	}

}


bool DataBase::data_insert(Book u)
{
	int i = 0;
	vector<Book> UArr;
	get_info(UArr);
	UArr.push_back(u);
	ofstream outf;
	outf.open("Book.txt");
	for(;i < UArr.size();i++)
	{
		outf<< UArr[i].ID + "|" + UArr[i].Name + "|" + UArr[i].BookClass + "|" + UArr[i].Publish + "|" + UArr[i].Writer << "\n";
	}
	outf.close();
	return true;
}


int DataBase::data_update(Book u, Book u2)
{
	int i = 0;
	int j = 0;
	vector<Book> UArr;
	get_info(UArr);
	for(i = 0;i < UArr.size();i++)
	{
		if(UArr[i].ID == u.ID && UArr[i].Name == u.Name && UArr[i].Publish == u.Publish && UArr[i].BookClass == u.BookClass  && UArr[i].Writer == u.Writer)
		{
			UArr[i] = u2;
			j++;
		}
	}
	ofstream outf;
	outf.open("Book.txt");
	for(i = 0;i < UArr.size();i++)
	{
		outf<< UArr[i].ID + "|" + UArr[i].Name + "|" + UArr[i].BookClass + "|" + UArr[i].Publish + "|" + UArr[i].Writer << "\n";
	}
	outf.close();

	return j;
}


int DataBase::data_delete(Book u)
{
	int i = 0;
	int j = 0;
	vector<Book> UArr;
	get_info(UArr);
	for(vector<Book>::iterator it=UArr.begin();it!=UArr.end();++it)
	{
		if(it->ID == u.ID)		
		{
			UArr.erase(it);
			j++;
			break;
		}
	}
	ofstream outf;
	outf.open("Book.txt");
	for(i = 0;i < UArr.size();i++)
	{
		outf<< UArr[i].ID + "|" + UArr[i].Name + "|" + UArr[i].BookClass + "|" + UArr[i].Publish + "|" + UArr[i].Writer << "\n";
	}
	outf.close();
	return j;
}


bool DataBase::data_select(UserBook u, int i, vector<UserBook>& selectArr)
{
	vector<UserBook> UArr;

	get_info(UArr);
	if(selectArr.size()>0)//保证vec是空的
		selectArr.clear();
	int length = UArr.size();
	int count = 0;

	switch(i)
	{
	case 1://cout<<1<<endl;
		for(count = 0;count < length;count++)
		{
			if(u.ID == UArr[count].ID)
			{
				//cout<<"找到学生，编号为："<<count<<endl;//TEST
				selectArr.push_back(UArr[count]);
			}
		}
		break;
	case 2://cout<<1<<endl;
		for(count = 0;count < length;count++)
		{
			if(u.BookID == UArr[count].BookID )
			{
				//cout<<"找到学生，编号为："<<count<<endl;//TEST
				selectArr.push_back(UArr[count]);
			}
		}
		break;
	default:return false;
	}
	if(selectArr.size()==0)
	{
		return false;
	}
	else
	{
		return true;
	}

}


bool DataBase::data_insert(UserBook u)
{
	int i = 0;
	vector<UserBook> UArr;
	get_info(UArr);
	UArr.push_back(u);
	ofstream outf;
	outf.open("UserBook.txt");
	outf<< "\n";
	for(;i < UArr.size();i++)
	{
		outf<< UArr[i].ID + "|" + UArr[i].UserID + "|" + UArr[i].BookID + "|" + UArr[i].Status + "|" + toString(UArr[i].LendDate.Year) + "|" + toString(UArr[i].LendDate.Month) + "|" + toString(UArr[i].LendDate.Day)  << "\n";
	}
	outf.close();
	return true;
}


int DataBase::data_update(UserBook u, UserBook u2)
{
	int i = 0;
	int j = 0;
	vector<UserBook> UArr;
	get_info(UArr);
	for(i = 0;i < UArr.size();i++)
	{
		if(UArr[i].ID == u.ID)
		{
			UArr[i] = u2;
			j++;
		}
	}
	ofstream outf;
	outf.open("UserBook.txt");
	outf<< "\n";
	for(i = 0;i < UArr.size();i++)
	{

		outf<< UArr[i].ID + "|" + UArr[i].UserID + "|" + UArr[i].BookID + "|" + UArr[i].Status + "|" + toString(UArr[i].LendDate.Year) + "|" + toString(UArr[i].LendDate.Month) + "|" + toString(UArr[i].LendDate.Day)  << "\n";
	}
	outf.close();

	return j;
}


int DataBase::data_delete(UserBook u)
{
	int i = 0;
	int j = 0;
	vector<UserBook> UArr;
	get_info(UArr);
	for(vector<UserBook>::iterator it=UArr.begin();it!=UArr.end();++it)
	{
		if(it->ID == u.ID)		
		{
			UArr.erase(it);
			j++;
			break;
		}
	}
	ofstream outf;
	outf.open("UserBook.txt");
	outf<< "\n";
	for(i = 0;i < UArr.size();i++)
	{
		outf<< UArr[i].ID + "|" + UArr[i].UserID + "|" + UArr[i].BookID + "|" + UArr[i].Status + "|" + toString(UArr[i].LendDate.Year) + "|" + toString(UArr[i].LendDate.Month) + "|" + toString(UArr[i].LendDate.Day)  << "\n";
	}
	outf.close();
	return j;
	return 0;
}
