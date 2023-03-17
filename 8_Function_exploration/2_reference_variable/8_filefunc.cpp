#include <iostream> 
#include <fstream> 
#include <cstdlib> 

using namespace std;

void file_it(ostream &os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main(int argc, char const *argv[])
{
    ofstream fout;
    const char *fn = "ep-data.txt";
    fout.open(fn);
    if(!fout.is_open())
    {
        cout << "Can't open " << fn << ".Bye.\n";
        exit(EXIT_FAILURE);
    }

    double objective;
    cout << "Enter the focal length of your "
            "telescope objective in mm: ";
    cin >> objective;

    double eps[LIMIT];
    cout << "Enter the focal lengths, in mm, of " << LIMIT
        << " eyepieces:\n";
    for (int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepiece #" << i + 1 << ": ";
        cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "Done!\n";

    return 0;
}

// 基类引用可以指向派生类对象，而无需进行强制类型转换
// 可以定义一个接受基类引用作为参数的函数，调用该函数时，可以将基类对象作为参数，也可 以将派生类对象作为参数
// os: 既能指向基类对象(ostream)又能指向派生类对象(ofstream)
void file_it(ostream &os, double fo, const double fe[], int n)
{
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f.1. eyepiece";
    os.width(15);
    os << "magnification" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int(fo/fe[i] + 0.5) << endl;
    }
    os.setf(initial);
}