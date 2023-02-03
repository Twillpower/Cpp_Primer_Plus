// get()与getline()它们接受的参数相同，解释参数的方式也相同，并且都读取到行尾。
// 但 get并不再读取并丢弃换行符，而是将其留在输入队列中
// 假设我们连续两次调用 get()；cin.get(name, ArSize); cin.get(dessert, Arsize);
// 由于第一次调用后，换行符将留在输入队列中，因此第二次调用时看到的第一个字符便是换行符。
// 因此get()认为已到达行尾，而没有发现任何可读取的内容。如果不借助于帮助， get()将不能跨过该换行符 。
// 使用不带任何参数的 cin.get()调用可读取下一个字符（即使是换行符），
// 因此可以用它来处理换行符，为读取下一行输入做好准备。
// getline()使用起来简单一些，但 get()使得检查错误更简单些
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter tour name:\n";
    // cin.get(name, ArSize) 返回一个 cin 对象，该对象随后将被用来调用 get() 函数。
    cin.get(name, ArSize).get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
