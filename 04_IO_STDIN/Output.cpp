#include <iostream>
#include <iomanip>
#include <cstdint>
#include <string>

int main() {
    // 1. cout << 运算符的基本用法
    // cout是C++标准输出流对象，定义在<iostream>头文件中，用于向标准输出设备（通常是屏幕）输出数据。
    // 使用<<运算符将数据插入到输出流中，cout会根据数据的类型自动进行格式化输出。
    
    std::cout << "1. cout << 基本用法:" << std::endl;
    
    std::cout << "Hello, World!" << std::endl;
    
    int32_t num = 42;
    std::cout << "Integer value: " << num << std::endl;
    
    double pi = 3.14159;
    std::cout << "PI value: " << pi << std::endl;
    
    char ch = 'A';
    std::cout << "Character: " << ch << std::endl;
    
    std::string str = "C++ Programming";
    std::cout << "String: " << str << std::endl;


    // 2. endl 和 '\n' 的区别
    // endl: 输出换行符并刷新缓冲区，会导致性能开销。
    // '\n': 只输出换行符，不刷新缓冲区，性能更好。
    // 在需要立即看到输出时使用endl，否则推荐使用'\n'。
    
    std::cout << "\n2. endl 和 '\\n' 的区别:" << std::endl;
    
    std::cout << "Using endl: " << "Line 1" << std::endl;
    std::cout << "Using endl: " << "Line 2" << std::endl;
    
    std::cout << "\nUsing \\n: " << "Line 1\n";
    std::cout << "Using \\n: " << "Line 2\n";


    // 3. 输出布尔值
    // 默认情况下，cout输出bool值时显示1和0。
    // 使用std::boolalpha操纵符可以让cout输出true和false。
    
    std::cout << "\n3. 输出布尔值:" << std::endl;
    
    bool flag1 = true;
    bool flag2 = false;
    
    std::cout << "Default bool output:" << std::endl;
    std::cout << "flag1 = " << flag1 << std::endl;   // 输出1
    std::cout << "flag2 = " << flag2 << std::endl;   // 输出0
    
    std::cout << "\nUsing boolalpha:" << std::endl;
    std::cout << std::boolalpha;
    std::cout << "flag1 = " << flag1 << std::endl;   // 输出true
    std::cout << "flag2 = " << flag2 << std::endl;   // 输出false
    
    std::cout << std::noboolalpha; // 恢复默认


    // 4. 输出整数的不同进制
    // 默认情况下，cout以十进制输出整数。
    // 可以使用操纵符改变输出进制：
    // - std::dec: 十进制（默认）
    // - std::hex: 十六进制
    // - std::oct: 八进制
    // - std::showbase: 显示进制前缀（0x表示十六进制，0表示八进制）
    
    std::cout << "\n4. 输出整数的不同进制:" << std::endl;
    
    int32_t num2 = 42;
    
    std::cout << "Decimal: " << std::dec << num2 << std::endl;
    std::cout << "Hexadecimal: " << std::hex << num2 << std::endl;
    std::cout << "Octal: " << std::oct << num2 << std::endl;
    
    std::cout << "\nWith showbase:" << std::endl;
    std::cout << std::showbase;
    std::cout << "Decimal: " << std::dec << num2 << std::endl;
    std::cout << "Hexadecimal: " << std::hex << num2 << std::endl;
    std::cout << "Octal: " << std::oct << num2 << std::endl;
    
    std::cout << std::noshowbase; // 恢复默认
    std::cout << std::dec;        // 恢复十进制


    // 5. 输出浮点数的格式化
    // 浮点数的输出格式可以通过<iomanip>头文件中的操纵符进行控制。
    
    // 5.1 设置小数位数（setprecision）
    // setprecision(n)设置浮点数的精度，有两种模式：
    // - 默认模式：设置有效数字的个数
    // - fixed模式：设置小数部分的位数
    // - scientific模式：科学计数法，设置小数部分的位数
    
    std::cout << "\n5.1 设置浮点数精度（setprecision）:" << std::endl;
    
    double num3 = 3.141592653589793;
    
    std::cout << "Default: " << num3 << std::endl;
    
    std::cout << "\nSet precision to 4:" << std::endl;
    std::cout << std::setprecision(4);
    std::cout << "Default mode: " << num3 << std::endl;
    
    std::cout << "\nFixed mode with precision 4:" << std::endl;
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Fixed: " << num3 << std::endl;
    
    std::cout << "\nScientific mode with precision 4:" << std::endl;
    std::cout << std::scientific << std::setprecision(4);
    std::cout << "Scientific: " << num3 << std::endl;
    
    std::cout.unsetf(std::ios::fixed | std::ios::scientific); // 恢复默认
    std::cout << std::setprecision(6); // 恢复默认精度


    // 5.2 设置显示小数点（showpoint）
    // 默认情况下，当浮点数没有小数部分时，cout不会显示小数点。
    // 使用std::showpoint可以强制显示小数点。
    
    std::cout << "\n5.2 显示小数点（showpoint）:" << std::endl;
    
    double num4 = 5.0;
    
    std::cout << "Without showpoint: " << num4 << std::endl;
    std::cout << "With showpoint: " << std::showpoint << num4 << std::endl;
    std::cout << std::noshowpoint; // 恢复默认


    // 6. 设置输出宽度（setw）
    // setw(n)设置下一个输出项的宽度，如果输出内容的长度小于n，会用填充字符填充。
    // 默认填充字符是空格。
    // setw只对下一个输出项有效。
    
    std::cout << "\n6. 设置输出宽度（setw）:" << std::endl;
    
    std::cout << "Column 1" << "Column 2" << "Column 3" << std::endl;
    
    std::cout << std::setw(10) << "Name" 
              << std::setw(10) << "Age" 
              << std::setw(10) << "Score" << std::endl;
    
    std::cout << std::setw(10) << "Alice" 
              << std::setw(10) << 20 
              << std::setw(10) << 95.5 << std::endl;
    
    std::cout << std::setw(10) << "Bob" 
              << std::setw(10) << 19 
              << std::setw(10) << 87.0 << std::endl;


    // 6.1 设置填充字符（setfill）
    // setfill(ch)设置填充字符，默认为空格。
    // 配合setw使用，可以实现各种填充效果。
    
    std::cout << "\n6.1 设置填充字符（setfill）:" << std::endl;
    
    std::cout << std::setfill('-') << std::setw(20) << "" << std::endl;
    std::cout << std::setfill(' ') << std::setw(20) << "Centered text" << std::endl;
    std::cout << std::setfill('-') << std::setw(20) << "" << std::endl;
    std::cout << std::setfill(' '); // 恢复默认


    // 6.2 设置对齐方式（left, right, internal）
    // left: 左对齐
    // right: 右对齐（默认）
    // internal: 符号或进制前缀左对齐，数值右对齐
    
    std::cout << "\n6.2 设置对齐方式（left, right, internal）:" << std::endl;
    
    std::cout << "Left alignment:" << std::endl;
    std::cout << std::left << std::setw(10) << "Name" 
              << std::setw(10) << "Age" 
              << std::setw(10) << "Score" << std::endl;
    std::cout << std::setw(10) << "Alice" 
              << std::setw(10) << 20 
              << std::setw(10) << 95.5 << std::endl;
    
    std::cout << "\nRight alignment (default):" << std::endl;
    std::cout << std::right << std::setw(10) << "Name" 
              << std::setw(10) << "Age" 
              << std::setw(10) << "Score" << std::endl;
    std::cout << std::setw(10) << "Alice" 
              << std::setw(10) << 20 
              << std::setw(10) << 95.5 << std::endl;
    
    std::cout << "\nInternal alignment:" << std::endl;
    std::cout << std::internal << std::setw(10) << -123 << std::endl;
    std::cout << std::setw(10) << 456 << std::endl;


    // 7. cout的成员函数详解
    // cout作为ostream类的对象，提供了多个成员函数用于更精细的输出控制。
    
    // 7.1 cout.put() - 输出单个字符
    // cout.put(ch)输出一个字符到输出流。
    
    std::cout << "\n7.1 cout.put() - 输出单个字符:" << std::endl;
    
    std::cout.put('H');
    std::cout.put('e');
    std::cout.put('l');
    std::cout.put('l');
    std::cout.put('o');
    std::cout.put('\n');
    
    std::cout.put('W').put('o').put('r').put('l').put('d').put('\n');


    // 7.2 cout.write() - 输出指定数量的字符
    // cout.write(char*, int)输出字符数组中指定数量的字符。
    // 不会在末尾自动添加'\0'，也不会自动处理字符串结束符。
    
    std::cout << "\n7.2 cout.write() - 输出指定数量的字符:" << std::endl;
    
    const char* msg = "Hello, C++!";
    std::cout.write(msg, 5) << std::endl;     // 输出Hello
    std::cout.write(msg, 10) << std::endl;    // 输出Hello, C++
    std::cout.write(msg, 13) << std::endl;    // 输出Hello, C++!


    // 7.3 cout.flush() - 刷新缓冲区
    // cout.flush()强制刷新输出缓冲区，将缓冲区中的数据立即输出到设备。
    // 在需要立即看到输出时使用（如在循环中显示进度）。
    
    std::cout << "\n7.3 cout.flush() - 刷新缓冲区:" << std::endl;
    
    std::cout << "Flushing output...";
    std::cout.flush(); // 立即显示上面的内容
    std::cout << " Done!" << std::endl;


    // 7.4 cout.tellp() - 获取输出位置指针
    // cout.tellp()返回当前输出位置指针的位置（字节数）。
    
    std::cout << "\n7.4 cout.tellp() - 获取输出位置:" << std::endl;
    
    std::cout << "Current position: " << std::cout.tellp() << std::endl;
    std::cout << "Output some text ";
    std::cout << "Current position after output: " << std::cout.tellp() << std::endl;


    // 7.5 cout.seekp() - 设置输出位置指针
    // cout.seekp(pos)设置输出位置指针到指定位置。
    // 注意：对于标准输出流（cout），这个操作通常没有实际意义。
    // 主要用于文件输出流。
    
    std::cout << "\n7.5 cout.seekp() - 设置输出位置:" << std::endl;
    
    std::cout << "Before seekp: " << std::cout.tellp() << std::endl;
    std::cout.seekp(0);
    std::cout << "After seekp(0): " << std::cout.tellp() << std::endl;


    // 8. 使用cout连续输出多个值
    // cout <<运算符支持链式调用，可以连续输出多个值。
    
    std::cout << "\n8. 使用cout连续输出多个值:" << std::endl;
    
    std::string name = "Charlie";
    int32_t age = 21;
    double score = 90.5;
    
    std::cout << "Name: " << name 
              << ", Age: " << age 
              << ", Score: " << score 
              << std::endl;
    
    std::cout << "\nStudent information:" << std::endl;
    std::cout << std::left << std::setw(10) << "Name" 
              << std::setw(10) << "Age" 
              << std::setw(10) << "Score" << std::endl;
    std::cout << std::setfill('-') << std::setw(30) << "" << std::endl;
    std::cout << std::setfill(' ') << std::setw(10) << name 
              << std::setw(10) << age 
              << std::setw(10) << score << std::endl;


    // 9. 输出流状态标志
    // cout有多个状态标志：
    // - goodbit: 无错误，正常状态
    // - failbit: 输出操作失败（如写入只读文件）
    // - badbit: 输出流严重错误
    // - eofbit: 到达文件末尾
    
    std::cout << "\n9. cout的状态标志:" << std::endl;
    std::cout << "cout.good() = " << std::boolalpha << std::cout.good() << std::endl;
    std::cout << "cout.fail() = " << std::cout.fail() << std::endl;
    std::cout << "cout.bad() = " << std::cout.bad() << std::endl;
    std::cout << "cout.eof() = " << std::cout.eof() << std::endl;


    // 10. 输出流操纵符汇总表
    // +------------------+------------------------------------------+
    // |   操纵符         |   功能描述                               |
    // +------------------+------------------------------------------+
    // |   endl           |   输出换行符并刷新缓冲区                 |
    // |   flush          |   刷新缓冲区                             |
    // |   boolalpha      |   输出true/false而非1/0                  |
    // |   noboolalpha    |   恢复默认输出1/0                         |
    // |   dec            |   十进制输出                             |
    // |   hex            |   十六进制输出                           |
    // |   oct            |   八进制输出                             |
    // |   showbase       |   显示进制前缀                           |
    // |   noshowbase     |   不显示进制前缀                         |
    // |   setprecision(n)|   设置浮点数精度                         |
    // |   fixed          |   固定小数位数模式                        |
    // |   scientific     |   科学计数法模式                          |
    // |   showpoint      |   强制显示小数点                         |
    // |   noshowpoint    |   恢复默认                               |
    // |   setw(n)        |   设置下一个输出项的宽度                  |
    // |   setfill(ch)    |   设置填充字符                           |
    // |   left           |   左对齐                                 |
    // |   right          |   右对齐（默认）                         |
    // |   internal       |   符号左对齐，数值右对齐                  |
    // +------------------+------------------------------------------+


    // 11. cout成员函数汇总表
    // +------------------+------------------------------------------+
    // |   成员函数       |   功能描述                               |
    // +------------------+------------------------------------------+
    // |   cout.put(ch)   |   输出单个字符                           |
    // |   cout.write()   |   输出指定数量的字符到char数组           |
    // |   cout.flush()   |   刷新输出缓冲区                         |
    // |   cout.tellp()   |   返回当前输出位置                       |
    // |   cout.seekp()   |   设置输出位置指针                       |
    // |   cout.clear()   |   清除错误标志                           |
    // +------------------+------------------------------------------+


    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}