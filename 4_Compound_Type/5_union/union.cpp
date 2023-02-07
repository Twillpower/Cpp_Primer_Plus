// 共用体 (union) 只能同时存储一种类型
// 共用体的句法与结构体相似，但含义不同
// 可以使用 one4all 变量来存储 int、 long 或 double, 条件是在不同的时间进行;
#include <iostream>

union  one4all
{
    int int_val;
    long long_val;
    double double_val;
    char char_val;
};

int main(int argc, char const *argv[])
{
    using namespace std;

    one4all pail;
    // 共用体的长度为其最大成员的长度。
    cout << sizeof(pail) << endl;

    pail.int_val = 15;
    cout << pail.int_val << endl;

    pail.double_val = 1.38;
    cout << pail.double_val << endl;

    pail.char_val = 'A';
    cout << pail.char_val << endl;
    cout << pail.int_val << endl;

    return 0;
}

