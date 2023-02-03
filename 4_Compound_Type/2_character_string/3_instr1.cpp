// 读取多个字符串
// 输入Alistair Dreeb时，还没有对“输入甜点的提示“作出反应，程序便把它显示出来了，然后立即显示最后一行
// cin 使用空白（空格、制表符和换行符）来确定字符串的结束位置
// 当输入完Alistair Dreeb后，计算机将其放入缓冲区，并将Alistair放入了第一个cin后的变量中，
// 当碰到第二个cin时，在从缓冲区中读取到Dreeb后，将其赋给第二个cin后的变量
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
