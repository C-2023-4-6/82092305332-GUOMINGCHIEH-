// experiment 3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int height;
    int width;
public:
    rectangle() {//定義一個構造函數，每當一個對象生成時，調用以輸入資料
        cout << "enter length : " << endl;
        cin >> length;
        cout << "enter width : " << endl;
        cin >> width;
        cout << "enter height : " << endl;
        cin >> height;
    };
    int value() {//計算體積
        int value = length * width * height;
        return value;
    }
};

int main()
{
    cout << "enter rec1 data :" << endl;//輸入第一個長方形的資料
    rectangle rec1;
    cout << "enter rec2 data :" << endl;//輸入第二個長方形的資料
    rectangle rec2;
    cout << "enter rec3 data : " << endl;//輸入第三個長方形的資料
    rectangle rec3;
    cout << "rec1 value : " << rec1.value() << endl;//計算並輸出第一個長方形的體積
    cout << "rec2 value : " << rec2.value() << endl;//計算並輸出第二個長方形的體積
    cout << "rec3 value : " << rec3.value() << endl;//計算並輸出第三個長方形的體積

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
