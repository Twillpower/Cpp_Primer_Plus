// 使用 cin.get(char)进行补救
// 成员函数 cin.get(ch)读取输入中的下一个字符（即使它是空格），并将其赋给变量 ch。 
// 在 C 语言中，要修改变量的值，必须将变量的地址传递给函数
// 引用是 C++在 C 语言的基础上新增的一种类型
// cin.get(ch)的参数声明为引用类型
// 因此该函数可以修改其参数的值
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit : \n";
    // 在 C 语言中，这样的代码无效，但在 C++中有效
    // cin.get(ch)返回一个对象，而不是读取的字符
    cin.get(ch);
    while (ch != '#')
    {
        cout << ch;
        ++count;
        // 函数重载, cin.get()有一个参数版本，两个参数版本，和无参数版本
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    

    return 0;
}
