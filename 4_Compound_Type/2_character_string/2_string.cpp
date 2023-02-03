// C-风格字符串具有一种特殊的性质：以空字符 (null character) 结尾，空字符被写作\0, 其 ASCII 码为0, 用来标记字符串的结尾
// 只需使用一个用引号括起 的字符串即可，这种字符串被称为字符串常量 (string constant) 或字符串字面值 (string literal) 
// eg: char bird[ll] = "Mr. Cheeps"; char fish[] = "Bubbles";
// 用引号括起的字符串隐式地包括结尾的空字符，因此不用显式地包括它
#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";

    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;

    return 0;
}
