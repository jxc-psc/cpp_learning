#include <iostream>
using namespace std;

int main() {

    // 1. 使用using namespace std;和使用std::前缀的对比
    // 在初学者阶段，为了简化代码，使用using namespace std;是可以接受的。
    // 它会将std命名空间中的所有名称导入到当前作用域，这样就可以直接使用cout、endl等，而不需要写std::cout、std::endl。
    // 但是，在大型项目中，为了避免命名冲突，建议使用std::前缀来明确指定命名空间。
    // 例如，如果项目中定义了一个自己的cout函数，使用using namespace std;就会导致命名冲突。
    // 因此，在学习过程中，可以逐渐养成使用std::前缀的习惯。

    // 下面展示两种写法的示例：

    // 使用using namespace std;的写法（当前阶段可接受）
    cout << "使用using namespace std;的写法：" << endl;
    cout << "Hello, world!" << endl;

    // 使用std::前缀的写法（推荐的长期做法）
    std::cout << "使用std::前缀的写法：" << std::endl;
    std::cout << "Hello, world!" << std::endl;

    // 注意：由于当前文件已经使用了using namespace std;，所以上面的std::前缀写法也可以正常编译。
    // 在实际项目中，如果没有使用using namespace std;，则必须使用std::前缀。


    // 2. 使用system("pause")和使用cin.get()的对比
    // 在Windows环境下，使用system("pause")可以让控制台窗口暂停，等待用户按任意键后关闭。
    // 这在学习阶段是可以接受的，因为它简单方便。
    // 但是，system("pause")是平台相关的，在Linux和Mac上不可用。
    // 而且，system()函数会调用系统命令，存在安全风险。
    // 因此，推荐使用cin.get()来实现跨平台的暂停功能。
    // cin.get()会等待用户输入一个字符（包括回车），然后继续执行。

    // 下面展示两种写法的示例：

    // 使用cin.get()实现暂停（推荐的跨平台做法）
    cout << endl;
    cout << "使用cin.get()实现暂停：" << endl;
    cout << "请按回车键继续..." << endl;
    cin.get();  // 等待用户输入回车


    // 3. C风格类型转换和C++风格类型转换的对比
    // C风格类型转换使用(type)value的形式，例如(int)3.14。
    // 这种写法简单直接，在学习阶段是可以接受的。
    // 但是，C风格转换不够明确，无法区分不同类型的转换（如静态转换、动态转换等）。
    // C++提供了四种类型转换运算符：static_cast、dynamic_cast、const_cast、reinterpret_cast。
    // 在学习过程中，应逐渐养成使用C++风格类型转换的习惯，因为它更加明确和安全。


    // 3.1 static_cast
    // static_cast是最常用的类型转换运算符，用于基本类型之间的转换。
    // 它可以进行以下转换：
    // 1. 基本数据类型之间的转换，如int转double、double转int等。
    // 2. 指针类型之间的转换，但不包括不同类型指针之间的转换（需要使用reinterpret_cast）。
    // 3. 向上类型转换（子类指针转父类指针），但不能用于向下类型转换（需要使用dynamic_cast）。
    // 4. void指针和其他类型指针之间的转换。
    // static_cast在编译时进行类型检查，比C风格转换更安全。

    double num1 = 3.14;
    int num2 = 5;

    // C风格类型转换（当前阶段可接受）
    int result1 = (int)num1;
    cout << endl;
    cout << "3.1 static_cast:" << endl;
    cout << "C风格类型转换：" << endl;
    cout << "(int)3.14 = " << result1 << endl;

    // C++风格类型转换（推荐的写法）
    int result2 = static_cast<int>(num1);
    cout << "C++风格类型转换：" << endl;
    cout << "static_cast<int>(3.14) = " << result2 << endl;

    // 其他static_cast示例
    double result3 = static_cast<double>(num2);
    cout << "static_cast<double>(5) = " << result3 << endl;

    void* ptr = &num1;
    double* dptr = static_cast<double*>(ptr);
    cout << "static_cast<double*>(void*) = " << *dptr << endl;


    // 3.2 const_cast
    // const_cast用于去除或添加变量的const属性。
    // 它只能用于指针或引用类型。
    // 使用const_cast去除const属性是非常危险的操作，因为如果原始变量确实是const的，
    // 修改它会导致未定义行为。
    // const_cast通常用于以下场景：
    // 1. 调用一个非const函数，但传入的参数是const的。
    // 2. 重载函数时，需要区分const和非const版本。

    const int num3 = 10;
    const int* cptr = &num3;

    // C风格类型转换（去除const属性）
    int* ptr1 = (int*)cptr;
    cout << endl;
    cout << "3.2 const_cast:" << endl;
    cout << "C风格类型转换（去除const属性）：" << endl;
    cout << "*((int*)cptr) = " << *ptr1 << endl;

    // C++风格类型转换（推荐的写法）
    int* ptr2 = const_cast<int*>(cptr);
    cout << "C++风格类型转换（去除const属性）：" << endl;
    cout << "*const_cast<int*>(cptr) = " << *ptr2 << endl;

    // 添加const属性
    int num4 = 20;
    int* ptr3 = &num4;
    const int* cptr2 = const_cast<const int*>(ptr3);
    cout << "C++风格类型转换（添加const属性）：" << endl;
    cout << "*const_cast<const int*>(ptr3) = " << *cptr2 << endl;


    // 3.3 reinterpret_cast
    // reinterpret_cast用于底层类型转换，它会重新解释内存中的位模式。
    // 它可以进行以下转换：
    // 1. 不同类型指针之间的转换，如int*转double*。
    // 2. 指针和整数之间的转换，如int*转int。
    // 3. 引用类型之间的转换。
    // reinterpret_cast是最危险的类型转换运算符，因为它不进行任何类型检查。
    // 使用reinterpret_cast时，程序员必须确保转换是安全的。

    int num5 = 65;
    int* ptr4 = &num5;

    // C风格类型转换（指针转整数）
    long long addr1 = (long long)ptr4;
    cout << endl;
    cout << "3.3 reinterpret_cast:" << endl;
    cout << "C风格类型转换（指针转整数）：" << endl;
    cout << "(long long)ptr4 = " << addr1 << endl;

    // C++风格类型转换（推荐的写法）
    long long addr2 = reinterpret_cast<long long>(ptr4);
    cout << "C++风格类型转换（指针转整数）：" << endl;
    cout << "reinterpret_cast<long long>(ptr4) = " << addr2 << endl;

    // 整数转指针
    int* ptr5 = reinterpret_cast<int*>(addr2);
    cout << "C++风格类型转换（整数转指针）：" << endl;
    cout << "*reinterpret_cast<int*>(addr2) = " << *ptr5 << endl;

    // 不同类型指针之间的转换
    char* cptr3 = reinterpret_cast<char*>(ptr4);
    cout << "C++风格类型转换（int*转char*）：" << endl;
    cout << "*reinterpret_cast<char*>(ptr4) = " << *cptr3 << endl;


    // 3.4 dynamic_cast
    // dynamic_cast用于多态类型之间的转换，特别是向下类型转换（父类指针转子类指针）。
    // 它只能用于包含虚函数的类层次结构。
    // dynamic_cast在运行时进行类型检查，如果转换失败，返回nullptr（指针类型）或抛出异常（引用类型）。
    // 这使得dynamic_cast比static_cast更安全，因为它可以检测到无效的类型转换。
    // 注意：dynamic_cast需要启用运行时类型信息（RTTI），否则会编译失败。

    // 定义基类和派生类
    class Base {
    public:
        virtual void show() { cout << "Base" << endl; }
    };

    class Derived : public Base {
    public:
        void show() override { cout << "Derived" << endl; }
        void derivedOnly() { cout << "Derived only" << endl; }
    };

    Base* basePtr = new Derived();

    // C风格类型转换（向下类型转换）
    Derived* d1 = (Derived*)basePtr;
    cout << endl;
    cout << "3.4 dynamic_cast:" << endl;
    cout << "C风格类型转换（向下类型转换）：" << endl;
    d1->show();
    d1->derivedOnly();

    // C++风格类型转换（推荐的写法）
    Derived* d2 = dynamic_cast<Derived*>(basePtr);
    cout << "C++风格类型转换（向下类型转换）：" << endl;
    if (d2 != nullptr) {
        d2->show();
        d2->derivedOnly();
    }

    // 无效的向下类型转换
    Base* basePtr2 = new Base();
    Derived* d3 = dynamic_cast<Derived*>(basePtr2);
    cout << "无效的向下类型转换：" << endl;
    if (d3 == nullptr) {
        cout << "dynamic_cast返回nullptr，转换失败" << endl;
    }

    delete basePtr;
    delete basePtr2;


    // 注意：无论是C风格还是C++风格的类型转换，都可能导致精度损失或数据截断。
    // 在进行类型转换时，应确保转换是安全的。


    system("pause");
    return 0;
}
