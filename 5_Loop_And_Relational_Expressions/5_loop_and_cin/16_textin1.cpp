// 使用原始的 cin 进行输入
// cin 。 读取 char 值时， 与读取其他基本类型一样， cin 将忽略空格和换行符
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit : \n";
    cin >> ch;
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl << count << " characters read\n";
    

    return 0;
}
