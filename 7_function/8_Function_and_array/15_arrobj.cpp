#include <iostream> 
#include <array> 
#include <string>

const int Seasons = 4;
const std::array<std::string, Seasons> Snames = 
    {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, Seasons> *pa);
void show(std::array<double, Seasons> da);

int main(int argc, char const *argv[])
{
    std::array<double, Seasons> expenses;
    // 但如果函数要修改对象 expenses, 则需将该对象的地址传递给函数
    fill(&expenses);
    show(expenses);

    return 0;
}

void fill(std::array<double, Seasons> *pa)
{
    using namespace std;

    for(int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];  // *pa取值为array对象,然后[i],取i处的值
    }
}

void show(std::array<double, Seasons> da)
{
    using namespace std;

    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}