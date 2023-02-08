#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    using namespace std;

    string word = "?ate";

    // 因为字符实际上是整型。因此下面的代码可以用来显示字母表中的字符，至少对 ASCII 字符集和 Unicode 字符集来说是有效的：
    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;

    return 0;
}
