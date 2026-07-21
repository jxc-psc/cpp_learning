#include <iostream>
#include <cstdint>
#include <string>

int main() {
    // 1. 相等运算符 (==)
    // 相等运算符用于判断两个值是否相等，返回bool类型（true或false）。
    // 注意：不要与赋值运算符(=)混淆！
    
    std::cout << "1. 相等运算符 (==):" << std::endl;
    
    int32_t a = 10;
    int32_t b = 10;
    int32_t c = 5;
    
    std::cout << std::boolalpha;
    std::cout << a << " == " << b << ": " << (a == b) << std::endl;   // true
    std::cout << a << " == " << c << ": " << (a == c) << std::endl;   // false
    std::cout << 5 << " == " << 5 << ": " << (5 == 5) << std::endl;   // true
    std::cout << 5 << " == " << 3 << ": " << (5 == 3) << std::endl;   // false
    
    // 浮点数比较（注意精度问题）
    std::cout << "\n浮点数比较:" << std::endl;
    double pi1 = 3.14159;
    double pi2 = 3.14159;
    std::cout << pi1 << " == " << pi2 << ": " << (pi1 == pi2) << std::endl;   // true
    
    // 字符比较（按ASCII码）
    std::cout << "\n字符比较（按ASCII码）:" << std::endl;
    char ch1 = 'A';
    char ch2 = 'B';
    std::cout << ch1 << " == " << ch2 << ": " << (ch1 == ch2) << std::endl;   // false
    std::cout << ch1 << " == 'A': " << (ch1 == 'A') << std::endl;             // true
    
    // 字符串比较（使用==运算符）
    std::cout << "\n字符串比较:" << std::endl;
    std::string str1 = "Hello";
    std::string str2 = "Hello";
    std::string str3 = "World";
    std::cout << "str1 == str2: " << (str1 == str2) << std::endl;   // true
    std::cout << "str1 == str3: " << (str1 == str3) << std::endl;   // false


    // 2. 不相等运算符 (!=)
    // 不相等运算符用于判断两个值是否不相等，返回bool类型。
    
    std::cout << "\n2. 不相等运算符 (!=):" << std::endl;
    
    std::cout << a << " != " << b << ": " << (a != b) << std::endl;   // false
    std::cout << a << " != " << c << ": " << (a != c) << std::endl;   // true
    std::cout << 5 << " != " << 5 << ": " << (5 != 5) << std::endl;   // false
    std::cout << 5 << " != " << 3 << ": " << (5 != 3) << std::endl;   // true
    
    std::cout << "\n字符串不相等比较:" << std::endl;
    std::cout << "str1 != str2: " << (str1 != str2) << std::endl;   // false
    std::cout << "str1 != str3: " << (str1 != str3) << std::endl;   // true


    // 3. 大于运算符 (>)
    // 大于运算符用于判断左边的值是否大于右边的值，返回bool类型。
    
    std::cout << "\n3. 大于运算符 (>):" << std::endl;
    
    std::cout << a << " > " << b << ": " << (a > b) << std::endl;   // false
    std::cout << a << " > " << c << ": " << (a > c) << std::endl;   // true
    std::cout << 5 << " > " << 3 << ": " << (5 > 3) << std::endl;   // true
    std::cout << 3 << " > " << 5 << ": " << (3 > 5) << std::endl;   // false
    std::cout << 5 << " > " << 5 << ": " << (5 > 5) << std::endl;   // false
    
    // 浮点数大于比较
    std::cout << "\n浮点数大于比较:" << std::endl;
    std::cout << "3.14 > 2.71: " << (3.14 > 2.71) << std::endl;   // true
    
    // 字符大于比较（按ASCII码）
    std::cout << "\n字符大于比较（按ASCII码）:" << std::endl;
    std::cout << "'B' > 'A': " << ('B' > 'A') << std::endl;   // true
    std::cout << "'A' > 'a': " << ('A' > 'a') << std::endl;   // false ('A'=65, 'a'=97)
    
    // 字符串大于比较（按字典序）
    std::cout << "\n字符串大于比较（按字典序）:" << std::endl;
    std::cout << "\"Apple\" > \"Banana\": " << ("Apple" > "Banana") << std::endl;   // false
    std::cout << "\"Banana\" > \"Apple\": " << ("Banana" > "Apple") << std::endl;   // true


    // 4. 小于运算符 (<)
    // 小于运算符用于判断左边的值是否小于右边的值，返回bool类型。
    
    std::cout << "\n4. 小于运算符 (<):" << std::endl;
    
    std::cout << a << " < " << b << ": " << (a < b) << std::endl;   // false
    std::cout << c << " < " << a << ": " << (c < a) << std::endl;   // true
    std::cout << 3 << " < " << 5 << ": " << (3 < 5) << std::endl;   // true
    std::cout << 5 << " < " << 3 << ": " << (5 < 3) << std::endl;   // false
    std::cout << 5 << " < " << 5 << ": " << (5 < 5) << std::endl;   // false
    
    std::cout << "\n字符串小于比较（按字典序）:" << std::endl;
    std::cout << "\"Apple\" < \"Banana\": " << ("Apple" < "Banana") << std::endl;   // true
    std::cout << "\"Banana\" < \"Apple\": " << ("Banana" < "Apple") << std::endl;   // false


    // 5. 大于等于运算符 (>=)
    // 大于等于运算符用于判断左边的值是否大于或等于右边的值，返回bool类型。
    
    std::cout << "\n5. 大于等于运算符 (>=):" << std::endl;
    
    std::cout << a << " >= " << b << ": " << (a >= b) << std::endl;   // true
    std::cout << a << " >= " << c << ": " << (a >= c) << std::endl;   // true
    std::cout << c << " >= " << a << ": " << (c >= a) << std::endl;   // false
    std::cout << 5 << " >= " << 5 << ": " << (5 >= 5) << std::endl;   // true
    std::cout << 5 << " >= " << 3 << ": " << (5 >= 3) << std::endl;   // true
    std::cout << 3 << " >= " << 5 << ": " << (3 >= 5) << std::endl;   // false


    // 6. 小于等于运算符 (<=)
    // 小于等于运算符用于判断左边的值是否小于或等于右边的值，返回bool类型。
    
    std::cout << "\n6. 小于等于运算符 (<=):" << std::endl;
    
    std::cout << a << " <= " << b << ": " << (a <= b) << std::endl;   // true
    std::cout << c << " <= " << a << ": " << (c <= a) << std::endl;   // true
    std::cout << a << " <= " << c << ": " << (a <= c) << std::endl;   // false
    std::cout << 5 << " <= " << 5 << ": " << (5 <= 5) << std::endl;   // true
    std::cout << 3 << " <= " << 5 << ": " << (3 <= 5) << std::endl;   // true
    std::cout << 5 << " <= " << 3 << ": " << (5 <= 3) << std::endl;   // false


    // 7. 比较运算符的返回值
    // 比较运算符返回bool类型，可以直接用于条件语句中。
    
    std::cout << "\n7. 比较运算符的返回值:" << std::endl;
    
    int32_t num1 = 10;
    int32_t num2 = 20;
    
    bool result = (num1 > num2);
    std::cout << "result = (num1 > num2): " << result << std::endl;
    
    // 在if语句中使用
    if (num1 < num2) {
        std::cout << "num1 is less than num2" << std::endl;
    }
    
    // 在条件表达式中使用
    int32_t max_val = (num1 > num2) ? num1 : num2;
    std::cout << "max(" << num1 << ", " << num2 << ") = " << max_val << std::endl;


    // 8. 比较运算符的优先级和结合性
    // 比较运算符的优先级低于算术运算符。
    // 比较运算符的结合性是从左到右。
    
    std::cout << "\n8. 比较运算符的优先级和结合性:" << std::endl;
    
    // 优先级：先算术运算，再比较
    std::cout << "3 + 4 > 6: " << (3 + 4 > 6) << std::endl;   // 先算3+4=7，再比较7>6，结果为true
    std::cout << "10 / 2 >= 4: " << (10 / 2 >= 4) << std::endl; // 先算10/2=5，再比较5>=4，结果为true
    
    // 结合性：从左到右
    std::cout << "\n结合性（从左到右）:" << std::endl;
    int32_t num3 = 5;
    std::cout << "3 < num3 < 10: " << (3 < num3 < 10) << std::endl;   // 先算3<5=true(1)，再算1<10=true
    
    // 注意：这种连续比较在C++中的行为与数学中的不同！
    // 在数学中 3 < num3 < 10 表示 num3 大于3且小于10。
    // 在C++中，应该使用逻辑运算符：3 < num3 && num3 < 10
    std::cout << "3 < num3 && num3 < 10: " << (3 < num3 && num3 < 10) << std::endl;


    // 9. 比较运算符在条件语句中的应用
    
    std::cout << "\n9. 比较运算符在条件语句中的应用:" << std::endl;
    
    int32_t score = 85;
    
    if (score >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade: B" << std::endl;
    } else if (score >= 70) {
        std::cout << "Grade: C" << std::endl;
    } else if (score >= 60) {
        std::cout << "Grade: D" << std::endl;
    } else {
        std::cout << "Grade: F" << std::endl;
    }
    
    // 判断闰年
    std::cout << "\n判断闰年:" << std::endl;
    int32_t year = 2024;
    bool is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    std::cout << year << " is a leap year: " << is_leap_year << std::endl;


    // 10. 比较运算符汇总表
    // +------------------+------------------+------------------+
    // |   运算符         |   名称           |   示例           |
    // +------------------+------------------+------------------+
    // |   ==             |   相等           |   a == b         |
    // |   !=             |   不相等         |   a != b         |
    // |   >              |   大于           |   a > b          |
    // |   <              |   小于           |   a < b          |
    // |   >=             |   大于等于       |   a >= b         |
    // |   <=             |   小于等于       |   a <= b         |
    // +------------------+------------------+------------------+


    // 11. 常见问题和注意事项
    
    std::cout << "\n11. 常见问题和注意事项:" << std::endl;
    
    // 11.1 区分赋值运算符和相等运算符
    std::cout << "\n11.1 区分赋值运算符(=)和相等运算符(==):" << std::endl;
    int32_t num4 = 5;
    
    // 错误：使用了赋值运算符而不是相等运算符
    if (num4 = 10) {  // 这里会赋值并返回10（非零为true）
        std::cout << "This is always true (num4 = 10)" << std::endl;
    }
    
    // 正确：使用相等运算符
    if (num4 == 10) {
        std::cout << "num4 == 10 is true" << std::endl;
    }
    
    // 11.2 浮点数比较的精度问题
    std::cout << "\n11.2 浮点数比较的精度问题:" << std::endl;
    double d1 = 0.1 + 0.2;
    double d2 = 0.3;
    std::cout << "0.1 + 0.2 == 0.3: " << (d1 == d2) << std::endl;   // 可能为false！
    
    // 正确的浮点数比较方法：比较差值是否小于一个很小的epsilon
    const double epsilon = 1e-9;
    bool is_equal = (std::abs(d1 - d2) < epsilon);
    std::cout << "abs(0.1+0.2 - 0.3) < epsilon: " << is_equal << std::endl;
    
    // 11.3 字符串比较区分大小写
    std::cout << "\n11.3 字符串比较区分大小写:" << std::endl;
    std::string str4 = "Hello";
    std::string str5 = "hello";
    std::cout << "\"Hello\" == \"hello\": " << (str4 == str5) << std::endl;   // false
    
    // 11.4 指针比较
    std::cout << "\n11.4 指针比较（比较地址）:" << std::endl;
    int32_t x = 10;
    int32_t y = 20;
    int32_t* p1 = &x;
    int32_t* p2 = &y;
    int32_t* p3 = &x;
    std::cout << "p1 == p2: " << (p1 == p2) << std::endl;   // false（不同地址）
    std::cout << "p1 == p3: " << (p1 == p3) << std::endl;   // true（相同地址）


    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}