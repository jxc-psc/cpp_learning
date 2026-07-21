#include <iostream>
#include <cstdint>
#include <string>
#include <limits>

int main() {
    // 1. cin >> 运算符的基本用法
    // cin是C++标准输入流对象，定义在<iostream>头文件中，用于从标准输入设备（通常是键盘）读取数据。
    // 使用>>运算符将输入的数据提取到变量中，cin会根据变量的类型自动进行类型转换。
    // >>运算符会自动忽略前导空白字符（空格、制表符、换行符），直到遇到第一个非空白字符开始读取。
    
    std::cout << "1. cin >> 基本用法:" << std::endl;
    std::cout << "Enter an integer: ";
    int32_t num = 0;
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;

    std::cout << "\nEnter a floating-point number: ";
    double pi = 0.0;
    std::cin >> pi;
    std::cout << "You entered: " << pi << std::endl;

    std::cout << "\nEnter a character: ";
    char ch = ' ';
    std::cin >> ch;
    std::cout << "You entered: " << ch << std::endl;


    // 2. cin >> 读取字符串的问题
    // 使用cin >>读取字符串时，会在遇到空白字符（空格、制表符、换行符）时停止读取。
    // 剩余的字符会留在输入缓冲区中，等待下一次读取操作。
    
    std::cout << "\n2. cin >> 读取字符串的问题:" << std::endl;
    std::cout << "Enter a string with spaces (e.g., Hello World): ";
    std::string str1;
    std::cin >> str1; // 只读取到第一个空格为止
    std::cout << "First read string: " << str1 << std::endl; // 输出Hello
    
    std::cin >> str1; // 继续读取缓冲区中剩余的内容
    std::cout << "Second read string: " << str1 << std::endl; // 输出World


    // 3. getline()函数的用法
    // getline()函数用于读取一整行输入，包括空格在内的所有字符，直到遇到换行符为止。
    // getline()会将换行符从缓冲区中提取出来并丢弃，不会留在缓冲区中。
    // getline()函数的完整语法是: std::getline(input_stream, string_variable, delimiter)
    // 参数:
    //   input_stream: 输入流对象，通常是std::cin
    //   string_variable: 用于存储输入的字符串变量
    //   delimiter: 可选参数，指定分隔符，默认为'\n'（换行符）
    
    std::cout << "\n3. getline()函数的用法:" << std::endl;
    std::cout << "Enter a line of text (can contain spaces): ";
    std::string str2;
    std::getline(std::cin, str2); // 读取一整行，直到换行符
    std::cout << "You entered: " << str2 << std::endl;

    std::cout << "\nEnter another line of text: ";
    std::getline(std::cin, str2);
    std::cout << "You entered: " << str2 << std::endl;


    // 3.1 getline()的分隔符参数
    // getline()的第三个参数可以指定分隔符，读取到分隔符时停止。
    // 分隔符会被提取并丢弃，不会存储到字符串中。
    
    std::cout << "\n3.1 getline()的分隔符参数:" << std::endl;
    std::cout << "Enter comma-separated text (e.g., apple,banana,orange): ";
    std::string fruit1, fruit2, fruit3;
    std::getline(std::cin, fruit1, ','); // 读取到逗号为止
    std::getline(std::cin, fruit2, ','); // 继续读取到下一个逗号
    std::getline(std::cin, fruit3);      // 读取剩余的所有内容
    std::cout << "First fruit: " << fruit1 << std::endl;
    std::cout << "Second fruit: " << fruit2 << std::endl;
    std::cout << "Third fruit: " << fruit3 << std::endl;


    // 3.2 getline()的返回值
    // getline()函数返回输入流对象的引用，可以用于判断是否成功读取。
    // 当到达文件末尾（EOF）或发生错误时，返回的流对象在布尔上下文中为false。
    
    std::cout << "\n3.2 getline()的返回值:" << std::endl;
    std::cout << "Enter multiple lines of text (enter empty line to end):" << std::endl;
    std::string line;
    while (std::getline(std::cin, line)) {
        if (line.empty()) {
            std::cout << "Empty line detected, stopping reading." << std::endl;
            break;
        }
        std::cout << "Read line: " << line << std::endl;
    }


    // 3.3 cin.getline()与std::getline()的区别
    // cin.getline(char*, int, char): 用于读取到char数组中，需要指定最大长度。
    // std::getline(std::cin, std::string): 用于读取到std::string中，自动扩展。
    // cin.getline()是istream类的成员函数，std::getline()是全局函数。
    
    std::cout << "\n3.3 cin.getline()与std::getline()的区别:" << std::endl;
    std::cout << "Enter a line of text (using cin.getline()): ";
    char buffer[100];
    std::cin.getline(buffer, 100); // 读取到char数组中，最多99个字符
    std::cout << "Content read by cin.getline(): " << buffer << std::endl;

    std::cout << "\nEnter a line of text (using std::getline()): ";
    std::string str7;
    std::getline(std::cin, str7); // 读取到std::string中
    std::cout << "Content read by std::getline(): " << str7 << std::endl;


    // 4. 缓冲区残留问题（重点）
    // 当使用cin >>读取数据后，输入时按下的回车键（换行符'\n'）会留在输入缓冲区中。
    // 如果接下来使用getline()读取输入，getline()会立即读取到这个换行符，导致读取到空字符串。
    
    std::cout << "\n4. 缓冲区残留问题（重点）:" << std::endl;
    std::cout << "Enter an integer: ";
    int32_t num2 = 0;
    std::cin >> num2; // 读取整数后，换行符'\n'留在缓冲区中
    std::cout << "You entered: " << num2 << std::endl;

    std::cout << "Enter a line of text: ";
    std::string str3;
    std::getline(std::cin, str3); // 这里会读取到缓冲区中残留的换行符，导致str3为空
    std::cout << "You entered: [" << str3 << "]" << std::endl; // 输出空字符串


    // 5. 解决缓冲区残留问题的方法
    
    // 5.1 使用cin.ignore()忽略缓冲区中的换行符
    // cin.ignore(n, ch)会忽略输入流中最多n个字符，直到遇到字符ch为止。
    // cin.ignore()默认忽略1个字符。
    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n')会忽略直到换行符为止的所有字符。
    std::cout << "\n5.1 使用cin.ignore()解决缓冲区残留问题:" << std::endl;
    std::cout << "Enter an integer: ";
    int32_t num3 = 0;
    std::cin >> num3;
    std::cin.ignore(); // 忽略缓冲区中的换行符
    std::cout << "You entered: " << num3 << std::endl;

    std::cout << "Enter a line of text: ";
    std::string str4;
    std::getline(std::cin, str4); // 现在可以正确读取了
    std::cout << "You entered: [" << str4 << "]" << std::endl;


    // 5.2 使用cin.get()读取换行符
    // cin.get()会读取输入流中的一个字符（包括空白字符），可以用来读取缓冲区中的换行符。
    std::cout << "\n5.2 使用cin.get()解决缓冲区残留问题:" << std::endl;
    std::cout << "Enter an integer: ";
    int32_t num4 = 0;
    std::cin >> num4;
    std::cin.get(); // 读取缓冲区中的换行符
    std::cout << "You entered: " << num4 << std::endl;

    std::cout << "Enter a line of text: ";
    std::string str5;
    std::getline(std::cin, str5); // 现在可以正确读取了
    std::cout << "You entered: [" << str5 << "]" << std::endl;


    // 5.3 使用cin.sync()清空缓冲区（不推荐）
    // cin.sync()会同步输入流，清空缓冲区。
    // 但这个行为在不同编译器和平台上可能不一致，不推荐使用。
    std::cout << "\n5.3 使用cin.sync()清空缓冲区（不推荐）:" << std::endl;
    std::cout << "Enter an integer: ";
    int32_t num5 = 0;
    std::cin >> num5;
    std::cin.sync(); // 清空缓冲区
    std::cout << "You entered: " << num5 << std::endl;

    std::cout << "Enter a line of text: ";
    std::string str6;
    std::getline(std::cin, str6);
    std::cout << "You entered: [" << str6 << "]" << std::endl;


    // 6. cin >> 与 getline() 混合使用的最佳实践
    // 建议：在使用cin >>读取数据后，如果接下来需要使用getline()，务必先清理缓冲区中的换行符。
    // 推荐使用cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n')来彻底清理缓冲区。
    
    std::cout << "\n6. 混合使用的最佳实践:" << std::endl;
    std::cout << "Enter your age: ";
    int32_t age = 0;
    std::cin >> age;
    
    // 推荐的清理方式：忽略直到换行符为止的所有字符
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    
    std::cout << "\nYour information:" << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Name: " << name << std::endl;


    // 7. cin的状态标志
    // cin有三个状态标志：
    // - goodbit: 无错误，正常状态
    // - failbit: 输入格式错误（如输入字母给整数变量）
    // - badbit: 输入流严重错误
    // - eofbit: 到达文件末尾
    
    std::cout << "\n7. cin的状态标志:" << std::endl;
    std::cout << "cin.good() = " << std::boolalpha << std::cin.good() << std::endl;
    std::cout << "cin.fail() = " << std::cin.fail() << std::endl;
    std::cout << "cin.bad() = " << std::cin.bad() << std::endl;
    std::cout << "cin.eof() = " << std::cin.eof() << std::endl;


    // 8. 处理输入错误
    // 当输入格式错误时（如输入字母给整数变量），cin会设置failbit标志，后续的输入操作会失败。
    // 需要使用cin.clear()清除错误标志，并使用cin.ignore()清理缓冲区中的错误数据。
    
    std::cout << "\n8. 处理输入错误:" << std::endl;
    std::cout << "Enter an integer: ";
    int32_t num6 = 0;
    std::cin >> num6;
    
    if (std::cin.fail()) {
        std::cout << "Input format error!" << std::endl;
        std::cin.clear(); // 清除错误标志
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清理缓冲区
    } else {
        std::cout << "You entered: " << num6 << std::endl;
    }


    // 9. cin的成员函数详解
    // cin作为istream类的对象，提供了多个成员函数用于更精细的输入控制。
    
    // 9.1 cin.get() - 读取单个字符
    // cin.get()会读取输入流中的一个字符，包括空白字符（空格、换行符等）。
    // 与cin >>不同，cin.get()不会忽略前导空白字符。
    std::cout << "\n9.1 cin.get() - 读取单个字符:" << std::endl;
    std::cout << "Enter a character: ";
    char ch1;
    std::cin.get(ch1); // 读取一个字符
    std::cout << "You entered: [" << ch1 << "]" << std::endl;
    
    std::cin.get(); // 读取换行符
    
    std::cout << "\nEnter a line of text: ";
    char ch2;
    while (std::cin.get(ch2) && ch2 != '\n') {
        std::cout << "Character: [" << ch2 << "] ";
    }
    std::cout << std::endl;


    // 9.2 cin.peek() - 查看下一个字符
    // cin.peek()会返回输入流中的下一个字符，但不会将其从流中提取出来。
    // 常用于判断下一个字符是什么，而不影响后续的读取操作。
    std::cout << "\n9.2 cin.peek() - 查看下一个字符:" << std::endl;
    std::cout << "Enter some text: ";
    char peek_char = std::cin.peek(); // 查看但不提取
    std::cout << "Next character is: [" << peek_char << "]" << std::endl;
    
    std::string peek_str;
    std::cin >> peek_str; // 正常读取
    std::cout << "You entered: " << peek_str << std::endl;


    // 9.3 cin.putback() - 将字符放回输入流
    // cin.putback(ch)会将字符ch放回输入流的开头位置。
    // 常用于读取了一个字符后，发现它不是期望的字符，需要放回重新读取。
    std::cout << "\n9.3 cin.putback() - 将字符放回输入流:" << std::endl;
    std::cout << "Enter a character: ";
    char putback_char;
    std::cin.get(putback_char);
    
    if (putback_char >= '0' && putback_char <= '9') {
        std::cin.putback(putback_char); // 将数字放回
        int32_t num7;
        std::cin >> num7;
        std::cout << "You entered a number: " << num7 << std::endl;
    } else {
        std::cout << "You did not enter a digit: [" << putback_char << "]" << std::endl;
    }


    // 9.4 cin.read() - 读取指定数量的字符
    // cin.read(char*, int)会从输入流中读取指定数量的字符到字符数组中。
    // 与cin.getline()不同，cin.read()不会在末尾添加'\0'，也不会自动处理换行符。
    std::cout << "\n9.4 cin.read() - 读取指定数量的字符:" << std::endl;
    std::cout << "Enter some text: ";
    char read_buffer[50];
    std::cin.read(read_buffer, 10); // 最多读取10个字符
    read_buffer[std::cin.gcount()] = '\0'; // 手动添加终止符
    std::cout << "First 10 characters read: [" << read_buffer << "]" << std::endl;
    std::cout << "Number of characters actually read: " << std::cin.gcount() << std::endl;


    // 9.5 cin.gcount() - 获取最后一次读取的字符数
    // cin.gcount()返回最后一次非格式化读取操作（如cin.get(), cin.getline(), cin.read()）读取的字符数。
    std::cout << "\n9.5 cin.gcount() - 获取读取的字符数:" << std::endl;
    std::cout << "Enter a line of text: ";
    char gcount_buffer[50];
    std::cin.getline(gcount_buffer, 50);
    std::cout << "Content read: " << gcount_buffer << std::endl;
    std::cout << "Number of characters read: " << std::cin.gcount() << std::endl;


    // 10. 使用cin连续读取多个值
    // cin >>运算符支持链式调用，可以连续读取多个值。
    // >>运算符会自动忽略空白字符（空格、制表符、换行符），因此可以在同一行或多行输入。
    
    // 10.1 链式读取多个值
    std::cout << "\n10.1 链式读取多个值:" << std::endl;
    std::cout << "Enter name, age, and score (separated by spaces or newlines): " << std::endl;
    std::string student_name;
    int32_t student_age;
    double student_score;
    
    std::cin >> student_name >> student_age >> student_score; // 链式读取
    std::cout << "\nStudent information:" << std::endl;
    std::cout << "Name: " << student_name << std::endl;
    std::cout << "Age: " << student_age << std::endl;
    std::cout << "Score: " << student_score << std::endl;


    // 10.2 循环读取多个值
    std::cout << "\n10.2 循环读取多个值:" << std::endl;
    std::cout << "Enter multiple integers (enter non-digit to end): ";
    int32_t sum = 0;
    int32_t input_num;
    
    while (std::cin >> input_num) { // 当输入有效时继续循环
        sum += input_num;
        std::cout << "Current sum: " << sum << std::endl;
    }
    
    std::cin.clear(); // 清除错误标志
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清理缓冲区
    std::cout << "Final sum: " << sum << std::endl;


    // 10.3 读取到数组中
    std::cout << "\n10.3 读取到数组中:" << std::endl;
    std::cout << "Enter 5 integers: ";
    int32_t arr[5];
    
    for (int32_t i = 0; i < 5; ++i) {
        std::cin >> arr[i];
    }
    
    std::cout << "Your array is: ";
    for (int32_t i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    // 11. cin成员函数汇总表
    // +------------------+------------------------------------------+
    // |   成员函数       |   功能描述                               |
    // +------------------+------------------------------------------+
    // |   cin.get()      |   读取单个字符（包括空白字符）            |
    // |   cin.getline()  |   读取一行到char数组                     |
    // |   cin.ignore()   |   忽略指定数量的字符                     |
    // |   cin.clear()    |   清除错误标志                           |
    // |   cin.sync()     |   同步输入流，清空缓冲区（平台依赖）      |
    // |   cin.peek()     |   查看下一个字符但不提取                 |
    // |   cin.putback()  |   将字符放回输入流                       |
    // |   cin.read()     |   读取指定数量的字符到char数组           |
    // |   cin.gcount()   |   返回最后一次读取的字符数               |
    // +------------------+------------------------------------------+


    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}