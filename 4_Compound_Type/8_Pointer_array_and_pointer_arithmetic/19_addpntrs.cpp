#include <iostream>

/*
 * short *pas[20]
 * 优先pas[20] -> pas是数组，每个元素都是short *
 * 
 * short (*pas)[20]
 * 优先(*pas) -> pas是指针，指向一个数组，数组有20个元素，每个元素都是short类型
*/

// 数组名被解释为其第一个元素的地址
// 对数组名应用地址运算符时，得到的是整个数组的地址
// eg: short tell[10]; (一个short两个字节)
// &tell[O] (即 tell) 是一个 2 宇节内存块的地址，而 &tell 是一个 20 字节内存块的地址
// 表达式 tell + 1 将地址值加 2, 而表达式 &tell + 1 将地址加 20
void tell(void)
{
    using namespace std;

    short tell[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "tell = " << tell << endl;
    cout << "tell + 1 = " << tell + 1 << endl;
    cout << "&tell + 1 = " << &tell + 1 << endl;
} 

int main(int argc, char const *argv[])
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    double *pw = wages;
    short *ps = &stacks[0];

    cout << "pw = " << pw << ", *pw =  " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer : \n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
         << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    // 数组表达式 stacks[1] 。 C++编译器将该表达式看作是* (stacks + 1) 
    cout << "*stacks = " << *stacks
         << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n\n";

    tell();

    return 0;
}
