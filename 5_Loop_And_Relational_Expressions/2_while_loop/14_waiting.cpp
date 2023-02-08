/* clock():
 * 返回程序开始执行后 所用的系统时间
 * clock()返回时间的单位不一定是秒；
 * 该函数的返回类型在某些系统上可能是 long, 在另一些系统上可能是 unsigned long 或其他类型。
 * 
 * 头文件 ctime (较早的实现中为 time.h )
 * 定义了一个符号常量 —— CLOCKS_PER_SEC,
 * 该常量等于每秒钟包含的系统时间单位数,
 * 将系统时间除以这个值，可以得到秒数
 * 将秒数乘以 CLOCK_PER_SEC, 可以得到以系统时间单位为单位的时间。
 * 
 * ctime 将 clock_t 作为 clock()返回类型的别名
*/
#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    using namespace std;

    cout << "Enter the delay time, in seconds: ";

    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while(clock() - start < delay);
    cout << "done\a\n";

    return 0;
}
