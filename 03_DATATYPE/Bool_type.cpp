#include <iostream>

int main() {
    // 1. 布尔类型（bool）
    // 布尔类型用于表示逻辑值，只有两个可能的取值：true（真）和false（假）。
    // 在C++中，布尔类型的大小通常为1字节，但这取决于编译器和平台。
    bool flag1 = true;   // 声明一个布尔变量并初始化为true
    bool flag2 = false;  // 声明一个布尔变量并初始化为false

    std::cout << "1. 布尔类型（bool）:" << std::endl;
    std::cout << "flag1 = " << flag1 << std::endl; // 默认输出1，表示true
    std::cout << "flag2 = " << flag2 << std::endl; // 默认输出0，表示false
    std::cout << "sizeof(bool) = " << sizeof(bool) << " 字节" << std::endl;

    // 2. 使用std::boolalpha输出true/false
    // 默认情况下，cout输出bool类型时会显示1和0，而不是true和false。
    // 使用std::boolalpha操纵符可以让cout输出true和false; 使用std::noboolalpha可以恢复默认输出
    std::cout << "\n2. 使用std::boolalpha输出true/false:" << std::endl;
    std::cout << std::boolalpha;              // 设置输出格式为true/false
    std::cout << "flag1 = " << flag1 << std::endl; // 输出true
    std::cout << "flag2 = " << flag2 << std::endl; // 输出false
    std::cout << std::noboolalpha;            // 恢复默认输出格式
    std::cout << "flag1 = " << flag1 << std::endl; // 输出1
    std::cout << "flag2 = " << flag2 << std::endl; // 输出0

    // 3. 布尔运算
    // C++支持逻辑运算符，包括 &&（逻辑与）、||（逻辑或）、!（逻辑非）。
    // 逻辑运算符用于组合布尔表达式，返回布尔值。
    
    // 3.1 逻辑非 !
    // 逻辑非运算符!对单个布尔值取反。如果操作数为true，结果为false；如果操作数为false，结果为true。
    std::cout << "\n3.1 逻辑非 !:" << std::endl;
    std::cout << std::boolalpha;
    std::cout << "!true = " << (!true) << std::endl;   // false
    std::cout << "!false = " << (!false) << std::endl; // true
    std::cout << "!(5 > 3) = " << (!(5 > 3)) << std::endl; // false
    std::cout << "!(5 < 3) = " << (!(5 < 3)) << std::endl; // true

    // 3.2 逻辑与 &&
    // 逻辑与运算符&&表示"并且"的关系。只有当两个操作数都为true时，结果才为true；否则为false。
    // 逻辑与运算符具有短路求值特性：如果第一个操作数为false，第二个操作数不会被求值。
    std::cout << "\n3.2 逻辑与 &&:" << std::endl;
    std::cout << "true && true = " << (true && true) << std::endl;     // true
    std::cout << "true && false = " << (true && false) << std::endl;   // false
    std::cout << "false && true = " << (false && true) << std::endl;   // false
    std::cout << "false && false = " << (false && false) << std::endl; // false
    
    // 短路求值示例
    int a = 0;
    bool result1 = (false && (++a > 0)); // ++a不会被执行，因为第一个操作数为false
    std::cout << "短路求值: false && (++a > 0) = " << result1 << ", a = " << a << std::endl; // a仍为0

    // 3.3 逻辑或 ||
    // 逻辑或运算符||表示"或者"的关系。只要有一个操作数为true，结果就为true；只有两个操作数都为false时，结果才为false。
    // 逻辑或运算符也具有短路求值特性：如果第一个操作数为true，第二个操作数不会被求值。
    std::cout << "\n3.3 逻辑或 ||:" << std::endl;
    std::cout << "true || true = " << (true || true) << std::endl;     // true
    std::cout << "true || false = " << (true || false) << std::endl;   // true
    std::cout << "false || true = " << (false || true) << std::endl;   // true
    std::cout << "false || false = " << (false || false) << std::endl; // false
    
    // 短路求值示例
    int b = 0;
    bool result2 = (true || (++b > 0)); // ++b不会被执行，因为第一个操作数为true
    std::cout << "短路求值: true || (++b > 0) = " << result2 << ", b = " << b << std::endl; // b仍为0

    // 3.4 逻辑运算符的真值表
    // +-------+-------+-----------+-----------+
    // |  A    |  B    |  A && B   |  A || B   |
    // +-------+-------+-----------+-----------+
    // | true  | true  |   true    |   true    |
    // | true  | false |   false   |   true    |
    // | false | true  |   false   |   true    |
    // | false | false |   false   |   false   |
    // +-------+-------+-----------+-----------+
    // +-------+-------+
    // |  A    |  !A   |
    // +-------+-------+
    // | true  | false |
    // | false | true  |
    // +-------+-------+

    // 3.5 组合逻辑运算
    // 逻辑运算符可以组合使用，形成复杂的逻辑表达式。
    // 在组合使用时，需要注意运算符的优先级：! > && > ||。
    std::cout << "\n3.5 组合逻辑运算:" << std::endl;
    bool x = true;
    bool y = false;
    bool z = true;
    
    std::cout << "!x && y || z = " << (!x && y || z) << std::endl; // (!x && y) || z = (false && false) || true = false || true = true
    std::cout << "x && y || !z = " << (x && y || !z) << std::endl; // (x && y) || !z = (true && false) || false = false || false = false
    std::cout << "(x || y) && z = " << ((x || y) && z) << std::endl; // (true || false) && true = true && true = true
    std::cout << "!(x && y) = " << (!(x && y)) << std::endl;       // !(true && false) = !false = true

    // 4. 隐式类型转换
    // 在C++中，整数类型和布尔类型之间可以进行隐式转换。
    // 非零整数转换为bool时，结果为true；零转换为bool时，结果为false。
    // bool转换为整数时，true转换为1，false转换为0。
    std::cout << "\n4. 隐式类型转换:" << std::endl;
    int num1 = 10;
    int num2 = 0;
    bool flag3 = num1;   // 非零整数转换为true
    bool flag4 = num2;   // 零转换为false
    int num3 = true;     // true转换为1
    int num4 = false;    // false转换为0

    std::cout << "bool flag3 = 10;  flag3 = " << flag3 << std::endl; // true
    std::cout << "bool flag4 = 0;   flag4 = " << flag4 << std::endl; // false
    std::cout << "int num3 = true;  num3 = " << num3 << std::endl;   // 1
    std::cout << "int num4 = false; num4 = " << num4 << std::endl;   // 0

    // 5. 比较运算符返回bool值
    // 比较运算符（==, !=, >, <, >=, <=）的返回值是bool类型。
    std::cout << "\n5. 比较运算符返回bool值:" << std::endl;
    std::cout << "5 > 3 = " << (5 > 3) << std::endl;       // true
    std::cout << "5 < 3 = " << (5 < 3) << std::endl;       // false
    std::cout << "10 == 10 = " << (10 == 10) << std::endl; // true
    std::cout << "10 != 5 = " << (10 != 5) << std::endl;   // true
    std::cout << "7 >= 7 = " << (7 >= 7) << std::endl;     // true
    std::cout << "7 <= 5 = " << (7 <= 5) << std::endl;     // false

    std::cout << "\n请输入回车以继续..." << std::endl;
    std::cin.get();
    return 0;
}