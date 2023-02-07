#include <iostream>
#include <vector>  // STL C++98
#include <array>   // C++11

int main(int argc, char const *argv[])
{
    using namespace std;
    double a1[4] = {1.2, 2.4, 3.6, 4.8};

    // 创建一个vector对象，有四个元素
    vector<double> a2(4);

    // 在C++98中没有更简单的初始化方法
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;

    // C++11 -- 创建并初始化有四个元素的array对象
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;  // 对相同大小的array对象有效

    // vector在内存的堆里，其它在栈里
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl << endl;

    // 等于*(a1-2) = 20.2; 找到 a1 指向的地方，向前移两个 double 元素，并将 20.2 存储到目的地
    a1[-2] = 20.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;  // 越界
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl << endl;

    // 可以使用 vector 和 array 对象的成员函数 at():
    // 使用 at()时，将在运行期间捕获非法索引，而程序默认将中断
    // 它们包含成员函数 begin()和 end(), 让您能够确定边界， 以免无意间超界
    a2.at(1) = 2.3;
    cout << "a2[1]: " << a2[1] << " at " << &a2[1] << endl;
    a2.at(-2) = 22.1;

    return 0;
}
