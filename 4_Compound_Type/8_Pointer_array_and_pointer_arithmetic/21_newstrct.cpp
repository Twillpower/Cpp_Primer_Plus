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

    inflatable *ps = new inflatable;

    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);

    // 如果 ps 是指向结构的指针，则*ps 就是被指向的值——结构本身
    // *ps 是一个结构，因此 (*ps) . price 是该结构的 price 成员
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;

    cout << "Enter price: $";
    cin >> ps->price;

    cout << "Name: " << (*ps).name << endl;
    cout << "Volum: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;

    delete ps;

    return 0;
}
