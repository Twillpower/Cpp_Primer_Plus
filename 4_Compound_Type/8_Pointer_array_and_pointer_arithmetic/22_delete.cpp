/* 自动存储: 
 * 在函数内部定义的常规变量使用自动存储空间，被称为自动变量 (automatic variable) , 
 * 这意味着它们 在所属的函数被调用时自动产生，在该函数结束时消亡
 * 
 * 静态存储:
 * 静态存储是整个程序执行期间都存在的存储方式。 使变量成为静态的方式有两种： 
 * 一种是在函数外面定义它；另一种是在声明变量时使用关键字 static:
 * 
 * 动态存储:
 * new 和 delete 运算符提供了一种比自动变量和静态变量更灵活的方法。 
 * 它们管理了一个内存池，这在 C++ 中被称为自由存储空间 (free store) 或堆 (heap)
 * new 和 delete 让您能够在一个函数中分配内存，而在另一个函数中释放它
 * 数据的生命周期不完全受程序或函数的生存时间控制
 * 即使程序运行结束，内存也不会被释放，除非使用delete释放
 * 所以在使用时要谨慎，防止内存泄漏
 * 在栈中，自动添加和删除机制使得占用的内存总是连续的， 但new 和 delete 的相互影响可能导致占用的自由存储区不连续
 * 
*/
#include <iostream>
#include <cstring>

using namespace std;

char *getname(void);

int main(int argc, char const *argv[])
{
    char *name;
    
    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete [] name;

    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete [] name;

    return 0;
}

// 该函数返回一个指向输入字符串的指针
// 该函数将输入读入到一个大型的临时数组中，然后使用 new[]创建一个刚好能够存储该输入字符串的内存块，并返回一个指向该内存块的指针
char *getname()
{
    // temp 数组仅当 getname() 函数活动时存在。当程序控制权回到 main()时， temp 使用的内存将自动被释放
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}