#include <iostream>

const double *f1(const double ar[], int n);
const double *f2(const double [], int);
const double *f3(const double *, int);

int main(int argc, char const *argv[])
{
    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};

    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;  // 与上句等价
    cout << "Using pointers to functions: \n";
    cout << " Address         Value\n";
    // (*p1)(av, 3) == f1(av, 3)
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
    // p2(av, 3) == f2(av, 3)
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

    // pa是一个由指针构成的数组，每个指针都是指向函数的指针
    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    auto pb = pa;
    cout << "\nUsing an array of pointers to functions : \n";
    cout << " Address         Value\n";
    for(int i = 0; i < 3; i++)
    {
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
        cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
    }

    cout << "\nUsing pointers to an array of functions : \n";
    cout << " Address         Value\n";
    // const double *(*(*pc)[3])(const double *, int) = &pa;
    auto pc = &pa;  // pc是指向pa数组的指针
    // *pc: pc取值就是该数组，(*pc)[0]：数组在取第0个元素即(*pc) == pa --> (*pc)[0](av, 3) == pa[0](av, 3)
    cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
    // (*pd)[3]：首先它是一个指针，指针里面有3个元素，*(*pd)[3]：每个元素都是一个指针
    // *(*(*pd)[3])：每个指针指向的函数的返回值也是一个指针
    // pd是指向由指针构成的数组，该数组每个元素都是一个指向函数的指针，每个指针指向的函数的返回值也是一个指针
    const double *(*(*pd)[3])(const double *, int) = &pa;
    // (*pd)[1](av, 3) == pa[1](av, 3) == f2(av, 3)
    const double *pdb = (*pd)[1](av, 3);
    cout << pdb << ": " << *pdb << endl;
    cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;

    return 0;
}

const double *f1(const double *ar, int n)
{
    return ar;
}

const double *f2(const double ar[], int n)
{
    return ar+1;
}

const double *f3(const double ar[], int n)
{
    return ar+2;
}