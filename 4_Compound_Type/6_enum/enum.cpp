#include <iostream>
// 让 spectrum 成为新类型的名称； spectrum 被称为枚举 (enumeration), 就像 struct 变量被称为结构 一样。
// 将 red 、 orange、 yellow 等作为符号常量，它们对应整数值 0 ~ 7, 这些常量叫作枚举量(enumerator) 。
enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};

// 可以使用赋值运算符来显式地设置枚举量的值：
enum bits{one = 1, two= 2, four= 4, eight= 8};

// 指定的值必须是整数。也可以只显式地定义其中一些枚举量的值：
// frrst 在默认情况下为 0。后面没有被初始化的枚举量的值将比其前面的枚举量大 1 。因此， third的值为 101 。
enum bigstep{first, second= 100, third};

// 取值范围的定义如下。首先，要找出上限，需要知道枚举量的最大值。找到大于这个最大值的、最小
// 的 2 的幕，将它减去 1 得到的便是取值范围的上限
// 例如，前面定义的 bigstep 的最大值枚举值是 101 。 在 2 的幕中，比这个数大的最小值为 128, 因此取值范围的上限为 127。
// 枚举量的最小值。如果它不小于 0, 则取值范围的下限为 0;

int main(int argc, char const *argv[])
{
    using namespace std;
    // 可以通过显式地指定整数值来覆盖默认值
    spectrum band;

    // 在不进行强制类型转换的情况下，只能将定义枚举时使用的枚举量赋给这种枚举的变量，
    // 把非 enum 值赋给 enum 变量视为错误。
    // 对于枚举，只定义了赋值运算符。具体地说，没有为枚举定义算术运算：
    band = blue;
    cout << band << endl;

    // 枚举量是整型，可被提升为 int 类型，但 int 类型不能自动转换为枚举类型；
    int color = blue;
    cout << color << endl;

    color= 3 + red;
    cout << color << endl;

    // 如果 int 值是有效的，则可以通过强制类型转换，将它赋给枚举变量：
    band= spectrum(3);
    cout << band << endl;

    // 如果打算只使用常量，而不创建枚举类型的变量，则可以省略枚举类型的名称，
    enum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
    cout << yellow << endl;

    bigstep bigs = third;
    cout << bigs << endl;

    return 0;
}
