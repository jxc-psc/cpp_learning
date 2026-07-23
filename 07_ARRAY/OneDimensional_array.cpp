#include <iostream>
#include <string>
#include <cstdint>

int main() {
    // 1. 一维数组的定义
    // 数组是一种存储多个相同类型元素的数据结构。
    // 语法：type array_name[size];
    // size必须是编译期常量表达式，不能是变量。
    
    std::cout << "1. 一维数组的定义:" << std::endl;
    
    // 1.1 基本定义
    std::cout << "\n1.1 基本定义:" << std::endl;
    int32_t arr1[5];  // 定义一个包含5个int元素的数组
    std::cout << "arr1 size: " << sizeof(arr1) << " bytes" << std::endl;
    
    // 1.2 不同类型的数组
    std::cout << "\n1.2 不同类型的数组:" << std::endl;
    int8_t arr2[10];    // 字符数组（10个字节）
    double arr3[3];     // 浮点数组（24个字节，每个double占8字节）
    bool arr4[4];       // 布尔数组（4个字节）
    std::cout << "arr2 size: " << sizeof(arr2) << " bytes" << std::endl;
    std::cout << "arr3 size: " << sizeof(arr3) << " bytes" << std::endl;
    std::cout << "arr4 size: " << sizeof(arr4) << " bytes" << std::endl;
    
    // 1.3 使用const表达式作为数组大小
    std::cout << "\n1.3 使用const表达式作为数组大小:" << std::endl;
    const int32_t SIZE = 5;
    int32_t arr5[SIZE];
    std::cout << "arr5 size: " << sizeof(arr5) << " bytes" << std::endl;
    
    // 1.4 数组大小必须是常量（C++03）
    std::cout << "\n1.4 数组大小必须是常量（C++03）:" << std::endl;
    // int32_t n = 5;
    // int32_t arr6[n];  // 错误！n不是常量表达式
    std::cout << "In C++03, array size must be a compile-time constant" << std::endl;
    
    // C++11及以后支持变长数组（VLA），但不推荐使用，建议使用std::vector
    
    
    // 2. 一维数组的初始化
    // 数组可以在定义时进行初始化。
    
    std::cout << "\n2. 一维数组的初始化:" << std::endl;
    
    // 2.1 完全初始化
    std::cout << "\n2.1 完全初始化:" << std::endl;
    int32_t arr7[5] = {1, 2, 3, 4, 5};
    for (int32_t val : arr7) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    // 2.2 部分初始化（未初始化元素默认为0）
    std::cout << "\n2.2 部分初始化（未初始化元素默认为0）:" << std::endl;
    int32_t arr8[5] = {1, 2, 3};
    for (int32_t val : arr8) {
        std::cout << val << " ";
    }
    std::cout << std::endl;  // 输出: 1 2 3 0 0
    
    // 2.3 省略大小（编译器自动推断）
    std::cout << "\n2.3 省略大小（编译器自动推断）:" << std::endl;
    int32_t arr9[] = {10, 20, 30, 40};
    std::cout << "arr9 size: " << sizeof(arr9) / sizeof(arr9[0]) << " elements" << std::endl;
    for (int32_t val : arr9) {
        std::cout << val << " ";
    }
    std::cout << std::endl;  // 输出: 10 20 30 40
    
    // 2.4 全部初始化为0
    std::cout << "\n2.4 全部初始化为0:" << std::endl;
    int32_t arr10[5] = {0};
    for (int32_t val : arr10) {
        std::cout << val << " ";
    }
    std::cout << std::endl;  // 输出: 0 0 0 0 0
    
    // 2.5 使用花括号初始化（C++11）
    std::cout << "\n2.5 使用花括号初始化（C++11）:" << std::endl;
    int32_t arr11[5]{1, 2, 3, 4, 5};
    for (int32_t val : arr11) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    // 2.6 字符数组的初始化（C风格字符串）
    std::cout << "\n2.6 字符数组的初始化（C风格字符串）:" << std::endl;
    char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str2[] = "Hello";  // 自动添加'\0'，大小为6
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;
    std::cout << "str2 size: " << sizeof(str2) << " bytes" << std::endl;
    
    // 2.7 数组初始化对比表
    // +------------------------+------------------------+------------------------+
    // |   初始化方式           |   示例                 |   说明                 |
    // +------------------------+------------------------+------------------------+
    // |   完全初始化           |   int arr[5]={1,2,3,4,5}|   所有元素都有值       |
    // |   部分初始化           |   int arr[5]={1,2,3}   |   未初始化元素为0      |
    // |   省略大小             |   int arr[]={1,2,3}    |   编译器推断大小       |
    // |   全部为0              |   int arr[5]={0}       |   所有元素初始化为0    |
    // |   C++11花括号          |   int arr[5]{1,2,3,4,5}|   不允许窄化转换       |
    // +------------------------+------------------------+------------------------+
    
    
    // 3. 数组元素的访问
    // 使用下标运算符[]访问数组元素，下标从0开始。
    // 语法：array_name[index]
    
    std::cout << "\n3. 数组元素的访问:" << std::endl;
    
    // 3.1 基本访问（通过下标）
    std::cout << "\n3.1 基本访问（通过下标）:" << std::endl;
    int32_t arr12[5] = {10, 20, 30, 40, 50};
    std::cout << "arr12[0] = " << arr12[0] << std::endl;  // 第一个元素
    std::cout << "arr12[2] = " << arr12[2] << std::endl;  // 第三个元素
    std::cout << "arr12[4] = " << arr12[4] << std::endl;  // 最后一个元素
    
    // 3.2 修改数组元素
    std::cout << "\n3.2 修改数组元素:" << std::endl;
    arr12[1] = 200;  // 修改第二个元素
    arr12[3] = 400;  // 修改第四个元素
    for (int32_t val : arr12) {
        std::cout << val << " ";
    }
    std::cout << std::endl;  // 输出: 10 200 30 400 50
    
    // 3.3 使用循环访问所有元素
    std::cout << "\n3.3 使用循环访问所有元素:" << std::endl;
    
    // 3.3.1 使用for循环（传统方式）
    std::cout << "Using for loop: ";
    for (int32_t i = 0; i < 5; ++i) {
        std::cout << arr12[i] << " ";
    }
    std::cout << std::endl;
    
    // 3.3.2 使用range-for循环（C++11）
    std::cout << "Using range-for: ";
    for (int32_t val : arr12) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    // 3.3.3 使用指针遍历（后续学习）
    std::cout << "Using pointer: ";
    for (int32_t* ptr = arr12; ptr < arr12 + 5; ++ptr) {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;
    
    // 3.4 数组下标越界问题（危险！）
    std::cout << "\n3.4 数组下标越界问题（危险！）:" << std::endl;
    // arr12[5] = 60;  // 越界访问！编译不会报错，但运行时可能崩溃
    // arr12[-1] = 0;  // 越界访问！同样危险
    std::cout << "Array index starts at 0 and ends at size-1" << std::endl;
    std::cout << "Out-of-bounds access is undefined behavior!" << std::endl;
    
    // 3.5 数组作为指针（数组名就是首元素地址）
    std::cout << "\n3.5 数组作为指针（数组名就是首元素地址）:" << std::endl;
    std::cout << "arr12 = " << arr12 << std::endl;         // 数组名（首元素地址）
    std::cout << "&arr12[0] = " << &arr12[0] << std::endl;   // 首元素地址
    std::cout << "*arr12 = " << *arr12 << std::endl;         // 首元素值（解引用）
    std::cout << "*(arr12 + 2) = " << *(arr12 + 2) << std::endl;  // 第三个元素
    
    
    // 4. 数组大小的计算
    // 使用sizeof运算符计算数组的总大小和元素个数。
    
    std::cout << "\n4. 数组大小的计算:" << std::endl;
    
    // 4.1 计算数组总大小（字节）
    std::cout << "\n4.1 计算数组总大小（字节）:" << std::endl;
    int32_t arr13[5] = {1, 2, 3, 4, 5};
    std::cout << "sizeof(arr13) = " << sizeof(arr13) << " bytes" << std::endl;
    
    // 4.2 计算单个元素大小（字节）
    std::cout << "\n4.2 计算单个元素大小（字节）:" << std::endl;
    std::cout << "sizeof(arr13[0]) = " << sizeof(arr13[0]) << " bytes" << std::endl;
    
    // 4.3 计算元素个数（最常用）
    std::cout << "\n4.3 计算元素个数（最常用）:" << std::endl;
    int32_t count = sizeof(arr13) / sizeof(arr13[0]);
    std::cout << "Number of elements: " << count << std::endl;
    
    // 4.4 封装为宏（方便复用）
    std::cout << "\n4.4 封装为宏（方便复用）:" << std::endl;
    #define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
    int32_t arr14[10];
    std::cout << "arr14 size: " << ARRAY_SIZE(arr14) << " elements" << std::endl;
    
    // 4.5 不同类型数组的大小计算
    std::cout << "\n4.5 不同类型数组的大小计算:" << std::endl;
    double arr15[3] = {1.1, 2.2, 3.3};
    char arr16[10] = "abcdef";
    
    std::cout << "arr15 total size: " << sizeof(arr15) << " bytes" << std::endl;
    std::cout << "arr15 element count: " << sizeof(arr15) / sizeof(arr15[0]) << std::endl;
    std::cout << "arr16 total size: " << sizeof(arr16) << " bytes" << std::endl;
    std::cout << "arr16 element count: " << sizeof(arr16) / sizeof(arr16[0]) << std::endl;
    
    // 4.6 数组大小计算的陷阱
    std::cout << "\n4.6 数组大小计算的陷阱:" << std::endl;
    std::cout << "Warning: sizeof(arr) only works for array types," << std::endl;
    std::cout << "not for pointers (arrays decay to pointers in function calls)" << std::endl;
    
    // 示例：数组作为函数参数时的问题
    /*
    void printArray(int32_t arr[]) {
        // arr在这里是指针，不是数组！
        std::cout << "sizeof(arr) = " << sizeof(arr) << std::endl;  // 输出指针大小（8字节）
        std::cout << "ARRAY_SIZE(arr) = " << ARRAY_SIZE(arr) << std::endl;  // 错误！
    }
    */
    std::cout << "When passed to a function, array decays to pointer" << std::endl;
    std::cout << "sizeof(arr) returns pointer size, not array size!" << std::endl;
    
    
    // 5. 数组的实用示例
    
    // 5.1 数组的遍历和求和
    /*
        std::cout << "\n5.1 数组的遍历和求和:" << std::endl;
        int32_t arr17[5] = {10, 20, 30, 40, 50};
        int32_t sum = 0;
        for (int32_t val : arr17) {
            sum += val;
        }
        std::cout << "Sum: " << sum << std::endl;  // 输出: 150
    */
    
    // 5.2 数组的查找
    /*
        std::cout << "\n5.2 数组的查找:" << std::endl;
        int32_t arr18[6] = {3, 7, 2, 8, 5, 1};
        int32_t target = 8;
        bool found = false;
        for (int32_t i = 0; i < ARRAY_SIZE(arr18); ++i) {
            if (arr18[i] == target) {
                std::cout << "Found " << target << " at index " << i << std::endl;
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << target << " not found" << std::endl;
        }
    */
    
    // 5.3 数组的排序（冒泡排序）
    /*
        std::cout << "\n5.3 数组的排序（冒泡排序）:" << std::endl;
        int32_t arr19[6] = {3, 7, 2, 8, 5, 1};
        
        // 输出原始数组
        std::cout << "Original array: ";
        for (int32_t val : arr19) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
        
        // 冒泡排序
        for (int32_t i = 0; i < ARRAY_SIZE(arr19) - 1; ++i) {
            for (int32_t j = 0; j < ARRAY_SIZE(arr19) - i - 1; ++j) {
                if (arr19[j] > arr19[j + 1]) {
                    // 交换
                    int32_t temp = arr19[j];
                    arr19[j] = arr19[j + 1];
                    arr19[j + 1] = temp;
                }
            }
        }
        
        // 输出排序后数组
        std::cout << "Sorted array: ";
        for (int32_t val : arr19) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    */
    
    // 5.4 数组的逆序
    /*
        std::cout << "\n5.4 数组的逆序:" << std::endl;
        int32_t arr20[5] = {1, 2, 3, 4, 5};
        
        // 输出原始数组
        std::cout << "Original array: ";
        for (int32_t val : arr20) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
        
        // 逆序
        for (int32_t i = 0; i < ARRAY_SIZE(arr20) / 2; ++i) {
            int32_t temp = arr20[i];
            arr20[i] = arr20[ARRAY_SIZE(arr20) - 1 - i];
            arr20[ARRAY_SIZE(arr20) - 1 - i] = temp;
        }
        
        // 输出逆序后数组
        std::cout << "Reversed array: ";
        for (int32_t val : arr20) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    */
    
    
    // 6. 数组的常见问题和注意事项
    
    std::cout << "\n6. 数组的常见问题和注意事项:" << std::endl;
    
    // 6.1 数组下标越界
    std::cout << "\n6.1 数组下标越界:" << std::endl;
    std::cout << "- C++ does not check array bounds" << std::endl;
    std::cout << "- Out-of-bounds access is undefined behavior" << std::endl;
    std::cout << "- Can cause crashes or data corruption" << std::endl;
    std::cout << "- Always ensure index is between 0 and size-1" << std::endl;
    
    // 6.2 数组大小必须是常量（C++03）
    std::cout << "\n6.2 数组大小必须是常量（C++03）:" << std::endl;
    std::cout << "- Array size must be a compile-time constant" << std::endl;
    std::cout << "- Cannot use variables as array size" << std::endl;
    std::cout << "- C++11+ supports VLA (Variable Length Array), but not recommended" << std::endl;
    std::cout << "- Use std::vector for dynamic arrays" << std::endl;
    
    // 6.3 数组初始化的默认值
    std::cout << "\n6.3 数组初始化的默认值:" << std::endl;
    std::cout << "- Global arrays are initialized to zero by default" << std::endl;
    std::cout << "- Local arrays are NOT initialized by default (contain garbage values)" << std::endl;
    std::cout << "- Always initialize arrays to avoid undefined behavior" << std::endl;
    
    // 6.4 数组作为函数参数（退化指针）
    std::cout << "\n6.4 数组作为函数参数（退化指针）:" << std::endl;
    std::cout << "- Arrays decay to pointers when passed to functions" << std::endl;
    std::cout << "- sizeof(arr) returns pointer size, not array size" << std::endl;
    std::cout << "- Always pass array size as a separate parameter" << std::endl;
    
    // 6.5 数组与指针的关系
    std::cout << "\n6.5 数组与指针的关系:" << std::endl;
    std::cout << "- Array name is the address of the first element" << std::endl;
    std::cout << "- arr[i] is equivalent to *(arr + i)" << std::endl;
    std::cout << "- Pointers can be used to traverse arrays" << std::endl;
    
    // 6.6 C风格字符串与字符数组
    std::cout << "\n6.6 C风格字符串与字符数组:" << std::endl;
    std::cout << "- C-style strings must end with '\\0'" << std::endl;
    std::cout << "- sizeof(str) includes the '\\0' character" << std::endl;
    std::cout << "- Use std::string for safer string handling" << std::endl;
    
    
    // 7. 数组汇总表
    // +------------------------+------------------------+------------------------+
    // |   操作                 |   语法                 |   说明                 |
    // +------------------------+------------------------+------------------------+
    // |   定义                 |   type arr[size]       |   定义指定大小的数组   |
    // |   完全初始化           |   type arr[5]={1,2,3,4,5}| 所有元素都有值       |
    // |   部分初始化           |   type arr[5]={1,2,3}   |   未初始化元素为0      |
    // |   省略大小             |   type arr[]={1,2,3}    |   编译器推断大小       |
    // |   访问元素             |   arr[index]           |   下标从0开始         |
    // |   修改元素             |   arr[index]=value     |   修改指定位置元素     |
    // |   总大小               |   sizeof(arr)          |   返回数组总字节数     |
    // |   元素个数             |   sizeof(arr)/sizeof(arr[0]) | 计算元素个数     |
    // |   首元素地址           |   arr 或 &arr[0]       |   数组名就是首地址     |
    // |   解引用首元素         |   *arr                 |   等价于 arr[0]        |
    // +------------------------+------------------------+------------------------+
    
    
    std::cout << "\nPress Enter to continue..." << std::endl;
    std::cin.get();
    return 0;
}