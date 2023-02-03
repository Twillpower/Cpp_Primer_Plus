// 使用C++ string类
// 可以使用 C-风格字符串来初始化 string 对象。
// 可以使用 cin 来将键盘输入存储到 string 对象中。
// 可以使用 cout 来显示 string 对象。
// 可以使用数组表示法来访问存储在 string 对象中的字符。
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines: \n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2
         << endl;
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;

    return 0;
}
