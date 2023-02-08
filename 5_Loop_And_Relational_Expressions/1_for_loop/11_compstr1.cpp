/* strcmp()函数
 * 该函数接受两个字符串地址作为参数
 * 如果两个字符串相同，该函数将返回零
 * 如果第一个字符串按字母顺序排在第二个字符串之前，则 strcmp()将返回一个负数值
 * 如果第一个字符串按字母顺序排在第二个字符串之后，则 strcpm()将返回一个正数值
 * 
 * eg: 从第一个字符串和第二个字符串的第一个字母开始往后比较
 * 若第一个字符串和第二个字符串的第一个字母相同，则比较第一个字符串和第二个字符串的第二个字母
 * 否则，看第一个字符串和第二个字符串的第一个字母的ASCII码在前，则 strcmp()将返回一个正数值或负数值
*/
#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
    using namespace std;

    char word[5] = "?ate";

    // 因为字符实际上是整型。因此下面的代码可以用来显示字母表中的字符，至少对 ASCII 字符集和 Unicode 字符集来说是有效的：
    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;

    return 0;
}
