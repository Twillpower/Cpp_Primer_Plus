// C++允许在声明结构变量时省略关键字 struct;
// struct inflatable goose;    // keyword struct required in C
// inflatable vincent;    // keyword struct no t required in C++
#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, char const *argv[])
{
    using namespace std;
    inflatable guest = 
    {
        "Glorious Gloria",
        1.88,
        29.99
    };
    inflatable pal = 
    {
        "Audacious Arthur",
        3.12,
        32.99
    };
    
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";

    cout << "You can have both for $";
    cout << guest.price  + pal.price << "!\n";

    return 0;
}

