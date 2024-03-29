#include <iostream>

void countdown(int n);

int main(int argc, char const *argv[])
{
    countdown(4);

    return 0;
}

void countdown(int n)
{
    using namespace std;

    cout << "Counting down ... " << n << "(n at adress: " << &n << " )" << endl;
    if(n > 0)
        countdown(n-1);
    cout << n << ": Kaboom!" << "(n at adress: " << &n << " )" << endl;
}