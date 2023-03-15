#include <iostream> 
#include <cctype>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "Enter text for analysis, and type @ "
            " to terminate input. \n";
    char ch; 
    int whitespace = O; 
    int digits= O; 
    int chars= O; 
    int punct = O; 
    int others= O;

    cin.get(ch);
    while (ch != '@')
    {
        if(isalpha(ch))  // 是否是字母字符
            chars++;
        else if(isspace(ch))
            whitespace++;
        else if(isdigit(ch))  // 是否是数字
            digits++;
        else if(ispunct(ch))  // 是否是标点符号
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars <<" letters, "
        << whitespace << " whitespace, "
        << digits << " digits, "
        << punct << "punctuations, "
        << others << " others. \n";

    return 0;
}
