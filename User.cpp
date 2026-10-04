#include "User.h"

void User::borrowBook(Book& book)
{
	if (m_borrownum < m_maxnum)
	{
		if (book.getIsBorrowed())
		{
			cout << "This book is borrrowed." << endl;
			return;
		}
		else
		{
			m_records[m_borrownum].setBook(book);
			m_borrownum++;
			book.setIsBorrowed(true);
		}
	}
	else
	{
		cout << "You have borrowed too many books." << endl;
	}
}
