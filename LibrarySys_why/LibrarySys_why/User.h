#pragma once
#include <string>
#include "BorrowRecord.h"
using namespace std;

// 前置声明Book，避免循环头文件包含
class Book;

class User
{
private:
    string m_name;
    string m_id;            // 学生学号
    int m_borrownum;        // 当前已借数量
    int m_maxnum;           // 最大可借数量
    BorrowRecord m_records[60]; // 借阅记录数组，最多存60条
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
    // 借书：引用传递Book对象
    bool borrowBook(Book& book);
    // 还书
    bool returnBook(Book& book);
    // 查看借阅记录，修复拼写dispaly→display
    void displayRecords();
};
