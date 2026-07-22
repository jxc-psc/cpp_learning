#include <iostream>
#include <string>
#include <cstdint>

int main() {
    // 1. if语句
    // if语句用于根据条件执行不同的代码块。
    // 条件表达式必须是bool类型或可以隐式转换为bool的类型。
    
    std::cout << "1. if语句:" << std::endl;
    
    // 1.1 单分支if语句
    // 语法：if (condition) { statement; }
    // 只有当condition为true时，才执行statement。
    std::cout << "\n1.1 单分支if语句:" << std::endl;
    int32_t x = 10;
    if (x > 5) {
        std::cout << "x is greater than 5" << std::endl;
    }
    
    // 1.2 双分支if-else语句
    // 语法：if (condition) { statement1; } else { statement2; }
    // 当condition为true时执行statement1，否则执行statement2。
    std::cout << "\n1.2 双分支if-else语句:" << std::endl;
    int32_t y = 3;
    if (y > 5) {
        std::cout << "y is greater than 5" << std::endl;
    } else {
        std::cout << "y is not greater than 5" << std::endl;
    }
    
    // 1.3 多分支if-else if-else语句
    // 语法：if (condition1) { } else if (condition2) { } else { }
    // 按顺序检查条件，执行第一个满足条件的分支。
    std::cout << "\n1.3 多分支if-else if-else语句:" << std::endl;
    int32_t z = 7;
    if (z > 10) {
        std::cout << "z is greater than 10" << std::endl;
    } else if (z > 5) {
        std::cout << "z is greater than 5 but not greater than 10" << std::endl;
    } else {
        std::cout << "z is not greater than 5" << std::endl;
    }
    
    // 1.4 嵌套if语句
    // 在if语句中可以嵌套另一个if语句，形成多层条件判断。
    std::cout << "\n1.4 嵌套if语句:" << std::endl;
    int32_t num1 = 8;
    if (num1 > 5) {
        std::cout << "num1 is greater than 5" << std::endl;
        if (num1 > 10) {
            std::cout << "num1 is also greater than 10" << std::endl;
        } else {
            std::cout << "num1 is not greater than 10" << std::endl;
        }
    }
    
    // 1.5 if语句的实用示例：判断闰年
    /*
        std::cout << "\n1.5 判断闰年:" << std::endl;
        int32_t year = 2024;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            std::cout << year << " is a leap year" << std::endl;
         } else {
            std::cout << year << " is not a leap year" << std::endl;
        }
    */
    
    // 1.6 if语句的实用示例：成绩等级判断
    /*
        std::cout << "\n1.6 成绩等级判断:" << std::endl;
        int32_t score = 85;
        if (score >= 90 && score <= 100) {
            std::cout << "Grade: A" << std::endl;
        } else if (score >= 80 && score < 90) {
            std::cout << "Grade: B" << std::endl;
        } else if (score >= 70 && score < 80) {
            std::cout << "Grade: C" << std::endl;
        } else if (score >= 60 && score < 70) {
            std::cout << "Grade: D" << std::endl;
        } else if (score >= 0 && score < 60) {
            std::cout << "Grade: F" << std::endl;
        } else {
            std::cout << "Invalid score!" << std::endl;
        }
    */
    
    // 1.7 if语句的实用示例：判断三个数的大小关系（从大到小输出）
    /*
        std::cout << "\n1.7 判断三个数的大小关系:" << std::endl;
        int32_t num2 = 10, num3 = 20, num4 = 15;
        std::cout << "Input: " << num2 << ", " << num3 << ", " << num4 << std::endl;
        if (num2 >= num3 && num2 >= num4) {
            if (num3 >= num4) {
                std::cout << num2 << " >= " << num3 << " >= " << num4 << std::endl;
            } else {
                std::cout << num2 << " >= " << num4 << " >= " << num3 << std::endl;
            }
        } else if (num3 >= num2 && num3 >= num4) {
            if (num2 >= num4) {
                std::cout << num3 << " >= " << num2 << " >= " << num4 << std::endl;
            } else {
                std::cout << num3 << " >= " << num4 << " >= " << num2 << std::endl;
            }
        } else {
            if (num2 >= num3) {
                std::cout << num4 << " >= " << num2 << " >= " << num3 << std::endl;
            } else {
                std::cout << num4 << " >= " << num3 << " >= " << num2 << std::endl;
            }
        }
    */


    // 2. 三目运算符（条件运算符）
    // 三目运算符是C++中的一种简洁的条件判断语法。
    // 语法：condition ? expression1 : expression2;
    // 如果condition为true，则返回expression1的值，否则返回expression2的值。
    // 三目运算符的优先级低于算术运算符和比较运算符，但高于赋值运算符。
    
    std::cout << "\n2. 三目运算符（条件运算符）:" << std::endl;
    
    // 2.1 基本用法：求两个数的最大值
    std::cout << "\n2.1 基本用法：求两个数的最大值:" << std::endl;
    int32_t a = 10;
    int32_t b = 20;
    int32_t max_val = (a > b) ? a : b;
    std::cout << "max(" << a << ", " << b << ") = " << max_val << std::endl;
    
    // 2.2 基本用法：求两个数的最小值
    std::cout << "\n2.2 基本用法：求两个数的最小值:" << std::endl;
    int32_t min_val = (a < b) ? a : b;
    std::cout << "min(" << a << ", " << b << ") = " << min_val << std::endl;
    
    // 2.3 嵌套三目运算符：求三个数的最大值
    std::cout << "\n2.3 嵌套三目运算符：求三个数的最大值:" << std::endl;
    int32_t c = 15;
    int32_t max_of_three = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    std::cout << "max(" << a << ", " << b << ", " << c << ") = " << max_of_three << std::endl;
    
    // 2.4 三目运算符与表达式
    std::cout << "\n2.4 三目运算符与表达式:" << std::endl;
    int32_t d = 5;
    int32_t result = (d > 0) ? (d * 2) : (d + 10);
    std::cout << "d = " << d << ", result = " << result << std::endl;
    
    // 2.5 三目运算符用于输出不同的字符串
    std::cout << "\n2.5 三目运算符用于输出不同的字符串:" << std::endl;
    int32_t age = 25;
    std::cout << "Age: " << age << ", Status: " 
              << ((age >= 18) ? "Adult" : "Minor") << std::endl;
    
    // 2.6 三目运算符与赋值
    std::cout << "\n2.6 三目运算符与赋值:" << std::endl;
    int32_t num5 = 7;
    (num5 % 2 == 0) ? (num5 *= 2) : (num5 *= 3);
    std::cout << "num5 was odd, num5 *= 3 = " << num5 << std::endl;
    
    // 2.7 三目运算符与函数调用
    std::cout << "\n2.7 三目运算符与函数调用:" << std::endl;
    auto abs_value = [](int32_t n) { return (n >= 0) ? n : -n; };
    std::cout << "abs(-5) = " << abs_value(-5) << std::endl;
    std::cout << "abs(5) = " << abs_value(5) << std::endl;
    
    // 2.8 三目运算符的优先级和结合性
    // 优先级：低于算术运算符和比较运算符，高于赋值运算符
    // 结合性：从右到左
    std::cout << "\n2.8 三目运算符的优先级和结合性:" << std::endl;
    int32_t x1 = 1, y1 = 2, z1 = 3;
    int32_t result1 = x1 > y1 ? x1 : y1 > z1 ? y1 : z1;
    // 等价于：x1 > y1 ? x1 : (y1 > z1 ? y1 : z1)
    std::cout << "x1=" << x1 << ", y1=" << y1 << ", z1=" << z1 << std::endl;
    std::cout << "result1 = " << result1 << std::endl;   // 3
    
    // 2.9 三目运算符与if-else的对比
    std::cout << "\n2.9 三目运算符与if-else的对比:" << std::endl;
    int32_t score1 = 75;
    
    // 使用if-else
    std::string grade1;
    if (score1 >= 60) {
        grade1 = "Pass";
    } else {
        grade1 = "Fail";
    }
    std::cout << "Using if-else: " << grade1 << std::endl;
    
    // 使用三目运算符
    std::string grade2 = (score1 >= 60) ? "Pass" : "Fail";
    std::cout << "Using ternary: " << grade2 << std::endl;
    
    // 2.10 三目运算符的实用示例：判断三个数的大小关系（从大到小输出）
    /*
        std::cout << "\n2.10 使用三目运算符判断三个数的大小关系:" << std::endl;
        int32_t n1 = 10, n2 = 20, n3 = 15;
        std::cout << "Input: " << n1 << ", " << n2 << ", " << n3 << std::endl;
    
        int32_t first = (n1 >= n2) ? ((n1 >= n3) ? n1 : n3) : ((n2 >= n3) ? n2 : n3);
        int32_t third = (n1 <= n2) ? ((n1 <= n3) ? n1 : n3) : ((n2 <= n3) ? n2 : n3);
        int32_t second = n1 + n2 + n3 - first - third;
    
        std::cout << first << " >= " << second << " >= " << third << std::endl;
    */


    // 3. switch语句
    // switch语句是一种多分支选择结构，用于根据表达式的值执行不同的代码块。
    // 语法：
    // switch (expression) {
    //     case value1: statement1; break;
    //     case value2: statement2; break;
    //     ...
    //     default: statement; break;
    // }
    // expression必须是整型或枚举类型（char、short、int、long、enum等）。
    
    std::cout << "\n3. switch语句:" << std::endl;
    
    // 3.1 基本switch语句
    std::cout << "\n3.1 基本switch语句:" << std::endl;
    int32_t day = 3;
    std::cout << "Day " << day << ": ";
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Sunday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
            break;
    }
    
    // 3.2 switch语句中的case穿透（缺少break）
    // 如果case后面没有break，程序会继续执行下一个case的语句，直到遇到break或switch结束。
    std::cout << "\n3.2 switch语句中的case穿透:" << std::endl;
    int32_t month = 2;
    std::cout << "Days in month " << month << ": ";
    switch (month) {
        case 2:
            std::cout << "28 or 29";
            // 没有break，会继续执行下一个case
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << " (30 days)" << std::endl;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "31" << std::endl;
            break;
        default:
            std::cout << "Invalid month" << std::endl;
            break;
    }
    
    // 3.3 switch语句的实用示例：计算器
    /*
        std::cout << "\n3.3 switch语句的实用示例：计算器:" << std::endl;
        char op = '+';
        int32_t num6 = 10;
        int32_t num7 = 5;
    
        std::cout << num6 << " " << op << " " << num7 << " = ";
        switch (op) {
            case '+':
                std::cout << num6 + num7 << std::endl;
                break;
            case '-':
                std::cout << num6 - num7 << std::endl;
                break;
            case '*':
                std::cout << num6 * num7 << std::endl;
                break;
            case '/':
                if (num7 != 0) {
                    std::cout << num6 / num7 << std::endl;
                } else {
                    std::cout << "Division by zero!" << std::endl;
                }
                break;
            case '%':
                if (num7 != 0) {
                    std::cout << num6 % num7 << std::endl;
                } else {
                    std::cout << "Modulo by zero!" << std::endl;
                }
                break;
            default:
                std::cout << "Unknown operator!" << std::endl;
                break;
    }
    */
    
    // 3.4 switch语句的实用示例：成绩等级判断
    /*
        std::cout << "\n3.4 switch语句的实用示例：成绩等级判断:" << std::endl;
        int32_t score2 = 85;
        char grade3;
    
        switch (score2 / 10) {
            case 10:
            case 9:
                grade3 = 'A';
                break;
            case 8:
                grade3 = 'B';
                break;
            case 7:
                grade3 = 'C';
                break;
            case 6:
                grade3 = 'D';
                break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                grade3 = 'F';
                break;
            default:
                grade3 = 'X';
                break;
    }
    
        std::cout << "Score: " << score2 << ", Grade: " << grade3 << std::endl;
    */
    
    // 3.5 switch语句与if-else的对比
    // switch适用于离散值的多分支判断，if-else适用于连续范围的判断。
    std::cout << "\n3.5 switch语句与if-else的对比:" << std::endl;
    std::cout << "适用场景:" << std::endl;
    std::cout << "switch: 离散值判断（如菜单选项、星期几）" << std::endl;
    std::cout << "if-else: 连续范围判断（如成绩区间）" << std::endl;


    // 4. 选择结构汇总表
    // +------------------+------------------+------------------+------------------+
    // |   结构           |   语法           |   适用场景       |   注意事项       |
    // +------------------+------------------+------------------+------------------+
    // |   if             |   if(cond){}     |   单条件判断     |   条件为bool     |
    // |   if-else        |   if(cond){}else{}| 双条件判断     |   互斥分支       |
    // |   if-else if     |   if{}else if{}else{}|多条件判断|按顺序检查       |
    // |   三目运算符     |   cond?expr1:expr2|简单条件赋值     |   右结合性       |
    // |   switch         |   switch(expr){case:...} | 离散值判断 | 需要break        |
    // +------------------+------------------+------------------+------------------+


    // 5. 常见问题和注意事项
    
    std::cout << "\n5. 常见问题和注意事项:" << std::endl;
    
    // 5.1 忘记在switch中使用break导致case穿透
    std::cout << "\n5.1 忘记在switch中使用break导致case穿透:" << std::endl;
    int32_t num8 = 1;
    std::cout << "num8 = " << num8 << ": ";
    switch (num8) {
        case 1:
            std::cout << "One";
            // 缺少break！
        case 2:
            std::cout << " Two";
            break;
    }
    std::cout << std::endl;  // 输出: One Two
    
    // 5.2 在if语句中使用赋值运算符而不是相等运算符
    std::cout << "\n5.2 在if语句中使用赋值运算符(=)而不是相等运算符(==):" << std::endl;
    int32_t num9 = 5;
    if (num9 = 10) {  // 这里是赋值，不是比较！
        std::cout << "This is always true (num9 = 10)" << std::endl;
    }
    
    // 5.3 三目运算符的表达式类型必须兼容
    std::cout << "\n5.3 三目运算符的表达式类型必须兼容:" << std::endl;
    int32_t num10 = 10;
    // auto result2 = (num10 > 5) ? 10 : "small";  // 错误：类型不兼容
    
    // 5.4 switch的表达式类型限制
    std::cout << "\n5.4 switch的表达式类型限制（只能是整型或枚举）:" << std::endl;
    // std::string str = "hello";
    // switch (str) { ... }  // 错误：不能使用字符串
    
    // 5.5 使用default处理未预期的情况
    std::cout << "\n5.5 使用default处理未预期的情况:" << std::endl;
    int32_t choice = 0;
    switch (choice) {
        case 1:
            std::cout << "Option 1 selected" << std::endl;
            break;
        case 2:
            std::cout << "Option 2 selected" << std::endl;
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    }


    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}