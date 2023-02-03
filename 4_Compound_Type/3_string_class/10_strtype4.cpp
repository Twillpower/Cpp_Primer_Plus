#include <iostream>
#include <string>    //string类
#include <cstring>  // c风格字符串库

int main(int argc, char const *argv[])
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;   //未赋值，内容长度未知
    cout << "Length of string in str before input: "
         << str.size() << endl;     //未赋值，长度为0
    cout << "Enter a line of text: \n";
    cin.getline(charr, 20);     //指定最大长度
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text: \n";
    getline(cin, str);   // cin现在是个参数，没有指定长度
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string instr after input: "
         << str.size() << endl;

    return 0;
}