#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    int ch;
    int count = 0;

    // 不接受任何参数的 cin.get()成员函数返回输入中的下一个字符
    // 如果使用 cin.get() (没有参数）并测试 EOF, 则必须将返回值赋给 int 变量，而不是 char 变量。
    while ((ch = cin.get()) != EOF) 
    {
        // 该函数的工作方式类似 C 语言中的 putchar(), 只不过其参数类型为 char, 而不是 int 。
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";

    return 0;
}
