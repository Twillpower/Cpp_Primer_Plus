//浮点运算的速度通常比整数运算慢，且精度将降低
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;

    //2.34E+22 是一个小数点左边有 23 位的数字。 加上 1' 就是在第 23 位加 1 。 但 float 类型只
    //能表示数字中的前 6 位或前 7 位， 因此修改第 23 位对这个值不会有任何影响
    cout << "b - a = " << b - a << endl;

    return 0;
}
