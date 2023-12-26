// experiment 4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

class student {//定義類
public:
    int  num;
    int  grade;
    void getnum() {//取得學號
        cin >> num;
    }
    void getgrade() {//取得成績
        cin >> grade;
    }

};

student* max(student a[5], int size) {//以回傳指針的方式將指針指向存有最大數據的數組成員
    for (int j = 0; j < size; j++) {
        student* maxstudent = &a[0];//預設最大為第一個成員
        int maxgrade = maxstudent->grade;//取最高成績為第一個成員的成績
        if (maxgrade < a[j].grade) {
            maxgrade = a[j].grade;
            maxstudent = &a[j];
        }
        return maxstudent;
    }
}

int main()
{
    student data[5];
    for (int i = 0; i < 5; i++) {//輸入資料
        cout << "enter "<<i+1<<" student's id" << endl;
        data[i].getnum();
        cout<< "enter " << i + 1 << " student's grade" << endl;
        data[i].getgrade();
    }

    student* maxstudent = max(data, 5);
    cout << "id " << maxstudent->num <<" has the highest grade " << maxstudent->grade << endl;
    return 0;

}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
