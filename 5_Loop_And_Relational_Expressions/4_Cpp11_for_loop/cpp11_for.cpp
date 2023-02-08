// 基于范围 (range-based) 的 for 循环
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
    for(double x : prices)  // 遍历数组
        cout << x << endl;

    cout << endl;

    // 符号＆表明 x 是一个引用变量
    // 就这里而言，这种声明让接下来的代码能够修改数组的内容，而上面语法不能。
    for(double &x : prices)
    {
        x = x * 0.8;
        cout << x << endl;
    }

    cout << endl;

    for(int x : {3, 5, 2, 8, 6})
        cout << x << endl;
        

    return 0;
}
