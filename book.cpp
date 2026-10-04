
#include "book.h"
#include<iostream>
using namespace std;

book::book()
{
	m_title = "";
	m_author = "";
	m_publisher = "";
	m_ISBN = "";
	m_id = "";
	m_price = 0;
	m_isBorrowed = false;

}

book::book(string title, string author, string publisher, string ISBN, string id, double price, bool, isBorrowed)
{
	m_title = title;
	m_author = author;
	m_publisher = publisher;
	m_ISBN = ISBN;
	m_id = id;
	m_price = price;
	m_isBorrowed = false;
}

string book::getTitle()
{
	return m_title;
}

string book::getAuthor()
{
	return m_author;
}

string book::getPublisher()
{
	return m_publisher;
}

string book::getISBN()
{
	return m_ISBN;
}

string book::getId()
{
	return m_id;
}

double book::getPrice()
{
	return m_price;
}

bool book::getIsBorrowed()
{
	return false;
}

void book::setTitle(string title)
{
	m_title = title;
}

void book::display()
{
	cout << "Title: " << m_title << endl;
	cout << "Author: " << m_author << endl;
	cout << "Publisher: " << m_publisher << endl;
	cout << "ISBN: " << m_ISBN << endl;
	cout << "ID: " << m_id << endl;
	cout << "Price: " << m_price << endl;
	if (m_isBorrowed)
	{
		cout << "This book is borrowed." << endl;
	}
	else
	{
		cout << "This book is not borrowed." << endl;
	}

}
