#include <iostream>
#include "windows.h"

using namespace std;

int main(){
    // 设置终端使用UTF-8编码
    SetConsoleOutputCP(65001);
    
    cout << "Hello, from sample!" << endl;
    cout << "乐" << endl;
}
