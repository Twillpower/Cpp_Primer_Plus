//使用%操作符将lbs转换为stone（1英石转化为磅）
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " pounds are " << stone
         << " stone, " << pounds << " pound(s).\n";

    return 0;
}
