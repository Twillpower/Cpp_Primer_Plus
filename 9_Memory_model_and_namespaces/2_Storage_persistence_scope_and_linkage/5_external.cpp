#include <iostream>
#include "6_support.cpp"

using namespace std;

double warming = 0.3;  // 静态，外部链接性(全局变量)

void update(double dt);
void local();

int main(int argc, char const *argv[])
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Global warming is " << warming << " degrees.\n";

    return 0;
}
