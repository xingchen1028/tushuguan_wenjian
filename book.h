#pragma once
#include<string>
using namespace std;
class book
{
private:
	string m_title;
	string m_author;
	string m_publisher;
	string m_ISBN;
	string m_id;
	double m_price;
	bool m_isBorrowed;

public:
	book();
	book(string title, string author, string publisher, string ISBN, string id, double price, bool, isBorrowed);
	string getTitle();
	string getAuthor();
	string getPublisher();
	string getISBN();
	string getId();
	double getPrice();
	bool getIsBorrowed();

	void setTitle(string title);
	void setAuthor(string author);
	void setPublisher(string publisher);
	void setISBN(string ISBN);
	void setId(string id);
	void setPrice(double price);
	void setIsBorrowed(bool isBorrowed);

	void display();

};
