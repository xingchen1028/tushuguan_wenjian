#include "BorrowRecord.h"
#include "book.h"

BorrowRecord::BorrowRecord()
{
    m_book = nullptr;
}

void BorrowRecord::setBook(Book& book)
{
    m_book = &book;
}

Book* BorrowRecord::getBook()
{
    return m_book;
}
