#include <iostream>

long double probability(unsigned int numbers, unsigned int picks);

int main(int argc, char const *argv[])
{
    using namespace std;

    double total, choices;

    cout << "Enter the total number of choi ces on the game card and\n"
            "the number of picks allowed:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices);
        cout << " of winning. \n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";

    return 0;
}


long double probability(unsigned int numbers, unsigned int picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}