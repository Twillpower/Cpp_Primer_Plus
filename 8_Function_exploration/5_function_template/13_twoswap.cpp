#include <iostream>

template <typename T>
void Swap(T &a, T &b);

struct job
{
    char name[40];
    double salary;
    int floor;
};

// 显式具体化, Swap<job>中的<job>是可选的，因为函数的参数类型表明，这是 job 的一个具体化
// 声明的意思是“不要使用 Swap()模板来生成函数定义， 而应使用专门为 job 类型显式地定义的函数定义”
template <> void Swap<job>(job &j1, job &j2);

void Show(job &j);

int main(int argc, char const *argv[])
{
    using namespace std;

    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);

    int i = 10;
    int j = 20;

    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper: \n";
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << ".\n";

    job sue= {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee ", 78060.72, 9};
    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney);
    cout << "After job swapp1ng: \n";
    Show(sue);
    Show(sidney);

    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <> void Swap<job>(job &j1, job &j2)
{
    double t1;
    int t2;

    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;

    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j)
{
    using namespace std;
    cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}