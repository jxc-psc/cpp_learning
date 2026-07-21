#include <iostream>
#include <cstdint>
#include <string>

int main() {
    // 1. 简单赋值运算符 (=)
    // 简单赋值运算符将右边的值赋给左边的变量。
    // 赋值运算符的左边必须是一个可修改的左值（如变量）。
    
    std::cout << "1. 简单赋值运算符 (=):" << std::endl;
    
    int32_t a = 10;
    std::cout << "a = 10: " << a << std::endl;
    
    a = 20;
    std::cout << "a = 20: " << a << std::endl;
    
    double pi = 3.14159;
    std::cout << "pi = 3.14159: " << pi << std::endl;
    
    char ch = 'A';
    std::cout << "ch = 'A': " << ch << std::endl;
    
    // 赋值运算符返回值
    // 赋值运算符返回赋值后变量的值，可以链式使用。
    std::cout << "\n赋值运算符的返回值（链式赋值）:" << std::endl;
    int32_t x, y, z;
    x = y = z = 5;
    std::cout << "x = y = z = 5: x=" << x << ", y=" << y << ", z=" << z << std::endl;
    
    int32_t result;
    std::cout << "(result = a) = " << (result = a) << std::endl;


    // 2. 复合赋值运算符
    // 复合赋值运算符将算术运算和赋值运算结合在一起：
    // +=, -=, *=, /=, %=
    // 复合赋值运算符的优先级低于算术运算符。
    
    std::cout << "\n2. 复合赋值运算符:" << std::endl;
    
    // 2.1 加法赋值运算符 (+=)
    std::cout << "\n2.1 加法赋值运算符 (+=):" << std::endl;
    int32_t num1 = 10;
    num1 += 5;  // 等价于 num1 = num1 + 5
    std::cout << "num1 += 5: " << num1 << std::endl;
    
    double num2 = 3.14;
    num2 += 2.71;
    std::cout << "num2 += 2.71: " << num2 << std::endl;
    
    std::string str = "Hello";
    str += " World";  // 字符串也支持+=运算符
    std::cout << "str += \" World\": " << str << std::endl;
    
    // 2.2 减法赋值运算符 (-=)
    std::cout << "\n2.2 减法赋值运算符 (-=):" << std::endl;
    int32_t num3 = 10;
    num3 -= 3;  // 等价于 num3 = num3 - 3
    std::cout << "num3 -= 3: " << num3 << std::endl;
    
    // 2.3 乘法赋值运算符 (*=)
    std::cout << "\n2.3 乘法赋值运算符 (*=):" << std::endl;
    int32_t num4 = 5;
    num4 *= 4;  // 等价于 num4 = num4 * 4
    std::cout << "num4 *= 4: " << num4 << std::endl;
    
    // 2.4 除法赋值运算符 (/=)
    std::cout << "\n2.4 除法赋值运算符 (/=):" << std::endl;
    int32_t num5 = 20;
    num5 /= 4;  // 等价于 num5 = num5 / 4
    std::cout << "num5 /= 4: " << num5 << std::endl;
    
    int32_t num6 = 10;
    num6 /= 3;  // 整数除法，结果为3
    std::cout << "num6 /= 3: " << num6 << std::endl;
    
    // 2.5 取模赋值运算符 (%=)
    std::cout << "\n2.5 取模赋值运算符 (%=):" << std::endl;
    int32_t num7 = 10;
    num7 %= 3;  // 等价于 num7 = num7 % 3
    std::cout << "num7 %= 3: " << num7 << std::endl;
    
    // 负数取模赋值
    // C++11 后：a % b 的结果符号与a保持一致；C++11之前标准未定义
    int32_t num8 = -10;
    num8 %= 3;  // 等价于 num8 = num8 % 3
    std::cout << "num8 = -10, num8 %= 3: " << num8 << std::endl; // 本例输出-1
    
    // 注：位运算复合赋值运算符（&=, |=, ^=, <<=, >>=）请参考 Bitwise_operators.cpp


    // 3. 复合赋值运算符与普通赋值的区别
    // 复合赋值运算符在某些情况下更高效，因为变量只被求值一次。
    // 对于简单变量，编译器通常会优化为相同的代码。
    // 但对于复杂表达式（如数组元素、指针解引用等），复合赋值更高效。
    
    std::cout << "\n3. 复合赋值运算符与普通赋值的区别:" << std::endl;
    
    int32_t arr[5] = {1, 2, 3, 4, 5};
    int32_t index = 2;
    
    // 普通赋值：arr[index]被求值两次
    arr[index] = arr[index] + 10;
    std::cout << "arr[" << index << "] = arr[" << index << "] + 10: " << arr[index] << std::endl;
    
    // 复合赋值：arr[index]只被求值一次
    arr[index] += 10;
    std::cout << "arr[" << index << "] += 10: " << arr[index] << std::endl;


    // 4. 赋值运算符的优先级和结合性
    // 赋值运算符的优先级非常低，通常在所有运算符之后执行。
    // 赋值运算符的结合性是从右到左。
    
    std::cout << "\n4. 赋值运算符的优先级和结合性:" << std::endl;
    
    // 优先级示例
    int32_t num14;
    num14 = 3 + 4 * 2;  // 先计算3 + 4 * 2 = 11，再赋值
    std::cout << "num14 = 3 + 4 * 2: " << num14 << std::endl;
    
    // 结合性示例（从右到左）
    int32_t num15, num16, num17;
    num15 = num16 = num17 = 10;  // 先num17=10，再num16=num17，再num15=num16
    std::cout << "num15 = num16 = num17 = 10: " 
              << "num15=" << num15 << ", num16=" << num16 << ", num17=" << num17 << std::endl;
    
    // 复合赋值运算符的优先级也很低，但高于简单赋值
    int32_t num18 = 5;
    num18 += 3 * 2;  // 先计算3 * 2 = 6，再num18 += 6，结果为11
    std::cout << "num18 += 3 * 2 (num18=5): " << num18 << std::endl;


    // 5. 赋值运算符的返回值
    // 赋值运算符返回左值的引用，可以用于表达式中。
    
    std::cout << "\n5. 赋值运算符的返回值:" << std::endl;
    
    int32_t num19 = 10;
    int32_t num20 = 20;
    
    // 使用赋值表达式的返回值
    std::cout << "(num19 = 100) = " << (num19 = 100) << std::endl;
    
    // 在条件语句中使用
    if ((num20 = 50) > 40) {
        std::cout << "num20 = 50 is greater than 40" << std::endl;
    }
    
    // 交换两个变量（使用赋值返回值）
    std::cout << "\n交换两个变量（使用赋值返回值）:" << std::endl;
    int32_t temp = num19;
    num19 = num20;
    num20 = temp;
    std::cout << "After swap: num19=" << num19 << ", num20=" << num20 << std::endl;


    // 6. 赋值运算符与隐式类型转换
    // 在赋值时，如果右边的值类型与左边的变量类型不同，会发生隐式类型转换。
    
    std::cout << "\n6. 赋值运算符与隐式类型转换:" << std::endl;
    
    int32_t int_num;
    double double_num = 3.14;
    
    // double 转 int（截断小数部分）
    int_num = double_num;
    std::cout << "int_num = 3.14: " << int_num << std::endl;
    
    // int 转 double
    double_num = 10;
    std::cout << "double_num = 10: " << double_num << std::endl;
    
    // char 转 int（ASCII码）
    char ch_num = 'A';
    int_num = ch_num;
    std::cout << "int_num = 'A': " << int_num << std::endl;


    // 7. 赋值运算符汇总表
    // +------------------+------------------+------------------+
    // |   运算符         |   名称           |   等价表达式     |
    // +------------------+------------------+------------------+
    // |   =              |   简单赋值       |   a = b          |
    // |   +=             |   加等于         |   a = a + b      |
    // |   -=             |   减等于         |   a = a - b      |
    // |   *=             |   乘等于         |   a = a * b      |
    // |   /=             |   除等于         |   a = a / b      |
    // |   %=             |   模等于         |   a = a % b      |
    // +------------------+------------------+------------------+
    // 注：位运算复合赋值运算符（&=, |=, ^=, <<=, >>=）请参考 Bitwise_operators.cpp


    // 8. 常见问题和注意事项
    
    std::cout << "\n8. 常见问题和注意事项:" << std::endl;
    
    // 8.1 区分赋值运算符和相等运算符
    std::cout << "\n8.1 区分赋值运算符(=)和相等运算符(==):" << std::endl;
    int32_t num21 = 5;
    
    // 错误：在条件中使用了赋值运算符而不是相等运算符
    if (num21 = 10) {  // 这里会赋值并返回10（非零为true）
        std::cout << "This is always true (num21 = 10)" << std::endl;
    }
    
    // 正确：使用相等运算符
    if (num21 == 10) {
        std::cout << "num21 == 10 is true" << std::endl;
    }
    
    // 8.2 常量不能赋值
    std::cout << "\n8.2 常量不能赋值（编译错误）:" << std::endl;
    const int32_t MAX_VALUE = 100;
    // MAX_VALUE = 200;  // 编译错误：不能修改const变量
    
    // 8.3 初始化和赋值的区别
    std::cout << "\n8.3 初始化和赋值的区别:" << std::endl;
    int32_t num22 = 5;   // 初始化（定义时赋值）
    num22 = 10;          // 赋值（定义后修改）
    
    // 8.4 复合赋值的类型转换
    std::cout << "\n8.4 复合赋值的类型转换:" << std::endl;
    int32_t num23 = 5;
    num23 += 3.14;  // 先做浮点数的加法，之后再整体截断转为int32_t类型
    std::cout << "num23 += 3.14 (num23=5): " << num23 << std::endl;


    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}