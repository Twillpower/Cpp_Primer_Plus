/* 1) *++pt
 * 2) ++*pt
 * 3) (*pt)++
 * 4) *pt++
*/
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
    double *pt = arr;

    cout << "*pt = " << *pt << endl;

    // 指针先加1在取值
    cout << "*++pt = " << *++pt << endl; 

    // 指针先取值，在将值加1，在打印(在使用)
    cout << "++*pt = " << ++*pt << endl;

    // 指针先取值，在打印(在使用)，在将值加1
    cout << "(*pt)++ = " << (*pt)++ << endl;

    cout << "*pt = " << *pt << endl;

    // 指针先取值，在打印(在使用)，在将指针加1
    cout << "*pt++ = " << *pt++ << endl;

    cout << "*pt = " << *pt << endl;

    pt--;
    cout << "*pt = " << *pt << endl;

    return 0;
}
