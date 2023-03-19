#include <iostream>

template<typename T>
T lesser(T a, T b)
{
    return a < b ? a : b;
}

int lesser(int a, int b)
{
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int main(int argc, char const *argv[])
{
    using namespace std;
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;
    cout << lesser(x, y) << endl;
    cout << lesser<>(m, n) << endl;  // 告诉编译器选择模板函数
    cout << lesser<int>(x, y) << endl;  // 告诉编译器选择模板函数，且强制类型转化为int

    return 0;
}
