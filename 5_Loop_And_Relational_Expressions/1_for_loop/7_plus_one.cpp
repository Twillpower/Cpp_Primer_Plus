// 对于类而言，前缀版本的效率比后缀版本高。
// 对于内置类型，采用哪种格式不会有差别；但对于用户定义的类型，如果有用户定义的递增和递减运算符，则前缀格式的效率更高。
#include <iostream>

int main(int argc, char const *argv[])
{
    using std::cout;
    using std::endl;

    int a = 20;
    int b = 20;

    cout << "a = " << a << ": b = " << b << endl;
    cout << "a++ = " << a++ << ": ++b = " << ++b << endl;
    cout << "a = " << a << ": b = " << b << endl;

    return 0;
}
