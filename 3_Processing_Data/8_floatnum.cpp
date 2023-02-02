//float 和 double 类型及它们表示数字时在精度方面的差异
//ostrearn 方法 setf()。这种调用迫使输出使用定点表示法，以便更好地了解精度 ，
//参数 ios_base::fixed 和 ios_base::floatfield 是通过包含 iostream 来提供的常量。
// 通常 cout 会删除结尾的零。 例如， 将 3333333.250000 显示为 3333333.25。调用 cout.setf()将覆盖这种行为 
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;    // float 至少有 6 位有效位
    double mint = 10.0 / 3.0;    // double 类型至少有 13 位是精确的
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;

    return 0;
}
