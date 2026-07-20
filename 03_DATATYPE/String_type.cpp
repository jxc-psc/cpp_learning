#include <iostream>
#include <string>   // C++风格字符串头文件
#include <cstring>  // C风格字符串函数头文件

int main() {

    // 1. C语言风格字符串
    // C语言风格字符串是以空字符'\0'结尾的字符数组.
    // 需要手动管理内存, 使用<cstring>头文件中的函数进行操作.
    // 常用函数包括: strlen(求长度), strcpy(复制), strcat(拼接), strcmp(比较)等.
    // C语言风格字符串存在缓冲区溢出风险, 使用时需要特别小心.

    // 1.1 声明与初始化
    char str1[20] = "Hello";           // 显式指定大小的字符数组, 自动在末尾添加'\0'
    char str2[] = "World";             // 由编译器自动计算大小
    char str3[20];                     // 未初始化的字符数组
    char str4[20] = {'H', 'e', 'l', 'l', 'o', '\0'}; // 逐个字符初始化, 必须手动添加'\0'
    
    std::cout << "1. C语言风格字符串:" << std::endl;
    std::cout << "str1 = " << str1 << std::endl;
    std::cout << "str2 = " << str2 << std::endl;
    std::cout << "str3 = " << str3 << std::endl; // 未初始化, 输出不确定
    std::cout << "str4 = " << str4 << std::endl;

    // 1.2 字符串长度(strlen)
    std::cout << "\n1.2 字符串长度(strlen):" << std::endl;
    std::cout << "strlen(str1) = " << strlen(str1) << std::endl; // 不包括'\0'
    std::cout << "sizeof(str1) = " << sizeof(str1) << std::endl; // 数组总大小, 包括未使用空间

    // 1.3 字符串复制(strcpy)
    std::cout << "\n1.3 字符串复制(strcpy):" << std::endl;
    strcpy(str3, str1);                // 将str1复制到str3
    std::cout << "strcpy(str3, str1)后, str3 = " << str3 << std::endl;

    // 1.4 字符串拼接(strcat)
    std::cout << "\n1.4 字符串拼接(strcat):" << std::endl;
    strcat(str1, " ");                 // 在str1末尾添加空格
    strcat(str1, str2);                // 在str1末尾拼接str2
    std::cout << "strcat(str1, str2)后, str1 = " << str1 << std::endl;

    // 1.5 字符串比较(strcmp)
    std::cout << "\n1.5 字符串比较(strcmp):" << std::endl;
    char str5[] = "Apple";
    char str6[] = "Banana";
    char str7[] = "Apple";
    
    int cmp1 = strcmp(str5, str6);     // str5 < str6, 返回负数
    int cmp2 = strcmp(str6, str5);     // str6 > str5, 返回正数
    int cmp3 = strcmp(str5, str7);     // str5 == str7, 返回0
    
    std::cout << "strcmp(\"Apple\", \"Banana\") = " << cmp1 << std::endl;
    std::cout << "strcmp(\"Banana\", \"Apple\") = " << cmp2 << std::endl;
    std::cout << "strcmp(\"Apple\", \"Apple\") = " << cmp3 << std::endl;

    // 1.6 字符串查找(strchr)
    std::cout << "\n1.6 字符串查找(strchr):" << std::endl;
    char str8[] = "Hello, World!";
    char* pos = strchr(str8, 'W');     // 查找'W'的位置
    if (pos != nullptr) {
        std::cout << "在\"" << str8 << "\"中找到'W', 位置是: " << pos - str8 << std::endl;
    }


    // 2. C++语言风格字符串
    // C++语言风格字符串使用std::string类, 定义在<string>头文件中.
    // std::string自动管理内存, 提供了丰富的成员函数和运算符重载.
    // 相比于C语言风格字符串, std::string更加安全, 易用, 且支持运算符重载.
    // 常用操作包括: size()/length()(求长度), +(拼接), ==(比较), find()(查找), substr()(截取)等.

    // 2.1 声明与初始化
    std::string s1 = "Hello";          // 使用等号初始化
    std::string s2("World");           // 使用构造函数初始化
    std::string s3;                    // 空字符串
    std::string s4(5, 'a');            // 5个'a'组成的字符串
    std::string s5 = s1;               // 复制初始化
    
    std::cout << "\n2. C++语言风格字符串:" << std::endl;
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << "s2 = " << s2 << std::endl;
    std::cout << "s3 = \"" << s3 << "\"" << std::endl; // 空字符串
    std::cout << "s4 = " << s4 << std::endl;
    std::cout << "s5 = " << s5 << std::endl;

    // 2.2 字符串长度(size()/length())
    std::cout << "\n2.2 字符串长度(size()/length()):" << std::endl;
    std::cout << "s1.size() = " << s1.size() << std::endl;
    std::cout << "s1.length() = " << s1.length() << std::endl; // 与size()相同

    // 2.3 字符串拼接(+)
    std::cout << "\n2.3 字符串拼接(+):" << std::endl;
    std::string s6 = s1 + " " + s2;    // 使用+运算符拼接
    std::cout << "s1 + \" \" + s2 = " << s6 << std::endl;

    // 2.4 字符串比较(==, !=, <, >)
    std::cout << "\n2.4 字符串比较(==, !=, <, >):" << std::endl;
    std::string s7 = "Apple";
    std::string s8 = "Banana";
    std::string s9 = "Apple";
    
    bool eq = (s7 == s9);              // 相等
    bool neq = (s7 != s8);            // 不相等
    bool lt = (s7 < s8);              // 小于
    bool gt = (s8 > s7);              // 大于
    
    std::cout << "s7 == s9: " << (eq ? "true" : "false") << std::endl;
    std::cout << "s7 != s8: " << (neq ? "true" : "false") << std::endl;
    std::cout << "s7 < s8: " << (lt ? "true" : "false") << std::endl;
    std::cout << "s8 > s7: " << (gt ? "true" : "false") << std::endl;

    // 2.5 字符串查找(find())
    std::cout << "\n2.5 字符串查找(find()):" << std::endl;
    std::string s10 = "Hello, World!";
    size_t found = s10.find("World");  // 查找子字符串
    if (found != std::string::npos) {
        std::cout << "在\"" << s10 << "\"中找到\"World\", 位置是: " << found << std::endl;
    }

    // 2.6 字符串截取(substr())
    std::cout << "\n2.6 字符串截取(substr()):" << std::endl;
    std::string s11 = s10.substr(7, 5); // 从位置7开始, 截取5个字符
    std::cout << "s10.substr(7, 5) = " << s11 << std::endl;

    // 2.7 字符串替换(replace())
    std::cout << "\n2.7 字符串替换(replace()):" << std::endl;
    std::string s12 = "Hello, World!";
    s12.replace(7, 5, "C++");          // 从位置7开始, 替换5个字符为"C++"
    std::cout << "s12.replace(7, 5, \"C++\") = " << s12 << std::endl;

    // 2.8 访问单个字符([])
    std::cout << "\n2.8 访问单个字符([]):" << std::endl;
    std::cout << "s1[0] = " << s1[0] << std::endl; // 第一个字符
    std::cout << "s1[4] = " << s1[4] << std::endl; // 第五个字符


    // 3. C语言风格字符串与C++语言风格字符串的对比
    // +-------------------+--------------------------+--------------------------+
    // |   特性            |   C语言风格字符串        |   C++语言风格字符串      |
    // +-------------------+--------------------------+--------------------------+
    // |   类型            |   char数组               |   std::string类          |
    // |   内存管理        |   手动管理               |   自动管理               |
    // |   安全性          |   低(缓冲区溢出风险)      |   高(自动检查边界)        |
    // |   运算符重载      |   不支持                 |   支持(+, ==, <, >等)    |
    // |   长度获取        |   strlen()函数            |   size()/length()方法    |
    // |   拼接            |   strcat()函数            |   +运算符                |
    // |   比较            |   strcmp()函数            |   ==, !=, <, >运算符     |
    // |   查找            |   strchr()/strstr()函数   |   find()方法             |
    // |   截取            |   手动实现               |   substr()方法           |
    // |   空字符结尾      |   需要'\0'结尾            |   不需要                 |
    // +-------------------+--------------------------+--------------------------+
    // 建议: 在C++程序中优先使用std::string, 只有在与C代码交互时才使用C语言风格字符串.


    std::cout << "\n请输入回车以继续..." << std::endl;
    std::cin.get();
    return 0;
}