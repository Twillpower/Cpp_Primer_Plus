#include <iostream>

int main(int argc, char const *argv[])
{
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if(ch == '\n')
            std::cout << ch;
        else
            std::cout << ++ch;
            // std::cout << ch + 1;  // +1会进行数据类型提升，会将ch提升为整形
        std::cin.get(ch);
    }
    std::cout << " \nPlease excuse the slight confusion.\n";

    return 0;
}
