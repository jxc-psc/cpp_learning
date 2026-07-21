#include <iostream>
#include <cstdint>

int main() {
    // 1. 加法运算符 (+)
    // 加法运算符用于计算两个数的和。
    // 可以用于整数、浮点数、字符（按ASCII码计算）等类型。
    
    std::cout << "1. 加法运算符 (+):" << std::endl;
    
    int32_t a = 10;
    int32_t b = 5;
    
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << "5 + 3 = " << (5 + 3) << std::endl;
    
    double c = 3.14;
    double d = 2.71;
    std::cout << c << " + " << d << " = " << (c + d) << std::endl;
    
    char ch1 = 'A'; // ASCII码为65
    char ch2 = 'B'; // ASCII码为66
    std::cout << ch1 << " + " << ch2 << " = " << (int)(ch1 + ch2) << std::endl;


    // 2. 减法运算符 (-)
    // 减法运算符用于计算两个数的差。
    // 也可以作为一元运算符，表示负数。
    
    std::cout << "\n2. 减法运算符 (-):" << std::endl;
    
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    std::cout << "5 - 3 = " << (5 - 3) << std::endl;
    std::cout << "3 - 5 = " << (3 - 5) << std::endl;
    
    std::cout << c << " - " << d << " = " << (c - d) << std::endl;
    
    std::cout << "-5 = " << -5 << std::endl;
    std::cout << "-(-5) = " << -(-5) << std::endl;


    // 3. 乘法运算符 (*)
    // 乘法运算符用于计算两个数的乘积。
    
    std::cout << "\n3. 乘法运算符 (*):" << std::endl;
    
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    std::cout << "5 * 3 = " << (5 * 3) << std::endl;
    std::cout << "5 * 0 = " << (5 * 0) << std::endl;
    std::cout << "-5 * 3 = " << (-5 * 3) << std::endl;
    
    std::cout << c << " * " << d << " = " << (c * d) << std::endl;


    // 4. 除法运算符 (/)
    // 除法运算符用于计算两个数的商。
    // 注意：整数除法会截断小数部分，不进行四舍五入。
    // 除数不能为0，否则会导致运行时错误。
    
    std::cout << "\n4. 除法运算符 (/):" << std::endl;
    
    std::cout << a << " / " << b << " = " << (a / b) << std::endl;
    std::cout << "10 / 3 = " << (10 / 3) << std::endl;       // 整数除法，截断为3
    std::cout << "10 / 3.0 = " << (10 / 3.0) << std::endl;     // 浮点数除法，结果为3.333...
    std::cout << "10.0 / 3 = " << (10.0 / 3) << std::endl;     // 浮点数除法
    std::cout << "-10 / 3 = " << (-10 / 3) << std::endl;       // 结果为-3
    
    std::cout << c << " / " << d << " = " << (c / d) << std::endl;
    
    // 整数除法的截断规则：向零取整（truncated towards zero）
    std::cout << "\n整数除法截断规则（向零取整）:" << std::endl;
    std::cout << "7 / 4 = " << (7 / 4) << std::endl;           // 1
    std::cout << "-7 / 4 = " << (-7 / 4) << std::endl;         // -1
    std::cout << "7 / -4 = " << (7 / -4) << std::endl;         // -1
    std::cout << "-7 / -4 = " << (-7 / -4) << std::endl;       // 1
    
    // 将整数除法转换为浮点数除法的方法
    // 在C++中，如果两个操作数都是整数，除法会进行整数除法（截断小数部分）。
    // 要得到浮点数结果，需要将至少一个操作数转换为浮点数类型。
    
    std::cout << "\n将整数除法转换为浮点数除法的方法:" << std::endl;
    
    // 方法1: 使用浮点数字面量（隐式转换）
    // 将其中一个操作数改为浮点数字面量，另一个整数会被隐式转换为浮点数。
    std::cout << "\n方法1: 使用浮点数字面量（隐式转换）:" << std::endl;
    std::cout << "10 / 3 = " << (10 / 3) << std::endl;           // 整数除法，结果为3
    std::cout << "10 / 3.0 = " << (10 / 3.0) << std::endl;       // 浮点数除法，结果为3.333...
    std::cout << "10.0 / 3 = " << (10.0 / 3) << std::endl;       // 浮点数除法，结果为3.333...
    std::cout << "10.0 / 3.0 = " << (10.0 / 3.0) << std::endl;   // 浮点数除法，结果为3.333...
    
    // 方法2: 使用强制类型转换（显式转换）
    // 使用static_cast将整数转换为double类型。
    std::cout << "\n方法2: 使用static_cast进行显式转换:" << std::endl;
    int32_t x1 = 10;
    int32_t y1 = 3;
    std::cout << "static_cast<double>(" << x1 << ") / " << y1 << " = " 
              << (static_cast<double>(x1) / y1) << std::endl;
    std::cout << x1 << " / static_cast<double>(" << y1 << ") = " 
              << (x1 / static_cast<double>(y1)) << std::endl;
    std::cout << "static_cast<double>(" << x1 << ") / static_cast<double>(" << y1 << ") = " 
              << (static_cast<double>(x1) / static_cast<double>(y1)) << std::endl;
    
    // 方法3: 使用C风格类型转换（不推荐）
    std::cout << "\n方法3: 使用C风格类型转换（不推荐）:" << std::endl;
    std::cout << "(double)" << x1 << " / " << y1 << " = " << ((double)x1 / y1) << std::endl;
    
    // 方法4: 使用乘以1.0的技巧（隐式转换）
    // 将其中一个操作数乘以1.0，使其变为浮点数。
    std::cout << "\n方法4: 使用乘以1.0的技巧（隐式转换）:" << std::endl;
    std::cout << x1 << " * 1.0 / " << y1 << " = " << (x1 * 1.0 / y1) << std::endl;
    std::cout << x1 << " / (" << y1 << " * 1.0) = " << (x1 / (y1 * 1.0)) << std::endl;
    
    // 方法5: 使用static_cast转换整个表达式结果
    // 注意：这不会改变整数除法的行为，因为整数除法已经完成后才进行转换。
    std::cout << "\n方法5: 注意事项（错误示范）:" << std::endl;
    std::cout << "static_cast<double>(" << x1 << " / " << y1 << ") = " 
              << static_cast<double>(x1 / y1) << std::endl;  // 先整数除法得3，再转为3.0
    
    // 隐式类型转换规则总结：
    // 当一个算术运算符的两个操作数类型不同时，C++会进行隐式类型转换（通常转换为更宽的类型）。
    // 在除法运算中：
    // - 如果两个操作数都是整数，执行整数除法（截断小数）
    // - 如果至少一个操作数是浮点数，执行浮点数除法（保留小数）
    // 类型转换优先级（从低到高）：int < float < double < long double
    
    std::cout << "\n隐式类型转换示例:" << std::endl;
    int32_t int_val = 10;
    float float_val = 3.0f;
    double double_val = 3.0;
    
    std::cout << "int / float = " << (int_val / float_val) << " (类型: float)" << std::endl;
    std::cout << "int / double = " << (int_val / double_val) << " (类型: double)" << std::endl;
    std::cout << "float / int = " << (float_val / int_val) << " (类型: float)" << std::endl;


    // 5. 取模运算符 (%)
    // 取模运算符用于计算两个整数相除的余数。
    // 注意：取模运算符只能用于整数类型，不能用于浮点数。
    // 余数的符号与被除数相同。
    // 浮点数取模使用std::fmod函数（在<cmath>头文件中）。
    
    std::cout << "\n5. 取模运算符 (%):" << std::endl;
    
    std::cout << a << " % " << b << " = " << (a % b) << std::endl;
    std::cout << "10 % 3 = " << (10 % 3) << std::endl;         // 1
    std::cout << "10 % 5 = " << (10 % 5) << std::endl;         // 0
    std::cout << "9 % 10 = " << (9 % 10) << std::endl;         // 9
    
    // 负数取模：余数的符号与被除数相同
    std::cout << "\n负数取模（余数符号与被除数相同）:" << std::endl;
    std::cout << "-10 % 3 = " << (-10 % 3) << std::endl;       // -1
    std::cout << "10 % -3 = " << (10 % -3) << std::endl;       // 1
    std::cout << "-10 % -3 = " << (-10 % -3) << std::endl;     // -1
    
    // 取模运算的恒等式：(a / b) * b + (a % b) = a
    std::cout << "\n验证恒等式 (a / b) * b + (a % b) = a:" << std::endl;
    int32_t x = -10;
    int32_t y = 3;
    std::cout << "(" << x << " / " << y << ") * " << y << " + (" << x << " % " << y << ") = " 
              << ((x / y) * y + (x % y)) << std::endl;


    // 6. 递增运算符 (++)
    // 递增运算符用于将变量的值加1。
    // 分为前置递增和后置递增：
    // - 前置递增 ++var：先加1，再返回新值
    // - 后置递增 var++：先返回原值，再加1
    
    std::cout << "\n6. 递增运算符 (++):" << std::endl;
    
    int32_t num1 = 5;
    
    std::cout << "Initial value: num1 = " << num1 << std::endl;
    
    std::cout << "\n前置递增 (++num1):" << std::endl;
    std::cout << "Expression result: " << ++num1 << std::endl;  // 先加1，再返回6
    std::cout << "After ++num1: num1 = " << num1 << std::endl;  // 此时num1为6
    
    int32_t num2 = 5;
    std::cout << "\n后置递增 (num2++):" << std::endl;
    std::cout << "Expression result: " << num2++ << std::endl;  // 先返回5，再加1
    std::cout << "After num2++: num2 = " << num2 << std::endl;  // 此时num2为6
    
    // 递增运算符的链式使用
    std::cout << "\n递增运算符的链式使用:" << std::endl;
    int32_t num3 = 0;
    std::cout << "num3 = " << num3 << std::endl;
    std::cout << "++num3 = " << ++num3 << std::endl;
    std::cout << "num3++ = " << num3++ << std::endl;
    std::cout << "++num3 = " << ++num3 << std::endl;
    std::cout << "Final num3 = " << num3 << std::endl;


    // 7. 递减运算符 (--)
    // 递减运算符用于将变量的值减1。
    // 分为前置递减和后置递减：
    // - 前置递减 --var：先减1，再返回新值
    // - 后置递减 var--：先返回原值，再减1
    
    std::cout << "\n7. 递减运算符 (--):" << std::endl;
    
    int32_t num4 = 5;
    
    std::cout << "Initial value: num4 = " << num4 << std::endl;
    
    std::cout << "\n前置递减 (--num4):" << std::endl;
    std::cout << "Expression result: " << --num4 << std::endl;  // 先减1，再返回4
    std::cout << "After --num4: num4 = " << num4 << std::endl;  // 此时num4为4
    
    int32_t num5 = 5;
    std::cout << "\n后置递减 (num5--):" << std::endl;
    std::cout << "Expression result: " << num5-- << std::endl;  // 先返回5，再减1
    std::cout << "After num5--: num5 = " << num5 << std::endl;  // 此时num5为4
    
    // 递减运算符的链式使用
    std::cout << "\n递减运算符的链式使用:" << std::endl;
    int32_t num6 = 5;
    std::cout << "num6 = " << num6 << std::endl;
    std::cout << "--num6 = " << --num6 << std::endl;
    std::cout << "num6-- = " << num6-- << std::endl;
    std::cout << "--num6 = " << --num6 << std::endl;
    std::cout << "Final num6 = " << num6 << std::endl;


    // 8. 运算符优先级和结合性
    // 算术运算符的优先级（从高到低）：
    // 1. 一元运算符 (+, -, ++, --)
    // 2. 乘法、除法、取模 (*, /, %)
    // 3. 加法、减法 (+, -)
    // 结合性：从左到右（除了一元运算符是从右到左）
    
    std::cout << "\n8. 运算符优先级和结合性:" << std::endl;
    
    std::cout << "3 + 4 * 2 = " << (3 + 4 * 2) << std::endl;         // 先乘后加，结果为11
    std::cout << "(3 + 4) * 2 = " << ((3 + 4) * 2) << std::endl;     // 使用括号改变优先级，结果为14
    
    std::cout << "10 / 2 * 5 = " << (10 / 2 * 5) << std::endl;       // 从左到右，结果为25
    std::cout << "10 / (2 * 5) = " << (10 / (2 * 5)) << std::endl;   // 使用括号，结果为1
    
    std::cout << "-5 + 3 = " << (-5 + 3) << std::endl;               // 一元负号优先级更高，结果为-2
    
    std::cout << "-5 * 3 = " << (-5 * 3) << std::endl;               // 结果为-15
    
    std::cout << "10 % 3 * 2 = " << (10 % 3 * 2) << std::endl;       // 从左到右，结果为2
    
    // 递增递减运算符的优先级
    std::cout << "\n递增递减运算符的优先级:" << std::endl;
    int32_t num9 = 5;
    std::cout << "num9 = " << num9 << std::endl;
    std::cout << "++num9 * 2 = " << (++num9 * 2) << std::endl;       // 先递增，再乘法
    std::cout << "num9 = " << num9 << std::endl;
    
    int32_t num10 = 5;
    std::cout << "\nnum10 = " << num10 << std::endl;
    std::cout << "num10++ * 2 = " << (num10++ * 2) << std::endl;     // 先乘法，再递增
    std::cout << "num10 = " << num10 << std::endl;


    // 9. 算术运算符汇总表
    // +------------------+------------------+------------------+
    // |   运算符         |   名称           |   示例           |
    // +------------------+------------------+------------------+
    // |   +              |   加法           |   a + b          |
    // |   -              |   减法/取负      |   a - b, -a      |
    // |   *              |   乘法           |   a * b          |
    // |   /              |   除法           |   a / b          |
    // |   %              |   取模           |   a % b          |
    // |   ++             |   递增           |   ++a, a++       |
    // |   --             |   递减           |   --a, a--       |
    // +------------------+------------------+------------------+
    // 注：复合赋值运算符（+=, -=, *=, /=, %=等）请参考 Assignment_operators.cpp


    // 10. 常见问题和注意事项
    
    std::cout << "\n10. 常见问题和注意事项:" << std::endl;
    
    // 10.1 整数除法截断
    std::cout << "\n10.1 整数除法会截断小数部分（向零取整）:" << std::endl;
    std::cout << "7 / 2 = " << (7 / 2) << " (not 3.5)" << std::endl;
    std::cout << "-7 / 2 = " << (-7 / 2) << " (not -3.5)" << std::endl;
    
    // 10.2 避免除数为零
    std::cout << "\n10.2 避免除数为零（会导致运行时错误）:" << std::endl;
    // std::cout << 5 / 0 << std::endl;  // 这行代码会导致程序崩溃
    
    // 10.3 溢出问题
    std::cout << "\n10.3 整数溢出问题（未定义行为）:" << std::endl;
    int32_t max_int = 2147483647;
    std::cout << "max_int = " << max_int << std::endl;
    std::cout << "max_int + 1 = " << (max_int + 1) << std::endl;  // 溢出，结果为-2147483648
    
    // 10.4 递增递减运算符的副作用
    std::cout << "\n10.4 避免在同一表达式中多次使用递增递减运算符:" << std::endl;
    int32_t num11 = 5;
    // std::cout << num11++ + ++num11 << std::endl;  // 未定义行为！不同编译器结果不同
    
    // 10.5 浮点数精度问题
    // 二进制浮点数无法精确表示部分十进制小数，工程上不要直接用 == 判断浮点数相等
    std::cout << "\n10.5 浮点数精度问题:" << std::endl;
    std::cout << "0.1 + 0.2 = " << (0.1 + 0.2) << std::endl;       // 可能不是精确的0.3


    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}