#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int rats = 101;
    int &rodents = rats;  // rodents是rats的引用(即别名)

    cout << "rat = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rat = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    return 0;
}
