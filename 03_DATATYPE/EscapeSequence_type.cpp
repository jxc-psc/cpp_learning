#include <iostream>

int main() {
    // 转义字符是以反斜杠（\）开头的特殊字符序列，用于表示一些无法直接输入或显示的字符。
    // 以下是C++中所有常用转义字符的完整表格：
    //
    // +------------------+--------------------------+-----------+
    // |   转义序列       |   含义                   |   ASCII码 |
    // +------------------+--------------------------+-----------+
    // |   \n             |   换行符                 |   0x0A    |
    // |   \t             |   水平制表符(Tab)        |   0x09    |
    // |   \\             |   反斜杠本身             |   0x5C    |
    // |   \'             |   单引号                 |   0x27    |
    // |   \"             |   双引号                 |   0x22    |
    // |   \r             |   回车符                 |   0x0D    |
    // |   \b             |   退格符                 |   0x08    |
    // |   \f             |   换页符                 |   0x0C    |
    // |   \v             |   垂直制表符             |   0x0B    |
    // |   \0             |   空字符(null)           |   0x00    |
    // |   \a             |   警报/响铃(Bell)        |   0x07    |
    // |   \?             |   问号                   |   0x3F    |
    // |   \ooo           |   八进制ASCII码(1-3位)   |   可变    |
    // |   \xhh           |   十六进制ASCII码(1-2位) |   可变    |
    // |   \uXXXX         |   Unicode字符(4位十六进制)| 可变      |
    // |   \UXXXXXXXX     |   Unicode字符(8位十六进制)| 可变      |
    // +------------------+--------------------------+-----------+

    // 1. 换行符 \n：将光标移动到下一行的开头
    std::cout << "1. 换行符 \\n:" << std::endl;
    std::cout << "Hello, World!\n"; // 输出Hello, World!并换行
    std::cout << "第二行\n";

    // 2. 水平制表符 \t：通常用于对齐文本
    std::cout << "\n2. 水平制表符 \\t:" << std::endl;
    std::cout << "Name\tAge\tCity\n";
    std::cout << "Alice\t25\tNew York\n";
    std::cout << "Bob\t30\tLondon\n";

    // 3. 反斜杠 \\：用于表示一个反斜杠字符
    std::cout << "\n3. 反斜杠 \\\\:" << std::endl;
    std::cout << "文件路径: C:\\Users\\Name\\Desktop\n";

    // 4. 单引号 \'：用于表示单引号字符
    std::cout << "\n4. 单引号 \\':" << std::endl;
    std::cout << "He said: \'Hello!\'\n";

    // 5. 双引号 \"：用于表示双引号字符
    std::cout << "\n5. 双引号 \\\" :" << std::endl;
    std::cout << "She said: \"Hi!\"\n";

    // 6. 回车符 \r：将光标移动到当前行的开头
    std::cout << "\n6. 回车符 \\r:" << std::endl;
    std::cout << "Hello\rWorld"; // World会覆盖Hello的前5个字符
    std::cout << "\n";

    // 7. 退格符 \b：将光标向左移动一个位置
    std::cout << "\n7. 退格符 \\b:" << std::endl;
    std::cout << "Hello\bWorld"; // 输出HellWorld（删除了一个o）
    std::cout << "\n";

    // 8. 换页符 \f：将光标移动到下一页的开头
    std::cout << "\n8. 换页符 \\f:" << std::endl;
    std::cout << "第一页内容\f第二页内容\n";

    // 9. 垂直制表符 \v：通常用于垂直对齐文本
    std::cout << "\n9. 垂直制表符 \\v:" << std::endl;
    std::cout << "Line1\vLine2\vLine3\n";

    // 10. 空字符 \0：表示字符串的结束，ASCII码为0
    std::cout << "\n10. 空字符 \\0:" << std::endl;
    std::cout << "Hello\0World"; // 只输出Hello，因为\0终止了字符串
    std::cout << "\n";

    // 11. 警报/响铃 \a：发出系统提示音
    std::cout << "\n11. 警报/响铃 \\a:" << std::endl;
    std::cout << "注意！系统将发出提示音\a\n"; // 执行时会发出"嘟"的一声

    // 12. 问号 \?：用于表示问号字符
    std::cout << "\n12. 问号 \?:" << std::endl;
    std::cout << "Are you sure\?\n";

    // 13. 八进制转义 \ooo：使用1-3位八进制数字表示ASCII字符
    std::cout << "\n13. 八进制转义 \\ooo:" << std::endl;
    std::cout << "八进制\\101表示字符A: " << "\101" << std::endl; // \101是八进制的65，对应'A'
    std::cout << "八进制\\061表示字符1: " << "\061" << std::endl; // \061是八进制的49，对应'1'
    std::cout << "八进制\\012表示换行符: " << "Hello\012World" << std::endl; // \012是八进制的10，对应换行符

    // 14. 十六进制转义 \xhh：使用1-2位十六进制数字表示ASCII字符
    std::cout << "\n14. 十六进制转义 \\xhh:" << std::endl;
    std::cout << "十六进制\\x41表示字符A: " << "\x41" << std::endl; // \x41是十六进制的65，对应'A'
    std::cout << "十六进制\\x31表示字符1: " << "\x31" << std::endl; // \x31是十六进制的49，对应'1'
    std::cout << "十六进制\\x0A表示换行符: " << "Hello\x0AWorld" << std::endl; // \x0A是十六进制的10，对应换行符

    // 15. Unicode转义 \uXXXX：使用4位十六进制数字表示Unicode字符
    std::cout << "\n15. Unicode转义 \\uXXXX:" << std::endl;
    std::cout << "Unicode\\u4E2D表示中文'中': " << "\u4E2D" << std::endl; // \u4E2D是中文"中"的Unicode编码
    std::cout << "Unicode\\u65E5表示日文'日': " << "\u65E5" << std::endl; // \u65E5是日文"日"的Unicode编码

    std::cout << "\n请输入回车以继续..." << std::endl;
    std::cin.get();
    return 0;
}