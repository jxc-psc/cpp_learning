#include <iostream>
#include <cstdint>
using namespace std;

int main() {

    // 1. 字符型char, 大小通常为8位, 即一个字节, 取值范围为-2^7~2^7-1, 即-128~127
    // signed char和unsigned char, 前者是有符号型，后者为无符号型.
    // 由于前者在补码中有一位表示正负号, 因此, signed char的取值范围是-128到127, 而unsigned char的取值范围是从0到255.
    // 但通常默认char为有符号整数, 需要使用无符号时，必须定义unsigned char, 但为了严谨书写建议显示书写signed char或者unsigned char.
    // 且在定义无符号时必须在数字后跟上后缀u或者U, 因为编译器默认数字为有符号, 不跟上后缀的话会触发隐式类型转换导致编译报错
    
    signed char num1 = 1; 
    signed char num2 = 32767; // 数据超限导致编译时会有警告, 赋值时先将32767转为补码，然后将其截断, 只取后面八位, 再取第一位为符号位后按照补码的形式解析为数, 这里应为-1.
    unsigned char num3 = 1u;
    unsigned char num4 = -1u; // 编译警告, 依旧按照上述num2处理, 但在对八位补码进行解析时需要按照无符号补码进行解析
    unsigned char num5 = -1; 
    unsigned char num6 = 258;
    // char型整数超限后的简单转换公式就是
    // 有符号整数: 数字对256取模后, 如果大于127, 就再减去256得到的数即为转换后的数; 否则, 取模后的数就为转换后的数.
    // 无符号整数: 直接对256取模得到的结果即为转换后的数字

    // 值得注意的是，在打印时不能直接打印，直接打印出来的是ASCII字符，而不是十进制数字，因此需要进行强制类型转换.
    cout << "char型有符号整数num1 = " << (int)num1 << endl;
    cout << "char型有符号整数num2 = " << (int)num2 << endl; 
    cout << "char型无符号整数num3 = " << (int)num3 << endl;
    cout << "char型无符号整数num4 = " << (int)num4 << endl;
    cout << "char型无符号整数num5 = " << (int)num5 << endl;
    cout << "char型无符号整数num6 = " << (int)num6 << endl;



    // 2. 短整型short, 大小通常为2个字节, 取值范围为-2^15~2^15-1, 即-32768~32767
    // 同char一样分为unsigned short和signed short
    // 且在定义无符号时必须在数字后跟上后缀u或者U, 因为编译器默认数字为有符号, 不跟上后缀的话会触发隐式类型转换导致编译报错
    
    signed short num7 = 1;
    signed short num8 = 32768; // 数据超限导致编译时会有警告, 赋值时先将32768转为补码，然后将其截断, 只取后面十六位, 再取第一位为符号位后按照补码的形式解析为数, 这里应为-32768.
    unsigned short num9 = 1u;
    unsigned short num10 = -1u; // 编译警告, 依旧按照上述num8处理, 但在对十六位补码进行解析时需要按照无符号补码进行解析
    unsigned short num11 = -1;
    unsigned short num12 = 65538;
    // short型整数超限后的简单转换公式就是
    // 有符号整数: 数字对65536取模后, 如果大于32767, 就再减去65536得到的数即为转换后的数; 否则, 取模后的数就为转换后的数.
    // 无符号整数: 直接对65536取模得到的结果即为转换后的数字

    cout << "short型有符号整数num7 = " << num7 << endl;
    cout << "short型有符号整数num8 = " << num8 << endl;
    cout << "short型无符号整数num9 = " << num9 << endl;
    cout << "short型无符号整数num10 = " << num10 << endl;
    cout << "short型无符号整数num11 = " << num11 << endl;
    cout << "short型无符号整数num12 = " << num12 << endl;


    // 3. 整型int, 大小通常为4个字节, 取值范围为-2^31~2^31-1, 即-2147483648~2147483647
    // 同char一样分为unsigned int和signed int
    // 且在定义无符号时必须在数字后跟上后缀u或者U, 因为编译器默认数字为有符号, 不跟上后缀的话会触发隐式类型转换导致编译报错
    
    signed int num13 = 1;
    signed int num14 = 2147483648; // 数据超限导致编译时会有警告, 赋值时先将2147483648转为补码，然后将其截断, 只取后面三十二位, 再取第一位为符号位后按照补码的形式解析为数, 这里应为-2147483648.
    unsigned int num15 = 1u;
    unsigned int num16 = -1u; // 编译警告, 依旧按照上述num14处理, 但在对三十二位补码进行解析时需要按照无符号补码进行解析
    unsigned int num17 = -1;
    unsigned int num18 = 4294967298u;
    // int型整数超限后的简单转换公式就是
    // 有符号整数: 数字对4294967296取模后, 如果大于2147483647, 就再减去4294967296得到的数即为转换后的数; 否则, 取模后的数就为转换后的数.
    // 无符号整数: 直接对4294967296取模得到的结果即为转换后的数字

    cout << "int型有符号整数num13 = " << num13 << endl;
    cout << "int型有符号整数num14 = " << num14 << endl;
    cout << "int型无符号整数num15 = " << num15 << endl;
    cout << "int型无符号整数num16 = " << num16 << endl;
    cout << "int型无符号整数num17 = " << num17 << endl;
    cout << "int型无符号整数num18 = " << num18 << endl;


    // 4. 长整型long, 大小在不同平台有差异, Windows上通常为4个字节, Linux 64位上通常为8个字节
    // 取值范围: 4字节时为-2^31~2^31-1, 即-2147483648~2147483647; 8字节时为-2^63~2^63-1, 即-9223372036854775808~9223372036854775807
    // 同char一样分为unsigned long和signed long
    // 且在定义无符号时必须在数字后跟上后缀u或者U, 在定义long型时必须在数字后跟上后缀l或者L, 建议使用L避免与数字1混淆
    
    signed long num19 = 1L;
    signed long num20 = 2147483648L; // 数据超限导致编译时会有警告(4字节平台), 赋值时先将2147483648转为补码，然后将其截断, 只取后面三十二位, 再取第一位为符号位后按照补码的形式解析为数, 这里应为-2147483648.
    unsigned long num21 = 1UL;
    unsigned long num22 = -1UL; // 编译警告, 依旧按照上述num20处理, 但在对补码进行解析时需要按照无符号补码进行解析
    unsigned long num23 = -1L;
    unsigned long num24 = 4294967298UL;
    // long型整数超限后的简单转换公式就是
    // 有符号整数: 数字对2^(8*sizeof(long))取模后, 如果大于2^(8*sizeof(long)-1)-1, 就再减去2^(8*sizeof(long))得到的数即为转换后的数; 否则, 取模后的数就为转换后的数.
    // 无符号整数: 直接对2^(8*sizeof(long))取模得到的结果即为转换后的数字

    cout << "long型有符号整数num19 = " << num19 << endl;
    cout << "long型有符号整数num20 = " << num20 << endl;
    cout << "long型无符号整数num21 = " << num21 << endl;
    cout << "long型无符号整数num22 = " << num22 << endl;
    cout << "long型无符号整数num23 = " << num23 << endl;
    cout << "long型无符号整数num24 = " << num24 << endl;


    // 5. 长长整型long long, 大小通常为8个字节, 取值范围为-2^63~2^63-1, 即-9223372036854775808~9223372036854775807
    // 同char一样分为unsigned long long和signed long long
    // 且在定义无符号时必须在数字后跟上后缀u或者U, 在定义long long型时必须在数字后跟上后缀ll或者LL, 建议使用LL避免与数字1混淆
    
    signed long long num25 = 1LL;
    signed long long num26 = 9223372036854775808LL; // 数据超限导致编译时会有警告, 赋值时先将9223372036854775808转为补码，然后将其截断, 只取后面六十四位, 再取第一位为符号位后按照补码的形式解析为数, 这里应为-9223372036854775808.
    unsigned long long num27 = 1ULL;
    unsigned long long num28 = -1ULL; // 编译警告, 依旧按照上述num26处理, 但在对六十四位补码进行解析时需要按照无符号补码进行解析
    unsigned long long num29 = -1LL;
    unsigned long long num30 = 18446744073709551618ULL;
    // long long型整数超限后的简单转换公式就是
    // 有符号整数: 数字对18446744073709551616取模后, 如果大于9223372036854775807, 就再减去18446744073709551616得到的数即为转换后的数; 否则, 取模后的数就为转换后的数.
    // 无符号整数: 直接对18446744073709551616取模得到的结果即为转换后的数字

    cout << "long long型有符号整数num25 = " << num25 << endl;
    cout << "long long型有符号整数num26 = " << num26 << endl;
    cout << "long long型无符号整数num27 = " << num27 << endl;
    cout << "long long型无符号整数num28 = " << num28 << endl;
    cout << "long long型无符号整数num29 = " << num29 << endl;
    cout << "long long型无符号整数num30 = " << num30 << endl;


    // 6. 固定宽度整数类型int_t和uint_t, 需要包含头文件<cstdint>
    // 这些类型定义在<cstdint>头文件中, 提供了跨平台一致的固定宽度整数类型.
    // 相比于之前的char/short/int/long/long long, 这些类型的大小是明确的, 不会因平台而异.
    // 常用的固定宽度整数类型有:
    // int8_t / uint8_t: 1字节, 取值范围分别为-128~127和0~255
    // int16_t / uint16_t: 2字节, 取值范围分别为-32768~32767和0~65535
    // int32_t / uint32_t: 4字节, 取值范围分别为-2147483648~2147483647和0~4294967295
    // int64_t / uint64_t: 8字节, 取值范围分别为-9223372036854775808~9223372036854775807和0~18446744073709551615
    // 同之前的整数类型一样, 无符号版本可以存储更大的非负整数.
    
    // int32_t和uint32_t示例
    int32_t num31 = 1;
    int32_t num32 = 2147483648; // 数据超限导致编译时会有警告, 赋值时先将2147483648转为补码，然后将其截断, 只取后面三十二位, 再取第一位为符号位后按照补码的形式解析为数, 这里应为-2147483648.
    uint32_t num33 = 1u;
    uint32_t num34 = -1u; // 编译警告, 依旧按照上述num32处理, 但在对三十二位补码进行解析时需要按照无符号补码进行解析
    uint32_t num35 = -1;
    uint32_t num36 = 4294967298u;
    // int32_t/uint32_t型整数超限后的简单转换公式就是
    // 有符号整数: 数字对4294967296取模后, 如果大于2147483647, 就再减去4294967296得到的数即为转换后的数; 否则, 取模后的数就为转换后的数.
    // 无符号整数: 直接对4294967296取模得到的结果即为转换后的数字

    cout << "int32_t型有符号整数num31 = " << num31 << endl;
    cout << "int32_t型有符号整数num32 = " << num32 << endl;
    cout << "uint32_t型无符号整数num33 = " << num33 << endl;
    cout << "uint32_t型无符号整数num34 = " << num34 << endl;
    cout << "uint32_t型无符号整数num35 = " << num35 << endl;
    cout << "uint32_t型无符号整数num36 = " << num36 << endl;


    // int64_t和uint64_t示例
    int64_t num37 = 1LL;
    int64_t num38 = 9223372036854775808LL; // 数据超限导致编译时会有警告, 赋值时先将9223372036854775808转为补码，然后将其截断, 只取后面六十四位, 再取第一位为符号位后按照补码的形式解析为数, 这里应为-9223372036854775808.
    uint64_t num39 = 1ULL;
    uint64_t num40 = -1ULL; // 编译警告, 依旧按照上述num38处理, 但在对六十四位补码进行解析时需要按照无符号补码进行解析
    uint64_t num41 = -1LL;
    uint64_t num42 = 18446744073709551618ULL;
    // int64_t/uint64_t型整数超限后的简单转换公式就是
    // 有符号整数: 数字对18446744073709551616取模后, 如果大于9223372036854775807, 就再减去18446744073709551616得到的数即为转换后的数; 否则, 取模后的数就为转换后的数.
    // 无符号整数: 直接对18446744073709551616取模得到的结果即为转换后的数字

    cout << "int64_t型有符号整数num37 = " << num37 << endl;
    cout << "int64_t型有符号整数num38 = " << num38 << endl;
    cout << "uint64_t型无符号整数num39 = " << num39 << endl;
    cout << "uint64_t型无符号整数num40 = " << num40 << endl;
    cout << "uint64_t型无符号整数num41 = " << num41 << endl;
    cout << "uint64_t型无符号整数num42 = " << num42 << endl;


    // 在以后的代码书写中尽量避免使用char/short/int/long/


    system("pause");
    return 0;
}