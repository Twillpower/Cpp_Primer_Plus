// 如果将一个值赋给不存在的元素 months[101], 编译器并不会指出错误。 
// 但是程序运行后，这种赋值可能引发问题，它可能破坏数据或代码，也可能导致程序异常终止。
// 声明数组、给数组元素赋值以及初始化数组
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};  // 或者static int yamcosts[3]
    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;    //如果将 sizeof运算符用于数组名，得到的将是整个数组中的字节数
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";

    return 0;
}
