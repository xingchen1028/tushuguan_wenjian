#pragma once
#include <string>
// 前置声明Book
class Book;

class BorrowRecord
{
private:
    Book* m_book;
public:
    BorrowRecord();
    void setBook(Book& book);
    Book* getBook();
};
