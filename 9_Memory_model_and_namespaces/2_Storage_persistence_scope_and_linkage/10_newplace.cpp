#include <iostream>
#include <new>

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main(int argc, char const *argv[])
{
    using namespace std;
    double *pd1, *pd2;
    int i;

    cout << "Calling new and placement new: \n" ;
    pd1 = new double[N];
    // new一个double[N]其起始地址为buffer
    pd2 = new (buffer) double[N];  // 从 buffer中分配空间给一个包含N个元素的double数组。
    for(i = 0; i < N; i++)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;
    cout << "Memory addresses:\n" << " heap: " << pd1
        << " static: " << (void *)buffer << endl;
    cout << "Memory contents:\n";
    for(i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }

    cout << "\nCalling new and placement new a second time: \n" ;
    double *pd3, *pd4;
    pd3 = new double[N];
    pd4 = new (buffer) double[N];  // 会将pd2 = new (buffer) double[N];覆盖
    for(i = 0; i < N; i++)
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    cout << "Memory contents: \n";
    for(i = 0; i < N; i++)
    {
        cout << pd3[i] << " at " << &pd3[i] << "; ";
        cout << pd4[i] << " at " << &pd4[i] << endl;
    }

    cout << " \nCalling new and placement new a third time:\n" ;
    delete [] pd1;
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N];
    for(i = 0; i < N; i++)
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    cout << "Memory contents: \n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }
    delete [] pd1;
    delete [] pd3;
    // buffer 指定的内存是静态内存，而 delete 只能用于这样的指针：指向常规 new 运算符分配的堆内存
    // 数组 buffer 位于 delete 的管辖区域之外
    // pd2和pd4位于buffer内，所以不需要delete

    return 0;
}
