// 对比char类型和int类型
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    //使用cout.put()成员函数显示一个char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    //使用cout.put()显示一个char常量
    cout.put('!');
    cout << endl << "Done" << endl;

    return 0;
}
