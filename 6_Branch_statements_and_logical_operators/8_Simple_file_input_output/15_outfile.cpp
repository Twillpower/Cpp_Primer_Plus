#include <iostream>  // ostream->cout   istream->cin
#include <fstream>  // ofstream    ifstream

int main(int argc, char const *argv[])
{
    using namespace std;
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;  // 为输出创建对象
    outFile.open("carinfo.txt");  // 关联文件

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;   // 不要以科学计数法显示
    cout.precision(2);  // 精度为2(输出到小数点后两位)
    cout.setf(ios_base::showpoint);  // 即使小数点后为0,依然显示小数点后的0
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();

    return 0;
}
