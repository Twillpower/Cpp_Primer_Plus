// 使用getline读取多个单词
// getline()和 get()。这两个函数都读取一行输入，直到到达换行符
// getline()将丢弃换行符，而 get()将换行符保留在输入序列中 。 下面详细介绍它们，首先介绍 getline()
// getline()函数读取整行，它使用通过回车键输入的换行符来确定输入结尾，但不保存换行符
// 相反，在存储字符串时，它用空字符来替换换行符
// 使用 cin.getline() 。 该函数有两个参数。 第一个参数是用来存储输入行的数组的名称，第二个参数是要读取的字符数。
// 如果这个参数为 20, 则函数最多读取 19 个字符，余下的空间用千存储自动在结尾处添加的空字 符。
// getline()成员函数在读取指定数目的字符或遇到换行符时停止读取。
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    // cin.getline(name, ArSize) 返回一个 cin 对象
    // 即可这样调用cin.getline(name1, ArSize).getline(name2, ArSize);
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
