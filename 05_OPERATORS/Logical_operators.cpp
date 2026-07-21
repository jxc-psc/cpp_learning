#include <iostream>
#include <cstdint>

int main() {
    // 1. 逻辑非运算符 (!)
    // 逻辑非运算符对单个布尔值取反，返回bool类型。
    // !true = false, !false = true
    
    std::cout << "1. 逻辑非运算符 (!):" << std::endl;
    
    std::cout << std::boolalpha;
    
    bool flag1 = true;
    bool flag2 = false;
    
    std::cout << "!true = " << !flag1 << std::endl;       // false
    std::cout << "!false = " << !flag2 << std::endl;      // true
    std::cout << "!(!true) = " << !(!flag1) << std::endl; // true
    
    // 非布尔值的逻辑非
    // 非零值被视为true，零被视为false
    std::cout << "\n非布尔值的逻辑非:" << std::endl;
    std::cout << "!0 = " << !0 << std::endl;         // true（0被视为false）
    std::cout << "!5 = " << !5 << std::endl;         // false（非零被视为true）
    std::cout << "!(-5) = " << !(-5) << std::endl;   // false（非零被视为true）
    std::cout << "!!5 = " << !!5 << std::endl;       // true（双重否定）


    // 2. 逻辑与运算符 (&&)
    // 逻辑与运算符用于判断两个条件是否同时为true，返回bool类型。
    // 只有当两个操作数都为true时，结果才为true。
    // 短路求值特性：如果第一个操作数为false，第二个操作数不会被求值。
    
    std::cout << "\n2. 逻辑与运算符 (&&):" << std::endl;
    
    bool a = true;
    bool b = true;
    bool c = false;
    
    std::cout << "true && true: " << (a && b) << std::endl;      // true
    std::cout << "true && false: " << (a && c) << std::endl;     // false
    std::cout << "false && true: " << (c && a) << std::endl;     // false
    std::cout << "false && false: " << (c && c) << std::endl;    // false
    
    // 短路求值示例
    std::cout << "\n短路求值特性（逻辑与）:" << std::endl;
    int32_t num1 = 0;
    bool result1 = (false && (++num1 > 0));
    std::cout << "false && (++num1 > 0): " << result1 << std::endl;   // false
    std::cout << "num1 after short-circuit: " << num1 << std::endl;   // 0（++num1未执行）
    
    int32_t num2 = 0;
    bool result2 = (true && (++num2 > 0));
    std::cout << "\ntrue && (++num2 > 0): " << result2 << std::endl;   // true
    std::cout << "num2 after evaluation: " << num2 << std::endl;       // 1（++num2执行了）


    // 3. 逻辑或运算符 (||)
    // 逻辑或运算符用于判断两个条件中是否至少有一个为true，返回bool类型。
    // 只要有一个操作数为true，结果就为true。
    // 短路求值特性：如果第一个操作数为true，第二个操作数不会被求值。
    
    std::cout << "\n3. 逻辑或运算符 (||):" << std::endl;
    
    std::cout << "true || true: " << (a || b) << std::endl;       // true
    std::cout << "true || false: " << (a || c) << std::endl;      // true
    std::cout << "false || true: " << (c || a) << std::endl;      // true
    std::cout << "false || false: " << (c || c) << std::endl;     // false
    
    // 短路求值示例
    std::cout << "\n短路求值特性（逻辑或）:" << std::endl;
    int32_t num3 = 0;
    bool result3 = (true || (++num3 > 0));
    std::cout << "true || (++num3 > 0): " << result3 << std::endl;    // true
    std::cout << "num3 after short-circuit: " << num3 << std::endl;    // 0（++num3未执行）
    
    int32_t num4 = 0;
    bool result4 = (false || (++num4 > 0));
    std::cout << "\nfalse || (++num4 > 0): " << result4 << std::endl;  // true
    std::cout << "num4 after evaluation: " << num4 << std::endl;       // 1（++num4执行了）


    // 4. 逻辑运算符的真值表
    
    std::cout << "\n4. 逻辑运算符的真值表:" << std::endl;
    std::cout << "\n逻辑与 (&&):" << std::endl;
    std::cout << "  A      B      A && B" << std::endl;
    std::cout << "  true   true   " << (true && true) << std::endl;
    std::cout << "  true   false  " << (true && false) << std::endl;
    std::cout << "  false  true   " << (false && true) << std::endl;
    std::cout << "  false  false  " << (false && false) << std::endl;
    
    std::cout << "\n逻辑或 (||):" << std::endl;
    std::cout << "  A      B      A || B" << std::endl;
    std::cout << "  true   true   " << (true || true) << std::endl;
    std::cout << "  true   false  " << (true || false) << std::endl;
    std::cout << "  false  true   " << (false || true) << std::endl;
    std::cout << "  false  false  " << (false || false) << std::endl;
    
    std::cout << "\n逻辑非 (!):" << std::endl;
    std::cout << "  A      !A" << std::endl;
    std::cout << "  true   " << (!true) << std::endl;
    std::cout << "  false  " << (!false) << std::endl;


    // 5. 逻辑运算符的优先级和结合性
    // 优先级（从高到低）：! > && > ||
    // 结合性：&&和||都是从左到右
    
    std::cout << "\n5. 逻辑运算符的优先级和结合性:" << std::endl;
    
    // 优先级示例
    bool x = true, y = false, z = true;
    
    std::cout << "!x && y: " << (!x && y) << std::endl;   // 先!x=false，再false && y=false
    std::cout << "x && y || z: " << (x && y || z) << std::endl;   // 先x&&y=false，再false||z=true
    
    // 结合性示例
    std::cout << "\n结合性（从左到右）:" << std::endl;
    std::cout << "x && y && z: " << (x && y && z) << std::endl;   // 先x&&y=false，再false&&z=false
    std::cout << "x || y || z: " << (x || y || z) << std::endl;   // 先x||y=true，短路求值
    
    // 使用括号改变优先级
    std::cout << "\n使用括号改变优先级:" << std::endl;
    std::cout << "!(x && y): " << (!(x && y)) << std::endl;   // 先x&&y=false，再!false=true
    std::cout << "x && (y || z): " << (x && (y || z)) << std::endl;   // 先y||z=true，再x&&true=true


    // 6. 组合逻辑运算
    // 逻辑运算符可以组合使用，实现复杂的条件判断。
    
    std::cout << "\n6. 组合逻辑运算:" << std::endl;
    
    // 示例1：判断年龄是否在18到65之间
    int32_t age = 25;
    bool is_adult = (age >= 18) && (age <= 65);
    std::cout << "age=" << age << ", is_adult: " << is_adult << std::endl;
    
    // 示例2：判断是否为工作日（周一到周五）
    int32_t day = 3;  // 1=周一, 2=周二, ..., 7=周日
    bool is_workday = (day >= 1) && (day <= 5);
    std::cout << "day=" << day << ", is_workday: " << is_workday << std::endl;
    
    // 示例3：判断是否为假期（周末或节假日）
    bool is_holiday = (day == 6) || (day == 7) || (day == 0);
    std::cout << "day=" << day << ", is_holiday: " << is_holiday << std::endl;
    
    // 示例4：判断用户名和密码是否正确
    std::string username = "admin";
    std::string password = "123456";
    bool is_authenticated = (username == "admin") && (password == "123456");
    std::cout << "is_authenticated: " << is_authenticated << std::endl;


    // 7. 逻辑运算符在条件语句中的应用
    
    std::cout << "\n7. 逻辑运算符在条件语句中的应用:" << std::endl;
    
    // 示例1：登录验证
    std::string input_user = "admin";
    std::string input_pass = "123456";
    
    if (input_user == "admin" && input_pass == "123456") {
        std::cout << "Login successful!" << std::endl;
    } else {
        std::cout << "Login failed!" << std::endl;
    }
    
    // 示例2：成绩等级判断
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
    
    // 示例3：权限判断（管理员或VIP用户）
    bool is_admin = true;
    bool is_vip = false;
    
    if (is_admin || is_vip) {
        std::cout << "Access granted!" << std::endl;
    } else {
        std::cout << "Access denied!" << std::endl;
    }
    
    // 示例4：非空检查
    std::string email = "";
    
    if (!email.empty()) {
        std::cout << "Email is: " << email << std::endl;
    } else {
        std::cout << "Email is empty!" << std::endl;
    }


    // 8. 逻辑运算符与位运算符的区别
    // 逻辑运算符（&&, ||, !）：操作bool类型，返回bool类型，支持短路求值
    // 位运算符（&, |, ~）：操作整数的二进制位，返回整数类型，不支持短路求值
    
    std::cout << "\n8. 逻辑运算符与位运算符的区别:" << std::endl;
    
    int32_t num5 = 5;  // 0b101
    int32_t num6 = 3;  // 0b011
    
    // 逻辑与 vs 位与
    std::cout << "\n逻辑与 vs 位与:" << std::endl;
    std::cout << "num5 && num6: " << (num5 && num6) << std::endl;   // true（非零为true）
    std::cout << "num5 & num6: " << (num5 & num6) << std::endl;     // 1（0b101 & 0b011 = 0b001）
    
    // 逻辑或 vs 位或
    std::cout << "\n逻辑或 vs 位或:" << std::endl;
    std::cout << "num5 || num6: " << (num5 || num6) << std::endl;   // true
    std::cout << "num5 | num6: " << (num5 | num6) << std::endl;     // 7（0b101 | 0b011 = 0b111）
    
    // 逻辑非 vs 位非
    std::cout << "\n逻辑非 vs 位非:" << std::endl;
    std::cout << "!num5: " << (!num5) << std::endl;     // false（非零为true）
    std::cout << "~num5: " << (~num5) << std::endl;     // -6（按位取反）


    // 9. 逻辑运算符汇总表
    // +------------------+------------------+------------------+------------------+
    // |   运算符         |   名称           |   真值表         |   短路求值       |
    // +------------------+------------------+------------------+------------------+
    // |   !              |   逻辑非         |   !true=false    |   不适用         |
    // |                  |                  |   !false=true    |                  |
    // |   &&             |   逻辑与         |   都为true才true |   是（左false时）|
    // |   ||             |   逻辑或         |   有true就true   |   是（左true时）|
    // +------------------+------------------+------------------+------------------+


    // 10. 常见问题和注意事项
    
    std::cout << "\n10. 常见问题和注意事项:" << std::endl;
    
    // 10.1 短路求值的副作用
    std::cout << "\n10.1 短路求值可能导致未预期的行为:" << std::endl;
    int32_t num7 = 0;
    bool flag3 = (num7 > 0) && (++num7 > 0);
    std::cout << "num7 after short-circuit: " << num7 << std::endl;   // 0
    
    // 10.2 不要混淆逻辑运算符和位运算符
    std::cout << "\n10.2 不要混淆逻辑运算符(&&, ||)和位运算符(&, |):" << std::endl;
    std::cout << "5 && 3 = " << (5 && 3) << std::endl;   // true
    std::cout << "5 & 3 = " << (5 & 3) << std::endl;     // 1
    
    // 10.3 非布尔值参与逻辑运算
    std::cout << "\n10.3 非布尔值参与逻辑运算（非零为true）:" << std::endl;
    std::cout << "0 && 5 = " << (0 && 5) << std::endl;     // false
    std::cout << "0 || 5 = " << (0 || 5) << std::endl;     // true
    std::cout << "!0 = " << (!0) << std::endl;             // true
    std::cout << "!5 = " << (!5) << std::endl;             // false
    
    // 10.4 逻辑运算符的返回值是bool类型
    std::cout << "\n10.4 逻辑运算符的返回值是bool类型:" << std::endl;
    bool result5 = (5 > 3) && (3 > 1);
    std::cout << "(5 > 3) && (3 > 1) = " << result5 << std::endl;   // true
    
    // 10.5 使用括号提高可读性
    std::cout << "\n10.5 使用括号提高可读性:" << std::endl;
    bool condition1 = (age >= 18) && (age <= 65);
    bool condition2 = age >= 18 && age <= 65;  // 等价，但可读性较差
    std::cout << "condition1 == condition2: " << (condition1 == condition2) << std::endl;


    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}