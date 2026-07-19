#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world" << endl;

    /*
    Windows上可用， mac， Linux上不可用
    */
    system("pause"); //让程序调用系统的 pause 命令，暂停控制台窗口,控制台会打印"Hello, world"，然后停住，直到你按任意键才关闭窗口

    /*
    更加通用的写法：
    方法一：（简便）
        cin.get();
        等待用户输入回车
    
    方法二：（更加稳定）
        cin.ignore(numeric_limits<streamsize>::max(), '\n);
        cin.get();
    */
    return 0;
}