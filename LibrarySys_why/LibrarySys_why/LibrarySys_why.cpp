// LibrarySys_why.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <windows.h>
#include <iostream>
#include "book.h"
#include "User.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(65001); //设置控制台输出为UTF-8
    SetConsoleCP(65001);

    // 创建图书对象
    Book b1("C++程序设计", "张力生", "清华大学出版社", "9787302632900", "B001",59.9,288, false);
    Book b2("数据结构", "蔡茂蓉", "西南大学出版社", "9787569733747", "B002",42.8,145, false);

    // 校验ISBN
    if (b1.checkISBNValid())
        cout << "b1 ISBN合法" << endl;
    else
        cout << "b1 ISBN不合法" << endl;

    b1.display();

    // 创建学生
    User stu("张三", "2025001", 0, 3);
    stu.display();

    // 测试借书
    stu.borrowBook(b1);
    stu.displayRecords();
    b1.display();

    // 再次借同一本书（失败）
    stu.borrowBook(b1);

    // 借第二本书
    stu.borrowBook(b2);
    stu.displayRecords();

    // 还书
    stu.returnBook(b1);
    stu.displayRecords();
    b1.display();

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
