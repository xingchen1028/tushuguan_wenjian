#include "book.h"

// 默认构造
Book::Book()
{
    m_title = "";
    m_author = "";
    m_publisher = "";
    m_ISBN = "";
    m_id = "";
    m_price = 0;
    m_page = 0;
    m_isBorrowed = false;
}

// 带参构造，修复bool参数逗号错误，新增页数page
Book::Book(string title, string author, string publisher, string ISBN, string id, double price, int page, bool isBorrowed)
{
    m_title = title;
    m_author = author;
    m_publisher = publisher;
    m_ISBN = ISBN;
    m_id = id;
    m_price = price;
    m_page = page;
    m_isBorrowed = isBorrowed;
}

string Book::getTitle()
{
    return m_title;
}
string Book::getAuthor()
{
    return m_author;
}
string Book::getPublisher()
{
    return m_publisher;
}
string Book::getISBN()
{
    return m_ISBN;
}
string Book::getId()
{
    return m_id;
}
double Book::getPrice()
{
    return m_price;
}
int Book::getPage()
{
    return m_page;
}
bool Book::getIsBorrowed()
{
    return m_isBorrowed;
}

void Book::setTitle(string title)
{
    m_title = title;
}
void Book::setAuthor(string author)
{
    m_author = author;
}
void Book::setPublisher(string publisher)
{
    m_publisher = publisher;
}
void Book::setISBN(string ISBN)
{
    m_ISBN = ISBN;
}
void Book::setId(string id)
{
    m_id = id;
}
void Book::setPrice(double price)
{
    m_price = price;
}
void Book::setPage(int page)
{
    m_page = page;
}
void Book::setIsBorrowed(bool isBorrowed)
{
    m_isBorrowed = isBorrowed;
}

void Book::display()
{
    cout << "====图书信息====" << endl;
    cout << "Title: " << m_title << endl;
    cout << "Author: " << m_author << endl;
    cout << "Publisher: " << m_publisher << endl;
    cout << "ISBN: " << m_ISBN << endl;
    cout << "ID: " << m_id << endl;
    cout << "Price: " << m_price << endl;
    cout << "Pages: " << m_page << endl;
    if (m_isBorrowed)
    {
        cout << "This book is borrowed." << endl;
    }
    else
    {
        cout << "This book is not borrowed." << endl;
    }
}

// ISBN合法性校验：简单实现 13位纯数字
bool Book::checkISBNValid()
{
    if (m_ISBN.size() != 13)
        return false;
    for (char ch : m_ISBN)
    {
        if (!isdigit(ch))
            return false;
    }
    return true;
}
