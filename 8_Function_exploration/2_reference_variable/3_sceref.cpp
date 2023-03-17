#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int rats = 101;
    int &rodents = rats;

    cout << "rat = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;  // 不能让rodents成为bunnies的别名，只是赋值
    cout << "bunnies = " << bunnies;
    cout << ", rat = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;

    return 0;
}
