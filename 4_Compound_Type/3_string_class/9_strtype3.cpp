// 对比string对象和字符数组
// 使用函数 strcpy()将字符串复制到字符数组中，使用函数 strcat()将字符串附加到字符数组末尾：
#include <iostream>
#include <string>    //string类
#include <cstring>  // c风格字符串库

int main(int argc, char const *argv[])
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    // 字符串对象和字符数组的赋值
    str1 = str2;    // copy str2 to str1
    strcpy(charr1, charr2);    // copy charr2 to charr1

    // 追加字符串对象和字符数组
    str1 += " paste";
    strcat(charr1, " juice");

    // 查找字符串对象和c风格字符串的长度
    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n"; 

    return 0;
}
