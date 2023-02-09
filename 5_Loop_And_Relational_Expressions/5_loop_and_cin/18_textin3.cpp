// 文件尾(EOF), 
// 同17_tetxin2.cpp中的'#'一样，
// 读取到文件尾(EOF), 停止
// 不同编程环境设置EOF的方法不同

/* 检测到 EOF 后， cin 将两位 (eofbit 和 failbit) 都设置为 1
 * 可以通过成员函数 eof()来查看 eofbit 是否被设置
 * 如果检测到 EOF, 则 cin.eof( )将返回 bool 值 true, 否则返回 false
 * 如果 eofbit 或 failbit 被设置为 1 , 则 fail()成员函数返回 true, 否则返回 false 
 * eof()和 fail()方法报告最近读取的结果
 * 因此应将 cin.eof()或 cin.fail()测试放在读取后
*/

// cin 方法检测到 EOF 时，将设置 cin 对象中一个指示 EOF 条件的标记。 设置这个标记后，
// cin 将不读取输入，再次调用 cin 也不管用 。
// cin.clear()方法可能清除 EOF 标记，使输入继续进行
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    char ch;
    int count = 0;

    cin.get(ch);
    // 检测到 EOF 后， eofbit 和 failbit 都设置为 1， 返回 true
    // 即未检测到EOF时，cin.fail()返回false, 再次循环，直到返回true, 检测到 EOF
    while (cin.fail() == false)  // Linux下，按下ctrl+D结束循环
    {
        cout << ch;
        ++count;
        cin.get(ch);  // 尝试读取其它字符
    }
    cout << endl << count << " characters read\n";
    

    return 0;
}
