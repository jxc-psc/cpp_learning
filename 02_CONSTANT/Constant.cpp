# include <iostream>
using namespace std;

//常量的定义方式
// 1. #define 定义的常量
// 2. const修饰的变量
// 常量不能进行修改，一旦修改就会报错

// 1.#define定义的宏常量
#define DAY 7

int main() {
    cout << "一周有" << DAY << "天" <<endl;

    const int MONTH = 30;
    cout << "一个月有" << MONTH << "天" <<endl; 

    system("pause");
    return 0;
}