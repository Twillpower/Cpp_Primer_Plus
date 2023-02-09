#include <iostream>

const int Cities = 5;
const int Years = 4;

int main(int argc, char const *argv[])
{
    using namespace std;

    // 将一个指 针数组初始化为一组字符串常量
    // 将 cities 声明为一个 char 指针数组。
    // 这使得每个元素（如 cities [O]) 都是一个 char 指针，可被初始化为一个字符串的地址
    // eg: 程序将 cities [O]初始化为字符串 "Gribble City" 的地址
    const char *cities[Cities] =
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };

    int maxtemps[Years][Cities] =
    {
        {96, 100, 87, 101, 105},
        {96, 98, 91, 107, 104},
        {97, 101, 93, 108, 107},
        {98, 103, 95, 109, 108}
    };

    cout << "Maximum temperatures for 2008 - 2011\n\n";

    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
        {
            cout << maxtemps[year][city] << "\t";
        }
        cout << "\n";  
    }
    

    return 0;
}
