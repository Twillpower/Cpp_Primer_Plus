// 强制类型转换
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int auks, bats, coots;

    // 下面的语句将两个值相加为double，
    // 然后将结果转换为int
    auks = 19.99 + 11.99;

    // 这些语句以int形式添加值
    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;    // 使用static_cast进行强制类型转换

    return 0;
}
