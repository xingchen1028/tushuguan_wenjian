#pragma once
#include <string>
#include <iostream>
using namespace std;
class Book
{
private:
    string m_title;
    string m_author;
    string m_publisher;
    string m_ISBN;
    string m_id;
    double m_price;
    int m_page;         // 新增：页数（需求要求）
    bool m_isBorrowed;  // 在馆状态 false=可借 true=已借出
public:
    // 构造函数
    Book();
    Book(string title, string author, string publisher, string ISBN, string id, double price, int page, bool isBorrowed);

    // get set
    string getTitle();
    string getAuthor();
    string getPublisher();
    string getISBN();
    string getId();
    double getPrice();
    int getPage();
    bool getIsBorrowed();

    void setTitle(string title);
    void setAuthor(string author);
    void setPublisher(string publisher);
    void setISBN(string ISBN);
    void setId(string id);
    void setPrice(double price);
    void setPage(int page);
    void setIsBorrowed(bool isBorrowed);

    void display();
    // 新增：校验ISBN是否合法（简单规则：长度13，全部是数字）
    bool checkISBNValid();
};
