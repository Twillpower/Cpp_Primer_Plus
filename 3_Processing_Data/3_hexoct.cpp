//显示八进制和十六进制
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << hex;  //切换为16进制显示
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << oct;    //切换为8进制显示
    cout << "inseam = "<< inseam << " (042 in octal)\n";

    return 0;
}
