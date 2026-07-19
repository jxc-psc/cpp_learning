#include <iostream>
using namespace std;

int main() {
    cout << "sizeof(char) = " << sizeof(char) << endl;  // char长度为1
    cout << "sizeof(short) = " << sizeof(short) << endl; // short长度为2
    cout << "sizeof(int) = " << sizeof(int) << endl; // int长度为4
    cout << "sizeof(long) = " << sizeof(long) << endl; // long长度为4
    cout << "sizeof(long long) = " << sizeof(long long) << endl; //long long长度为8
    cout << "sizeof(float) = " << sizeof(float) << endl; // float的长度为4
    cout << "sizeof(double) = " << sizeof(double) << endl; // double的长度为8

    system("pause");
    return 0;
}