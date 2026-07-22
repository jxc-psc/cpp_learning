#include <iostream>
#include <string>
#include <cstdint>

int main() {
    // 1. break语句
    // break语句用于跳出当前的循环（while、do-while、for）或switch语句。
    // 在嵌套循环中，break只跳出最内层的循环。
    
    std::cout << "1. break语句:" << std::endl;
    
    // 1.1 在for循环中使用break
    std::cout << "\n1.1 在for循环中使用break:" << std::endl;
    for (int32_t i = 1; i <= 10; ++i) {
        if (i == 5) {
            std::cout << "break at i=" << i << std::endl;
            break;  // 跳出for循环
        }
        std::cout << i << " ";
    }
    std::cout << "(loop ended)" << std::endl;
    
    // 1.2 在while循环中使用break
    std::cout << "\n1.2 在while循环中使用break:" << std::endl;
    int32_t j = 1;
    while (true) {
        if (j > 5) {
            std::cout << "break at j=" << j << std::endl;
            break;  // 跳出while循环
        }
        std::cout << j << " ";
        ++j;
    }
    std::cout << "(loop ended)" << std::endl;
    
    // 1.3 在switch中使用break
    std::cout << "\n1.3 在switch中使用break:" << std::endl;
    int32_t choice = 2;
    switch (choice) {
        case 1:
            std::cout << "Option 1" << std::endl;
            break;
        case 2:
            std::cout << "Option 2" << std::endl;
            break;  // 跳出switch
        case 3:
            std::cout << "Option 3" << std::endl;
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    }
    
    // 1.4 break在嵌套循环中只跳出最内层
    std::cout << "\n1.4 break在嵌套循环中只跳出最内层:" << std::endl;
    for (int32_t outer = 1; outer <= 3; ++outer) {
        for (int32_t inner = 1; inner <= 3; ++inner) {
            if (inner == 2) {
                break;  // 只跳出内层循环
            }
            std::cout << "outer=" << outer << ", inner=" << inner << "  ";
        }
        std::cout << "| outer continues" << std::endl;
    }
    
    // 1.5 break的实用示例：查找第一个满足条件的数
    std::cout << "\n1.5 break的实用示例：查找第一个满足条件的数:" << std::endl;
    /*
        int32_t arr[] = {3, 7, 2, 8, 5, 1, 9, 4};
        int32_t target = 5;
        bool found = false;
        for (int32_t i = 0; i < 8; ++i) {
            if (arr[i] == target) {
                std::cout << "Found " << target << " at index " << i << std::endl;
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << target << " not found" << std::endl;
        }
    */
    std::cout << "break is used to exit loop early when condition is met" << std::endl;
    
    
    // 2. continue语句
    // continue语句用于跳过当前迭代中剩余的语句，直接进入下一次迭代。
    // continue不会终止循环，只是跳过本次迭代。
    
    std::cout << "\n2. continue语句:" << std::endl;
    
    // 2.1 在for循环中使用continue
    std::cout << "\n2.1 在for循环中使用continue:" << std::endl;
    for (int32_t i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            continue;  // 跳过偶数
        }
        std::cout << i << " ";  // 只输出奇数
    }
    std::cout << "(odd numbers only)" << std::endl;
    
    // 2.2 在while循环中使用continue
    std::cout << "\n2.2 在while循环中使用continue:" << std::endl;
    int32_t j2 = 0;
    while (j2 < 10) {
        ++j2;
        if (j2 % 3 == 0) {
            continue;  // 跳过3的倍数
        }
        std::cout << j2 << " ";
    }
    std::cout << "(not multiples of 3)" << std::endl;
    
    // 2.3 continue跳过特定元素
    std::cout << "\n2.3 continue跳过特定元素:" << std::endl;
    int32_t arr[] = {1, -2, 3, -4, 5, -6, 7};
    int32_t sum = 0;
    for (int32_t val : arr) {
        if (val < 0) {
            continue;  // 跳过负数
        }
        sum += val;
    }
    std::cout << "Sum of positive numbers: " << sum << std::endl;
    
    // 2.4 continue在嵌套循环中只影响内层
    std::cout << "\n2.4 continue在嵌套循环中只影响内层:" << std::endl;
    for (int32_t outer = 1; outer <= 2; ++outer) {
        for (int32_t inner = 1; inner <= 4; ++inner) {
            if (inner == 2) {
                continue;  // 只跳过内层循环的本次迭代
            }
            std::cout << "outer=" << outer << ", inner=" << inner << "  ";
        }
        std::cout << std::endl;
    }
    
    // 2.5 continue的实用示例：只处理有效数据
    std::cout << "\n2.5 continue的实用示例：只处理有效数据:" << std::endl;
    /*
        int32_t scores[] = {85, -1, 92, 0, 78, -1, 95};
        int32_t count = 0;
        int32_t total = 0;
        for (int32_t score : scores) {
            if (score < 0) {
                continue;  // 跳过无效成绩
            }
            total += score;
            ++count;
        }   
        std::cout << "Average: " << (double)total / count << std::endl;
    */
    std::cout << "continue is used to skip invalid data" << std::endl;
    
    
    // 3. goto语句
    // goto语句用于无条件跳转到程序中标记的标签位置。
    // 语法：goto label; ... label: statement;
    // 注意：goto语句不推荐使用，容易造成代码混乱（面条代码）。
    //       但在某些特殊场景下（如多层嵌套循环跳出）可能有用。
    
    std::cout << "\n3. goto语句:" << std::endl;
    
    // 3.1 基本goto语句
    std::cout << "\n3.1 基本goto语句:" << std::endl;
    int32_t x = 0;
    
    start_label:
    ++x;
    std::cout << "x = " << x << std::endl;
    
    if (x < 3) {
        goto start_label;  // 跳回标签
    }
    std::cout << "Exited goto loop" << std::endl;
    
    // 3.2 goto实现循环（不推荐）
    std::cout << "\n3.2 goto实现循环（不推荐）:" << std::endl;
    int32_t y = 1;
    int32_t sum2 = 0;
    
    loop_label:
    sum2 += y;
    ++y;
    if (y <= 10) {
        goto loop_label;
    }
    std::cout << "Sum from 1 to 10 = " << sum2 << std::endl;
    
    // 3.3 goto跳出多层嵌套循环（goto的合理使用场景）
    std::cout << "\n3.3 goto跳出多层嵌套循环:" << std::endl;
    bool found = false;
    for (int32_t i = 0; i < 5; ++i) {
        for (int32_t j = 0; j < 5; ++j) {
            for (int32_t k = 0; k < 5; ++k) {
                if (i * 100 + j * 10 + k == 123) {
                    std::cout << "Found at i=" << i << ", j=" << j << ", k=" << k << std::endl;
                    found = true;
                    goto found_label;  // 一次跳出三层循环
                }
            }
        }
    }
    found_label:
    if (found) {
        std::cout << "Successfully jumped out of 3 nested loops" << std::endl;
    }
    
    // 3.4 goto向前跳转（跳过代码）
    std::cout << "\n3.4 goto向前跳转（跳过代码）:" << std::endl;
    int32_t z = 5;
    if (z > 3) {
        goto skip_label;
    }
    std::cout << "This line is skipped" << std::endl;
    
    skip_label:
    std::cout << "Jumped to skip_label, z = " << z << std::endl;
    
    // 3.5 goto的错误用法
    std::cout << "\n3.5 goto的错误用法:" << std::endl;
    std::cout << "- Cannot jump over variable initializations" << std::endl;
    std::cout << "- Cannot jump into a different scope" << std::endl;
    std::cout << "- Creates spaghetti code, hard to maintain" << std::endl;
    // 以下代码会导致编译错误：
    // goto bad_label;
    // int32_t uninitialized = 10;  // goto不能跳过变量初始化
    // bad_label:
    // std::cout << uninitialized << std::endl;
    
    
    // 4. return语句
    // return语句用于从函数中返回，可以带一个返回值。
    // 在main函数中，return 0;表示程序正常结束。
    // 在main函数中使用return会立即终止程序。
    
    std::cout << "\n4. return语句:" << std::endl;
    std::cout << "return exits the current function" << std::endl;
    std::cout << "In main(), return 0; indicates successful execution" << std::endl;
    std::cout << "return can be used to exit early from any function" << std::endl;
    
    
    // 5. 跳转语句汇总表
    // +------------------+------------------+------------------+------------------+
    // |   语句           |   作用           |   适用范围       |   注意事项       |
    // +------------------+------------------+------------------+------------------+
    // |   break          |   跳出当前循环   |   循环、switch   |   只跳一层       |
    // |   continue       |   跳过本次迭代   |   循环           |   不终止循环     |
    // |   goto           |   无条件跳转     |   任意位置       |   不推荐使用     |
    // |   return         |   退出函数       |   函数           |   可带返回值     |
    // +------------------+------------------+------------------+------------------+
    
    
    // 6. 常见问题和注意事项
    
    std::cout << "\n6. 常见问题和注意事项:" << std::endl;
    
    // 6.1 break和continue的区别
    std::cout << "\n6.1 break和continue的区别:" << std::endl;
    std::cout << "break:    terminates the loop entirely" << std::endl;
    std::cout << "continue: skips current iteration only" << std::endl;
    
    // 6.2 continue在while循环中的陷阱
    std::cout << "\n6.2 continue在while循环中的陷阱:" << std::endl;
    std::cout << "In while loops, ensure loop variable is updated before continue" << std::endl;
    // 错误示例（死循环）：
    // int32_t i = 0;
    // while (i < 10) {
    //     if (i == 5) continue;  // 死循环！i永远是5
    //     ++i;                   // 这行被跳过了
    // }
    
    // 6.3 goto的限制
    std::cout << "\n6.3 goto的限制:" << std::endl;
    std::cout << "- Cannot jump over variable declarations with initializers" << std::endl;
    std::cout << "- Cannot jump into exception handlers" << std::endl;
    std::cout << "- Labels must be in the same function" << std::endl;
    
    // 6.4 break只能跳出一层循环
    std::cout << "\n6.4 break只能跳出一层循环:" << std::endl;
    std::cout << "To exit multiple nested loops, consider:" << std::endl;
    std::cout << "1. Use goto (not recommended but works)" << std::endl;
    std::cout << "2. Use a flag variable" << std::endl;
    std::cout << "3. Extract nested loops into a function and use return" << std::endl;
    
    // 6.5 使用标志变量代替goto跳出多层循环
    std::cout << "\n6.5 使用标志变量代替goto跳出多层循环:" << std::endl;
    bool should_exit = false;
    for (int32_t i = 0; i < 3 && !should_exit; ++i) {
        for (int32_t j = 0; j < 3 && !should_exit; ++j) {
            if (i == 1 && j == 1) {
                std::cout << "Condition met at i=" << i << ", j=" << j << std::endl;
                should_exit = true;
            } else {
                std::cout << "i=" << i << ", j=" << j << "  ";
            }
        }
    }
    std::cout << std::endl;
    
    
    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}