/* 如果给 cout 提供一个字符的地址，则它将从该字符开始打印，直到遇到空字符为止。
 * cout << "Hello world!";
 * 用引号括起的字符串像数组名一样，也是第一个元素的地址
 * 不会将整个字符串发送给 cout, 而只是发送该字符串的地址
 * 给cout传递数据的首地址，将数据存入缓冲区
*/ 
#include <iostream>
#include <cstring>

/* 指针常量——指针类型的常量（int *const p）
 * 本质上一个常量，指针用来说明常量的类型，表示该常量是一个指针类型的常量。
 * 在指针常量中，指针自身的值是一个常量，不可改变，始终指向同一个地址。在定义的同时必须初始化。用法如下：
 * int a = 10, b = 20;
 * int * const p = &a;
 * *p = 30; // p指向的地址是一定的，但其内容可以修改
 * 
 * 常量指针——指向“常量”的指针（const int *p， int const *p）
 * 常量指针本质上是一个指针，常量表示指针指向的内容，说明该指针指向一个“常量”。
 * 在常量指针中，指针指向的内容是不可改变的，指针看起来好像指向了一个常量。用法如下：
 * int a = 10, b = 20;
 * const int *p = &a;
 * p = &b; // 指针可以指向其他地址，但是内容不可以改变
 * 
*/

int main(int argc, char const *argv[])
{
    using namespace std;
    char animal[20] = "bear";
    // 将"wren"首地址给bird
    // 指向常量的指针：指针可指向其它地方，不能通过bird指针修改它所指向的对象
    const char *bird = "wren";
    char *ps;

    cout << animal << " and " << bird << "\n";

    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy(): \n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    // strcpy(food, "a picnic basket filled with many goodies");
    // 函函数将字符串中剩余的部分复制到数组后面的内存字节中，这可能会覆盖程序正在使用的其他内存
    // 使用 strncpy()。该函数还接受第 3 个参数－~要复制的最大字符数。
    // 函数在到达字符串结尾之前，目标内存已经用完，则它将不会添加空字符

    ps = new char[strlen(animal) + 1];
    // strcpy()函数接受 2 个参数。第一个是目标地址，第二个是要复制的字符串的地址
    strcpy(ps, animal);
    cout << "After using strcpy(): \n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete [] ps;

    return 0;
}
