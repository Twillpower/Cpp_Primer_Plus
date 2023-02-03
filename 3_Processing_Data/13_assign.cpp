//初始化时的类型更改
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;    // int转换为float
    int guess(3.9832);    // double 转化为 int
    int debt = 7.2E12;    // C++没有对结果进行定义

    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;


    return 0;
}
