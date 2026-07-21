#include <iostream>
#include <cstdint>
#include <bitset>

int main() {
    // 1. 按位与运算符 (&)
    // 按位与运算符对两个整数的二进制位进行按位与操作。
    // 只有当两个对应位都为1时，结果位才为1。
    
    std::cout << "1. 按位与运算符 (&):" << std::endl;
    
    int32_t a = 0b1010;  // 10
    int32_t b = 0b1100;  // 12
    
    std::cout << "a = 0b" << std::bitset<4>(a) << " (" << a << ")" << std::endl;
    std::cout << "b = 0b" << std::bitset<4>(b) << " (" << b << ")" << std::endl;
    std::cout << "a & b = 0b" << std::bitset<4>(a & b) << " (" << (a & b) << ")" << std::endl;
    
    // 按位与的常用用途：
    // - 清零特定位：与0进行按位与
    // - 提取特定位：与掩码进行按位与
    std::cout << "\n按位与的常用用途:" << std::endl;
    
    // 清零特定位
    int32_t num1 = 0b1010;
    num1 &= 0b0000;  // 清零所有位
    std::cout << "0b1010 & 0b0000 = 0b" << std::bitset<4>(num1) << std::endl;
    
    // 提取特定位（提取低2位）
    int32_t num2 = 0b1101;
    int32_t mask = 0b0011;  // 掩码
    int32_t result = num2 & mask;
    std::cout << "提取0b1101的低2位: 0b" << std::bitset<4>(result) << std::endl;
    
    // 判断奇偶性（检查最低位是否为1）
    std::cout << "\n判断奇偶性:" << std::endl;
    int32_t num3 = 7;
    if (num3 & 1) {
        std::cout << num3 << " is odd" << std::endl;
    } else {
        std::cout << num3 << " is even" << std::endl;
    }


    // 2. 按位或运算符 (|)
    // 按位或运算符对两个整数的二进制位进行按位或操作。
    // 只要有一个对应位为1，结果位就为1。
    
    std::cout << "\n2. 按位或运算符 (|):" << std::endl;
    
    std::cout << "a = 0b" << std::bitset<4>(a) << " (" << a << ")" << std::endl;
    std::cout << "b = 0b" << std::bitset<4>(b) << " (" << b << ")" << std::endl;
    std::cout << "a | b = 0b" << std::bitset<4>(a | b) << " (" << (a | b) << ")" << std::endl;
    
    // 按位或的常用用途：
    // - 设置特定位为1：与1进行按位或
    std::cout << "\n按位或的常用用途:" << std::endl;
    
    // 设置特定位为1（设置第2位）
    int32_t num4 = 0b1001;
    int32_t set_mask = 0b0100;
    num4 |= set_mask;
    std::cout << "0b1001 | 0b0100 = 0b" << std::bitset<4>(num4) << std::endl;
    
    // 设置多个位为1
    int32_t num5 = 0b1000;
    num5 |= 0b0011;
    std::cout << "0b1000 | 0b0011 = 0b" << std::bitset<4>(num5) << std::endl;


    // 3. 按位异或运算符 (^)
    // 按位异或运算符对两个整数的二进制位进行按位异或操作。
    // 当两个对应位不同时，结果位为1；相同时为0。
    
    std::cout << "\n3. 按位异或运算符 (^):" << std::endl;
    
    std::cout << "a = 0b" << std::bitset<4>(a) << " (" << a << ")" << std::endl;
    std::cout << "b = 0b" << std::bitset<4>(b) << " (" << b << ")" << std::endl;
    std::cout << "a ^ b = 0b" << std::bitset<4>(a ^ b) << " (" << (a ^ b) << ")" << std::endl;
    
    // 按位异或的常用用途：
    // - 翻转特定位：与1进行异或
    // - 交换两个变量（不需要临时变量）
    // - 判断两个数是否相等
    std::cout << "\n按位异或的常用用途:" << std::endl;
    
    // 翻转特定位（翻转低2位）
    int32_t num6 = 0b1010;
    int32_t flip_mask = 0b0011;
    num6 ^= flip_mask;
    std::cout << "翻转0b1010的低2位: 0b" << std::bitset<4>(num6) << std::endl;
    
    // 交换两个变量（不需要临时变量）
    std::cout << "\n交换两个变量（不需要临时变量）:" << std::endl;
    int32_t x = 10;
    int32_t y = 20;
    std::cout << "Before swap: x=" << x << ", y=" << y << std::endl;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    std::cout << "After swap: x=" << x << ", y=" << y << std::endl;
    
    // 判断两个数是否相等（相等时异或结果为0）
    std::cout << "\n判断两个数是否相等:" << std::endl;
    int32_t p = 5;
    int32_t q = 5;
    std::cout << "p ^ q = " << (p ^ q) << ", p == q: " << (p == q) << std::endl;
    
    // 自身异或清零
    std::cout << "\n自身异或清零:" << std::endl;
    int32_t num7 = 0b1010;
    num7 ^= num7;
    std::cout << "0b1010 ^ 0b1010 = 0b" << std::bitset<4>(num7) << std::endl;


    // 4. 按位非运算符 (~)
    // 按位非运算符对整数的每个二进制位取反（0变1，1变0）。
    // 注意：在有符号整数中，按位非会改变符号位。
    
    std::cout << "\n4. 按位非运算符 (~):" << std::endl;
    
    int32_t num8 = 0b1010;
    std::cout << "num8 = 0b" << std::bitset<4>(num8) << " (" << num8 << ")" << std::endl;
    std::cout << "~num8 = " << (~num8) << std::endl;  // -11（按位取反）
    
    // 在无符号整数中
    uint32_t num9 = 0b1010;
    std::cout << "\n无符号整数:" << std::endl;
    std::cout << "num9 = 0b" << std::bitset<4>(num9) << " (" << num9 << ")" << std::endl;
    std::cout << "~num9 = " << (~num9) << std::endl;  // 很大的数
    
    // 按位非的恒等式：~x = -x - 1
    std::cout << "\n按位非的恒等式 (~x = -x - 1):" << std::endl;
    int32_t num10 = 5;
    std::cout << "~" << num10 << " = " << (~num10) << ", -" << num10 << " - 1 = " << (-num10 - 1) << std::endl;


    // 5. 左移运算符 (<<)
    // 左移运算符将整数的二进制位向左移动指定的位数，右边补0。
    // 左移n位相当于乘以2^n（在不溢出的情况下）。
    
    std::cout << "\n5. 左移运算符 (<<):" << std::endl;
    
    int32_t num11 = 0b0010;  // 2
    std::cout << "num11 = 0b" << std::bitset<4>(num11) << " (" << num11 << ")" << std::endl;
    std::cout << "num11 << 1 = 0b" << std::bitset<4>(num11 << 1) << " (" << (num11 << 1) << ")" << std::endl;  // 4
    std::cout << "num11 << 2 = 0b" << std::bitset<4>(num11 << 2) << " (" << (num11 << 2) << ")" << std::endl;  // 8
    std::cout << "num11 << 3 = 0b" << std::bitset<4>(num11 << 3) << " (" << (num11 << 3) << ")" << std::endl;  // 16
    
    // 左移的常用用途：
    // - 快速乘法（乘以2的幂）
    // - 创建掩码
    std::cout << "\n左移的常用用途:" << std::endl;
    std::cout << "快速乘法（乘以2的幂）:" << std::endl;
    std::cout << "5 << 1 = " << (5 << 1) << " (5 * 2)" << std::endl;
    std::cout << "5 << 2 = " << (5 << 2) << " (5 * 4)" << std::endl;
    std::cout << "5 << 3 = " << (5 << 3) << " (5 * 8)" << std::endl;
    
    // 创建掩码（第n位为1）
    std::cout << "\n创建掩码:" << std::endl;
    int32_t bit3_mask = 1 << 3;
    std::cout << "1 << 3 = " << bit3_mask << " (0b" << std::bitset<4>(bit3_mask) << ")" << std::endl;


    // 6. 右移运算符 (>>)
    // 右移运算符将整数的二进制位向右移动指定的位数。
    // 对于无符号整数，左边补0（逻辑右移）。
    // 对于有符号整数，左边补符号位（算术右移）。
    
    std::cout << "\n6. 右移运算符 (>>):" << std::endl;
    
    // 无符号整数右移（逻辑右移）
    uint32_t num12 = 0b1000;  // 8
    std::cout << "无符号整数:" << std::endl;
    std::cout << "num12 = 0b" << std::bitset<4>(num12) << " (" << num12 << ")" << std::endl;
    std::cout << "num12 >> 1 = 0b" << std::bitset<4>(num12 >> 1) << " (" << (num12 >> 1) << ")" << std::endl;  // 4
    std::cout << "num12 >> 2 = 0b" << std::bitset<4>(num12 >> 2) << " (" << (num12 >> 2) << ")" << std::endl;  // 2
    std::cout << "num12 >> 3 = 0b" << std::bitset<4>(num12 >> 3) << " (" << (num12 >> 3) << ")" << std::endl;  // 1
    
    // 有符号整数右移（算术右移，补符号位）
    std::cout << "\n有符号整数（算术右移）:" << std::endl;
    int32_t num13 = -8;  // 二进制补码表示
    std::cout << "num13 = " << num13 << std::endl;
    std::cout << "num13 >> 1 = " << (num13 >> 1) << std::endl;  // -4（符号位保留）
    std::cout << "num13 >> 2 = " << (num13 >> 2) << std::endl;  // -2
    
    // 右移的常用用途：
    // - 快速除法（除以2的幂）
    std::cout << "\n右移的常用用途:" << std::endl;
    std::cout << "快速除法（除以2的幂）:" << std::endl;
    std::cout << "8 >> 1 = " << (8 >> 1) << " (8 / 2)" << std::endl;
    std::cout << "8 >> 2 = " << (8 >> 2) << " (8 / 4)" << std::endl;
    std::cout << "8 >> 3 = " << (8 >> 3) << " (8 / 8)" << std::endl;


    // 7. 位运算复合赋值运算符
    // &=, |=, ^=, <<=, >>=
    
    std::cout << "\n7. 位运算复合赋值运算符:" << std::endl;
    
    // 7.1 按位与赋值 (&=)
    std::cout << "\n7.1 按位与赋值 (&=):" << std::endl;
    int32_t num14 = 0b1010;
    num14 &= 0b1100;
    std::cout << "0b1010 &= 0b1100 = 0b" << std::bitset<4>(num14) << std::endl;
    
    // 7.2 按位或赋值 (|=)
    std::cout << "\n7.2 按位或赋值 (|=):" << std::endl;
    int32_t num15 = 0b1010;
    num15 |= 0b0100;
    std::cout << "0b1010 |= 0b0100 = 0b" << std::bitset<4>(num15) << std::endl;
    
    // 7.3 按位异或赋值 (^=)
    std::cout << "\n7.3 按位异或赋值 (^=):" << std::endl;
    int32_t num16 = 0b1010;
    num16 ^= 0b1100;
    std::cout << "0b1010 ^= 0b1100 = 0b" << std::bitset<4>(num16) << std::endl;
    
    // 7.4 左移赋值 (<<=)
    std::cout << "\n7.4 左移赋值 (<<=):" << std::endl;
    int32_t num17 = 0b0010;
    num17 <<= 2;
    std::cout << "0b0010 <<= 2 = 0b" << std::bitset<4>(num17) << std::endl;
    
    // 7.5 右移赋值 (>>=)
    std::cout << "\n7.5 右移赋值 (>>=):" << std::endl;
    int32_t num18 = 0b1000;
    num18 >>= 2;
    std::cout << "0b1000 >>= 2 = 0b" << std::bitset<4>(num18) << std::endl;


    // 8. 位运算符的优先级和结合性
    // 优先级（从高到低）：~ > <<, >> > & > ^ > |
    // 结合性：<< 和 >> 是从左到右
    
    std::cout << "\n8. 位运算符的优先级和结合性:" << std::endl;
    
    int32_t x1 = 0b1010;
    int32_t y1 = 0b1100;
    int32_t z1 = 0b0011;
    
    // 优先级示例
    std::cout << "x1 & y1 | z1 = " << (x1 & y1 | z1) << std::endl;   // 先&后|
    std::cout << "(x1 & y1) | z1 = " << ((x1 & y1) | z1) << std::endl;
    
    std::cout << "x1 << 1 & y1 = " << (x1 << 1 & y1) << std::endl;   // 先<<后&
    
    // 结合性示例
    std::cout << "\n结合性（从左到右）:" << std::endl;
    std::cout << "x1 << 1 << 1 = " << (x1 << 1 << 1) << std::endl;   // 等价于(x1 << 1) << 1
    std::cout << "x1 >> 1 >> 1 = " << (x1 >> 1 >> 1) << std::endl;   // 等价于(x1 >> 1) >> 1


    // 9. 位运算的实际应用
    
    std::cout << "\n9. 位运算的实际应用:" << std::endl;
    
    // 示例1：交换两个变量（不需要临时变量）
    std::cout << "\n示例1：交换两个变量:" << std::endl;
    int32_t a1 = 5, b1 = 7;
    std::cout << "Before: a=" << a1 << ", b=" << b1 << std::endl;
    a1 ^= b1;
    b1 ^= a1;
    a1 ^= b1;
    std::cout << "After: a=" << a1 << ", b=" << b1 << std::endl;
    
    // 示例2：判断一个数是否是2的幂
    std::cout << "\n示例2：判断一个数是否是2的幂:" << std::endl;
    auto is_power_of_two = [](int32_t n) {
        return (n > 0) && ((n & (n - 1)) == 0);
    };
    std::cout << "is_power_of_two(8): " << is_power_of_two(8) << std::endl;    // true
    std::cout << "is_power_of_two(10): " << is_power_of_two(10) << std::endl;  // false
    
    // 示例3：统计二进制中1的个数（汉明重量）
    std::cout << "\n示例3：统计二进制中1的个数:" << std::endl;
    auto count_ones = [](int32_t n) {
        int32_t count = 0;
        while (n) {
            n &= n - 1;  // 清除最低位的1
            count++;
        }
        return count;
    };
    std::cout << "count_ones(0b1010): " << count_ones(0b1010) << std::endl;   // 2
    std::cout << "count_ones(0b1111): " << count_ones(0b1111) << std::endl;   // 4
    
    // 示例4：获取一个数的绝对值（不使用条件判断）
    std::cout << "\n示例4：获取绝对值（不使用条件判断）:" << std::endl;
    auto abs_value = [](int32_t n) {
        int32_t mask = n >> 31;  // 获取符号位
        return (n ^ mask) - mask;
    };
    std::cout << "abs_value(-5): " << abs_value(-5) << std::endl;   // 5
    std::cout << "abs_value(5): " << abs_value(5) << std::endl;     // 5


    // 10. 位运算符与逻辑运算符的区别
    
    std::cout << "\n10. 位运算符与逻辑运算符的区别:" << std::endl;
    
    int32_t p1 = 5;  // 0b101
    int32_t q1 = 3;  // 0b011
    
    std::cout << "\n逻辑运算符（返回bool）:" << std::endl;
    std::cout << "p1 && q1: " << (p1 && q1) << std::endl;   // true（非零为true）
    std::cout << "p1 || q1: " << (p1 || q1) << std::endl;   // true
    std::cout << "!p1: " << (!p1) << std::endl;             // false
    
    std::cout << "\n位运算符（返回整数）:" << std::endl;
    std::cout << "p1 & q1: " << (p1 & q1) << std::endl;     // 1（0b101 & 0b011 = 0b001）
    std::cout << "p1 | q1: " << (p1 | q1) << std::endl;     // 7（0b101 | 0b011 = 0b111）
    std::cout << "~p1: " << (~p1) << std::endl;             // -6
    
    // 短路求值的区别
    std::cout << "\n短路求值的区别:" << std::endl;
    int32_t num19 = 0;
    bool flag1 = (0 && (++num19 > 0));   // 短路求值，++num19不执行
    std::cout << "0 && (++num19 > 0): num19 = " << num19 << std::endl;   // 0
    
    int32_t num20 = 0;
    int32_t result2 = (0 & (++num20 > 0));  // 位运算不短路，++num20执行
    std::cout << "0 & (++num20 > 0): num20 = " << num20 << std::endl;   // 1


    // 11. 位运算符汇总表
    // +------------------+------------------+------------------+------------------+
    // |   运算符         |   名称           |   规则           |   常用用途       |
    // +------------------+------------------+------------------+------------------+
    // |   &              |   按位与         |   都为1才1       |   清零、提取位   |
    // |   |              |   按位或         |   有1就1         |   设置位         |
    // |   ^              |   按位异或       |   不同为1        |   翻转位、交换   |
    // |   ~              |   按位非         |   取反           |   求反码         |
    // |   <<             |   左移           |   左移补0        |   快速乘法       |
    // |   >>             |   右移           |   右移补符号位   |   快速除法       |
    // |   &=             |   按位与等于     |   a &= b         |                  |
    // |   |=             |   按位或等于     |   a |= b         |                  |
    // |   ^=             |   按位异或等于   |   a ^= b         |                  |
    // |   <<=            |   左移等于       |   a <<= b        |                  |
    // |   >>=            |   右移等于       |   a >>= b        |                  |
    // +------------------+------------------+------------------+------------------+


    // 12. 常见问题和注意事项
    
    std::cout << "\n12. 常见问题和注意事项:" << std::endl;
    
    // 12.1 不要混淆位运算符和逻辑运算符
    std::cout << "\n12.1 不要混淆位运算符(&, |)和逻辑运算符(&&, ||):" << std::endl;
    std::cout << "5 && 3 = " << (5 && 3) << std::endl;   // true
    std::cout << "5 & 3 = " << (5 & 3) << std::endl;     // 1
    
    // 12.2 有符号整数的右移是算术右移（补符号位）
    std::cout << "\n12.2 有符号整数的右移是算术右移:" << std::endl;
    std::cout << "-8 >> 1 = " << (-8 >> 1) << std::endl;   // -4
    
    // 12.3 避免对负数进行左移（未定义行为）
    std::cout << "\n12.3 避免对负数进行左移（未定义行为）:" << std::endl;
    // std::cout << (-8 << 1) << std::endl;  // 不推荐
    
    // 12.4 位移量不要超过类型大小
    std::cout << "\n12.4 位移量不要超过类型大小:" << std::endl;
    int32_t num21 = 5;
    // num21 << 32;  // 未定义行为（32位int位移32位）
    
    // 12.5 使用std::bitset查看二进制表示
    std::cout << "\n12.5 使用std::bitset查看二进制表示:" << std::endl;
    std::cout << "std::bitset<8>(5) = " << std::bitset<8>(5) << std::endl;


    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}