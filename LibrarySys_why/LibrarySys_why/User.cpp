#include "User.h"
#include "book.h"
#include <iostream>
using namespace std;

User::User()
{
    m_name = "";
    m_id = "";
    m_borrownum = 0;
    m_maxnum = 5; // 默认最多借5本
}

User::User(string name, string id, int borrownum, int maxnum)
{
    m_name = name;
    m_id = id;
    m_borrownum = borrownum;
    m_maxnum = maxnum;
}

string User::getName()
{
    return m_name;
}
string User::getId()
{
    return m_id;
}
int User::getBorrownum()
{
    return m_borrownum;
}
int User::getMaxnum()
{
    return m_maxnum;
}

void User::setName(string name)
{
    m_name = name;
}
void User::setId(string id)
{
    m_id = id;
}
void User::setBorrownum(int borrownum)
{
    m_borrownum = borrownum;
}
void User::setMaxnum(int maxnum)
{
    m_maxnum = maxnum;
}

void User::display()
{
    cout << "====学生信息====" << endl;
    cout << "Name: " << m_name << endl;
    cout << "Student ID: " << m_id << endl;
    cout << "Borrowed count: " << m_borrownum << endl;
    cout << "Max borrow count: " << m_maxnum << endl;
}

// 借书函数：返回true成功 false失败
bool User::borrowBook(Book& book)
{
    // 学生是否达到借书上限
    if (m_borrownum >= m_maxnum)
    {
        cout << "借书失败，你已经达到最大借书数量" << endl;
        return false;
    }
    // 图书是否已经被借出
    if (book.getIsBorrowed())
    {
        cout << "借书失败，这本书已经被借走了" << endl;
        return false;
    }
    // 借书成功：记录,修改双方状态
    m_records[m_borrownum].setBook(book);
    m_borrownum++;
    book.setIsBorrowed(true);
    cout << "借书成功！" << endl;
    return true;
}

// 新增还书函数
bool User::returnBook(Book& book)
{
    if (m_borrownum <= 0)
    {
        cout << "还书失败！你没有借阅任何图书。" << endl;
        return false;
    }
    if (!book.getIsBorrowed())
    {
        cout << "还书失败！这本书没有被借出。" << endl;
        return false;
    }
    // 找到记录
    m_borrownum--;
    m_records[m_borrownum].setBook(*(new Book()));
    book.setIsBorrowed(false);
    cout << "还书成功！" << endl;
    return true;
}

void User::displayRecords()
{
    cout << "====借阅记录====" << endl;
    if (m_borrownum == 0)
    {
        cout << "暂无借阅图书" << endl;
        return;
    }
    for (int i = 0; i < m_borrownum; i++)
    {
        Book* pBook = m_records[i].getBook();
        if (pBook != nullptr)
        {
            cout << "[" << i + 1 << "] ";
            cout << pBook->getTitle() << "  ISBN:" << pBook->getISBN() << endl;
        }
    }
}
