#pragma once
#include<string>
#include "book.h"
using namespace std;
class User
{
private:
	string m_name;
	string m_id;
	int m_borrownum;//可借的书数量
	int m_maxnum;//最大的可借书数量
	BorrowRecord m_records[60];
public:
	User();
	User(string name, string id, int borrownum, int maxnum);
	string getName();
	string getId();
	int getBorrownum();
	int getMaxnum();
	void setName(string name);
	void setId(string id);
	void setBorrownum(int borrownum);
	void setMaxnum(int maxnum);
	void display();
	void borrowBook(Book& book);
	void returnBook(Book& book);
	void dispalyRecords();


};


