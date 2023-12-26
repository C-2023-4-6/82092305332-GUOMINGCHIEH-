//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include "student.h"    //不要漏写此行，否则编译通不过
using namespace std;

void Student::display()         //在类外定义display类函数
{
    cout << "num : " << num << endl;
    cout << "name :" << name << endl;
    cout << "sex : " << sex << endl;
}
void Student::set_value() {//輸入資料
    cout << "enter number : "<<endl;
    cin >> num;
    cout << "enter name : "<<endl;
    cin.ignore();//忽略上個輸入的類型，否則會被自動跳過，因為被認為是空字串
    cin.getline(name, sizeof(name));
    cout << "enter sex : " << endl;;
    cin >> sex;
}