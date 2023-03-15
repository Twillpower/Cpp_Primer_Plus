#include <iostream>
#include <fstream>  // 文件IO
#include <cstdlib>  // 支持exit()

const int SIZE = 60;

int main(int argc, char const *argv[])
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;   // 用于处理文件输入的对象

    cout << "Enter name of data file: "; 
    cin.getline(filename, SIZE);  
    inFile.open(filename);  // 将inFile与文件关联
    if(!inFile.is_open())  // 打开文件失败
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;  // 获取第一个值
    while (inFile.good())  // 输入成功且不再文件结尾(EOF)
    {
        ++count;
        sum += value;
        inFile >> value;
    }
    if(inFile.eof())
        cout << "End of file reached.\n";
    else if(inFile.fail())
        cout << "Input terminated by data mismatch. \n";
    else 
        cout << "Input terminated for unknown reason. \n";
    
    if(count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: "<< count << endl; 
        cout << "Sum: " << sum << endl; 
        cout << "Average: "<< sum / count<< endl;
    }
    inFile.close();

    return 0;
}
