// cout 在显示 bool 值之前将它们转换为 int, 
// 但 cout.setf (ios::boolalpha) 函数调用设置了一个 标记，
// 该标记命令 cout 显示 true 和 false, 而不是 1 和 0 。
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    int x;

    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << "Now x = " << x << endl;

    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;

    cout.setf(ios_base::boolalpha);
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;

    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;

    return 0;
}

