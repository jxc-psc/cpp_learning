#include <iostream>
#include <string>
#include <cstdint>

int main() {
    // 1. while循环
    // while循环在每次迭代前检查条件，如果为true则执行循环体，否则退出循环。
    // 语法：while (condition) { statement; }
    // 特点：先判断，后执行。如果初始条件为false，循环体可能一次都不执行。
    
    std::cout << "1. while循环:" << std::endl;
    
    // 1.1 基本while循环
    std::cout << "\n1.1 基本while循环:" << std::endl;
    int32_t i = 1;
    while (i <= 5) {
        std::cout << i << " ";
        ++i;
    }
    std::cout << std::endl;
    
    // 1.2 while循环计算1到100的和
    std::cout << "\n1.2 while循环计算1到100的和:" << std::endl;
    int32_t sum = 0;
    int32_t n = 1;
    while (n <= 100) {
        sum += n;
        ++n;
    }
    std::cout << "Sum from 1 to 100 = " << sum << std::endl;
    
    // 1.3 while循环处理用户输入
    std::cout << "\n1.3 while循环处理用户输入:" << std::endl;
    int32_t input_num = 0;
    int32_t input_count = 0;
    /*
        std::cout << "Enter numbers (enter -1 to stop): ";
        while (std::cin >> input_num && input_num != -1) {
            ++input_count;
    }
        std::cout << "You entered " << input_count << " numbers." << std::endl;
    */
    
    // 1.4 while循环实现死循环
    std::cout << "\n1.4 while循环实现死循环:" << std::endl;
    // while (true) {
    //     // 无限循环，需要通过break退出
    // }
    std::cout << "while(true) creates an infinite loop" << std::endl;
    
    // 1.5 while循环的注意事项
    // 循环条件最终必须能够变为false，否则会造成死循环
    std::cout << "\n1.5 while循环的注意事项:" << std::endl;
    std::cout << "Ensure the loop condition eventually becomes false" << std::endl;
    std::cout << "Otherwise, it will result in an infinite loop" << std::endl;
    
    
    // 2. do-while循环
    // do-while循环先执行一次循环体，然后再检查条件。
    // 语法：do { statement; } while (condition);
    // 特点：先执行，后判断。循环体至少执行一次。
    
    std::cout << "\n2. do-while循环:" << std::endl;
    
    // 2.1 基本do-while循环
    std::cout << "\n2.1 基本do-while循环:" << std::endl;
    int32_t j = 1;
    do {
        std::cout << j << " ";
        ++j;
    } while (j <= 5);
    std::cout << std::endl;
    
    // 2.2 do-while循环至少执行一次的特点
    std::cout << "\n2.2 do-while循环至少执行一次的特点:" << std::endl;
    int32_t k = 10;
    do {
        std::cout << "This executes once even though k > 5 (k=" << k << ")" << std::endl;
        ++k;
    } while (k < 5);  // 条件为false，但循环体已经执行了一次
    std::cout << "Final k = " << k << std::endl;
    
    // 2.3 do-while循环实现菜单选择
    std::cout << "\n2.3 do-while循环实现菜单选择:" << std::endl;
    /*
        int32_t choice;
        do {
            std::cout << "1. Option 1" << std::endl;
            std::cout << "2. Option 2" << std::endl;
            std::cout << "3. Option 3" << std::endl;
            std::cout << "0. Exit" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;
            switch (choice) {
                case 1: std::cout << "You selected Option 1" << std::endl; break;
                case 2: std::cout << "You selected Option 2" << std::endl; break;
                case 3: std::cout << "You selected Option 3" << std::endl; break;
                case 0: std::cout << "Goodbye!" << std::endl; break;
                default: std::cout << "Invalid choice!" << std::endl; break;
            }
        } while (choice != 0);
    */
    std::cout << "do-while is ideal for menu-driven programs" << std::endl;
    
    // 2.4 while与do-while的对比
    std::cout << "\n2.4 while与do-while的对比:" << std::endl;
    std::cout << "while: check condition first, body may not execute" << std::endl;
    std::cout << "do-while: execute body first, then check condition" << std::endl;
    std::cout << "do-while guarantees at least one execution" << std::endl;
    
    
    // 3. for循环
    // for循环是最常用的循环结构，将初始化、条件判断和更新合并到一行。
    // 语法：for (init; condition; update) { statement; }
    // 执行顺序：init -> condition -> body -> update -> condition -> body -> update -> ...
    
    std::cout << "\n3. for循环:" << std::endl;
    
    // 3.1 基本for循环
    std::cout << "\n3.1 基本for循环:" << std::endl;
    for (int32_t m = 1; m <= 5; ++m) {
        std::cout << m << " ";
    }
    std::cout << std::endl;
    
    // 3.2 for循环计算1到100的和
    std::cout << "\n3.2 for循环计算1到100的和:" << std::endl;
    int32_t sum2 = 0;
    for (int32_t m = 1; m <= 100; ++m) {
        sum2 += m;
    }
    std::cout << "Sum from 1 to 100 = " << sum2 << std::endl;
    
    // 3.3 for循环的三个部分都是可选的
    std::cout << "\n3.3 for循环的三个部分都是可选的:" << std::endl;
    
    // 3.3.1 省略初始化部分
    int32_t p = 0;
    for (; p < 3; ++p) {
        std::cout << p << " ";
    }
    std::cout << "(省略初始化部分)" << std::endl;
    
    // 3.3.2 省略条件部分（死循环）
    // for (int32_t q = 0; ; ++q) {
    //     if (q >= 3) break;
    //     std::cout << q << " ";
    // }
    std::cout << "for(;;) or for(init;;update) creates an infinite loop" << std::endl;
    
    // 3.3.3 省略更新部分
    for (int32_t r = 0; r < 3; ) {
        std::cout << r << " ";
        ++r;  // 在循环体内更新
    }
    std::cout << "(省略更新部分)" << std::endl;
    
    // 3.3.4 全部省略（死循环）
    // for (;;) {
    //     // 无限循环
    // }
    std::cout << "for(;;) is equivalent to while(true)" << std::endl;
    
    // 3.4 for循环的多种形式
    std::cout << "\n3.4 for循环的多种形式:" << std::endl;
    
    // 3.4.1 递减循环
    std::cout << "Countdown: ";
    for (int32_t m = 5; m >= 1; --m) {
        std::cout << m << " ";
    }
    std::cout << std::endl;
    
    // 3.4.2 步长不为1
    std::cout << "Even numbers: ";
    for (int32_t m = 0; m <= 10; m += 2) {
        std::cout << m << " ";
    }
    std::cout << std::endl;
    
    // 3.4.3 多个变量
    for (int32_t m = 0, n2 = 10; m < n2; ++m, --n2) {
        std::cout << "m=" << m << ", n=" << n2 << "  ";
    }
    std::cout << std::endl;
    
    // 3.5 嵌套for循环
    std::cout << "\n3.5 嵌套for循环:" << std::endl;
    
    // 3.5.1 打印九九乘法表
    std::cout << "Multiplication table:" << std::endl;
    for (int32_t row = 1; row <= 9; ++row) {
        for (int32_t col = 1; col <= row; ++col) {
            std::cout << col << "*" << row << "=" << row * col << "\t";
        }
        std::cout << std::endl;
    }
    
    // 3.5.2 打印直角三角形
    std::cout << "Right triangle:" << std::endl;
    for (int32_t row = 1; row <= 5; ++row) {
        for (int32_t col = 1; col <= row; ++col) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    // 3.5.3 打印倒直角三角形
    std::cout << "Inverted right triangle:" << std::endl;
    for (int32_t row = 5; row >= 1; --row) {
        for (int32_t col = 1; col <= row; ++col) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    // 3.5.4 打印金字塔
    std::cout << "Pyramid:" << std::endl;
    for (int32_t row = 1; row <= 5; ++row) {
        // 打印空格
        for (int32_t space = 1; space <= 5 - row; ++space) {
            std::cout << " ";
        }
        // 打印星号
        for (int32_t star = 1; star <= 2 * row - 1; ++star) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    // 3.6 基于范围的for循环（C++11）
    // 用于遍历容器或数组的元素
    std::cout << "\n3.6 基于范围的for循环（C++11）:" << std::endl;
    int32_t arr[] = {1, 2, 3, 4, 5};
    
    // 3.6.1 基本用法
    std::cout << "Array elements: ";
    for (int32_t val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    // 3.6.2 使用引用修改元素
    for (int32_t& val : arr) {
        val *= 2;
    }
    std::cout << "After doubling: ";
    for (int32_t val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    // 3.6.3 使用auto关键字
    std::cout << "Using auto: ";
    for (auto val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    // 3.6.4 遍历字符串
    std::string str = "Hello";
    std::cout << "String characters: ";
    for (char ch : str) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;
    
    
    // 4. 循环结构汇总表
    // +------------------+------------------+------------------+------------------+
    // |   结构           |   语法           |   特点           |   适用场景       |
    // +------------------+------------------+------------------+------------------+
    // |   while          |   while(cond){}  |   先判断后执行   |   不确定次数     |
    // |   do-while       |   do{}while(cond)|   先执行后判断   |   至少执行一次   |
    // |   for            |   for(init;cond;update){} | 三部分合一 |  确定次数     |
    // |   range-for      |   for(val:container){} |   简洁遍历    |   遍历容器     |
    // +------------------+------------------+------------------+------------------+
    
    
    // 5. 三种循环的对比
    
    std::cout << "\n5. 三种循环的对比:" << std::endl;
    
    // 5.1 同一个问题用三种循环实现：计算1到10的和
    std::cout << "\n5.1 三种循环实现相同功能（1到10的和）:" << std::endl;
    
    // 使用while
    int32_t sum_while = 0;
    int32_t idx1 = 1;
    while (idx1 <= 10) {
        sum_while += idx1;
        ++idx1;
    }
    std::cout << "while:     sum = " << sum_while << std::endl;
    
    // 使用do-while
    int32_t sum_do = 0;
    int32_t idx2 = 1;
    do {
        sum_do += idx2;
        ++idx2;
    } while (idx2 <= 10);
    std::cout << "do-while:  sum = " << sum_do << std::endl;
    
    // 使用for
    int32_t sum_for = 0;
    for (int32_t idx3 = 1; idx3 <= 10; ++idx3) {
        sum_for += idx3;
    }
    std::cout << "for:       sum = " << sum_for << std::endl;
    
    // 5.2 选择循环类型的建议
    std::cout << "\n5.2 选择循环类型的建议:" << std::endl;
    std::cout << "- Known iteration count: use for" << std::endl;
    std::cout << "- Unknown count, check before: use while" << std::endl;
    std::cout << "- Must execute at least once: use do-while" << std::endl;
    std::cout << "- Iterate over container: use range-for" << std::endl;
    
    
    // 6. 常见问题和注意事项
    
    std::cout << "\n6. 常见问题和注意事项:" << std::endl;
    
    // 6.1 死循环
    std::cout << "\n6.1 死循环:" << std::endl;
    // 忘记更新循环变量导致死循环
    // int32_t x = 0;
    // while (x < 5) {
    //     std::cout << x;
    //     // 忘记 ++x;
    // }
    std::cout << "Forgetting to update loop variable causes infinite loop" << std::endl;
    
    // 6.2 循环变量的作用域
    std::cout << "\n6.2 循环变量的作用域:" << std::endl;
    for (int32_t m = 0; m < 3; ++m) {
        // m 在这里可见
    }
    // m 在这里不可见，超出作用域
    // std::cout << m << std::endl;  // 错误：m未定义
    std::cout << "Loop variable is only visible inside the for loop" << std::endl;
    
    // 6.3 浮点数作为循环变量
    std::cout << "\n6.3 浮点数作为循环变量（不推荐）:" << std::endl;
    // 浮点数精度问题可能导致循环次数不正确
    // for (float f = 0.0f; f != 1.0f; f += 0.1f) {  // 可能死循环！
    //     std::cout << f << " ";
    // }
    std::cout << "Floating-point loop variables may cause precision issues" << std::endl;
    std::cout << "Use integer counters and compute float values inside" << std::endl;
    
    // 6.4 嵌套循环的性能
    std::cout << "\n6.4 嵌套循环的性能:" << std::endl;
    std::cout << "Nested loops: O(n^2) or worse" << std::endl;
    std::cout << "Minimize nesting depth for performance" << std::endl;
    
    // 6.5 for循环中的逗号运算符
    std::cout << "\n6.5 for循环中的逗号运算符:" << std::endl;
    for (int32_t m = 0, n2 = 10; m < 3; ++m, --n2) {
        std::cout << "m=" << m << ", n=" << n2 << std::endl;
    }
    std::cout << "Comma operator allows multiple expressions in for sections" << std::endl;
    
    
    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}