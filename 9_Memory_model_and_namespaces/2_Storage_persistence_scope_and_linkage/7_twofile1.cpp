#include <iostream>

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "main () reports the following addresses: \n";
    cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry\n";
    remote_access();
        
    return 0;
}
