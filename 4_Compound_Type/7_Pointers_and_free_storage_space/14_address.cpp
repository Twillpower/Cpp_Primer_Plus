// 变量应用地址运算符（＆），就可以获得它的位置
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;

    return 0;
}
