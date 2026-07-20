#include <iostream>
#include <cstdint>

int main() {
    // 在Integer_type.cpp中已经介绍了char型字符在整型变量中的应用，这里主要讲解char型字符在字符型变量中的应用

    // 在使用char型字符时，通常使用单引号括起来的单个字符来表示一个字符常量，例如'a'、'1'、'@'等。
    // char型字符在内存中占用1个字节（8位），可以表示ASCII码表中的字符。即字符型变量并不是把字符本身存储到内存里，二十存储对应的ASCII码值
    // 例如，字符'a'的ASCII码值为97，字符'1'的ASCII码值为49，字符'@'的ASCII码值为64。可以通过将char型字符赋值给整型变量来获取其对应的ASCII码值。
    signed char ch1 = 'a';
    signed char ch2 = '1';
    int32_t ascii1 = ch1; // 将字符'a'赋值给整型变量，获取其ASCII码值
    int32_t ascii2 = ch2; // 将字符'1'赋值给整型变量，获取其ASCII码值

    std::cout << "字符ch1 = " << ch1 << std::endl;
    std::cout << "字符ch2 = " << ch2 << std::endl;
    std::cout << "字符" << ch1 << "的ASCII值为" << ascii1 << std::endl;
    std::cout << "字符" << ch2 << "的ASCII值为" << ascii2 << std::endl;

    // 还可以通过将整型变量赋值给char型字符来获取对应的字符。例如，将整数97赋值给char型变量ch3，就可以得到字符'a'。
    int32_t num = 97;
    signed char ch3 = num; // 将整数97赋值给char型变量，获取对应的字符
    std::cout << "字符ch3 = " << ch3 << std::endl;
    std::cout << "字符" << ch3 << "的ASCII值为" << static_cast<int>(ch3) << std::endl;

    std::cout << "请输入回车以继续..." << std::endl;
    std::cin.get();
    return 0;
}