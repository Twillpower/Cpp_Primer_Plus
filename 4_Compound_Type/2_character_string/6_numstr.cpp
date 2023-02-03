// 混合输入字符串和数字
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    cout << "What year was your house built?\n";

    int year;
    // 当 cin 读取年份，将回车键生成的换行符留在了输入队列中。
    // 后面的 cin.getline()看到换行符后，将认为是一个空行，并将一个空字符串赋给 address 数组。
    cin >> year;
    //cin.get();  // 或 (cin >> year).get();
    cout << "What is its street address?\n";

    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";

    return 0;
}
