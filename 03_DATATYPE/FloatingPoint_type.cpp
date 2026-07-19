#include <iostream>
using namespace std;

int main() {
    float a = 3.14f;
    // float类型的变量可以存储小数部分, 但精度较低, 通常为6-7位有效数字
    // 若写float a = 3.14, 编译器会默认3.14为double类型, 这时会发生隐式类型转换, 从double转换为float, 可能会导致精度损失
    // 因此在定义float类型时, 最好在数值后面加上f或F来明确指定为float类型

    double b = 3.14;
    // 定义double类型的变量时, 可以直接使用3.14, 因为3.14默认就是double类型
    // double类型的变量可以存储更大范围的数值, 以及更高精度的小数部分, 因此在需要更高精度的计算时, 可以使用double类型

    cout << "float a = " << a << endl;
    cout << "double b = " << b << endl;

    a = 3.14159265358979323846f; // 这里的数值超过了float的精度范围, 会被截断
    b = 3.14159265358979323846; // double类型可以存储更高精度的数值, 但仍然会有一定的精度限制
    float c = 0.0000123456f;

    // 如果数字位数较多的话，默认输出六位有效数字；
    cout << "float a = " << a << endl;
    cout << "double b = " << b << endl; 
    cout << "float c = " << c << endl;

    system("pause");
    return 0;
}