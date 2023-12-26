// experiment 5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

class Point {//定義類
private:
    int x;
    int y;
public:
    Point(int pointx, int pointy) {//將函數指向private
        this->x=pointx,this->y=pointy;
    }
    void setPoint(int i, int j) {//改變座標
        x += i;
        y += j;
    }
    void display() {//輸出座標
        cout << "the point : (" << x << " ," << y << " )" << endl;
    }
};

int main()
{
    int x, y;//定義座標值
    cout << "enter the coordinate of the point:" << endl;
    cin >> x >> y;
    Point p(x,y);
    int i, j;//定義改變值
    cout << "the units to be changed" << endl;
    cin >> i >> j;
    p.setPoint(i, j);//改變座標
    p.display();//輸出座標
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
