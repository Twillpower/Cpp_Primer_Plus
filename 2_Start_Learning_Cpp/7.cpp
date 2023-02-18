#include <iostream>

int stonetolb(int sts);

int main(int argc, char const *argv[])
{
    using namespace std;

    int stone;
    cout << "Enter the weight int stone: ";
    cin >> stone;

    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;

    return 0;
}


// 1 stone = 14lbs  (1英石等于14磅)
int stonetolb(int sts)
{
    return 14 * sts;
}