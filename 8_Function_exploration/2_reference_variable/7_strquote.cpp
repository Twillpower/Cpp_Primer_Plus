#include <iostream> 
#include <string>

using namespace std;

string version1(const string & s1, const string & s2); 
const string &version2(string & s1, const string & s2); 
const string &version3 (string & s1, const string & s2);

int main(int argc, char const *argv[])
{
    string input;
    string copy;
    string result;

    cout << "Enter a string: ";
    getline(cin, input);
    copy = input;
    cout << "Your string as entered: " << input << endl;
    result = version1(input, "***" ) ; 
    cout << "Your string enhanced: "<< result << endl; 
    cout << "Your original string: " << input << endl;

    result = version2(input, "***" );
    cout << "Your string enhanced: "<< result << endl; 
    cout << "Your original string: " << input << endl;

    cout << "Resetting original string. \n"; 
    input = copy; 
    result = version3(input, "@@@" ) ; 
    cout << "Your string enhanced: " << result << endl; 
    cout << "Your original string : "<< input << endl;

    return 0;
}

string version1(const string & s1, const string & s2)
{
    string temp;
    
    temp = s2 + s1 + s2;
    return temp;
}

const string &version2(string & s1, const string & s2)
{
    s1 = s2 + s1 + s2;
    return s1;
}

const string &version3 (string & s1, const string & s2)
{
    string temp;

    temp = s2 + s1 + s2;
    // 应避免返回函数终止时不再存在的内存单元引用
    return temp;  // 该函数返回一个指向临时变量的引用，函数运行完毕后它将不再存在
}