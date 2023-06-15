// stacker.cpp -- 测试Stack类
#include <iostream>
#include "10_stack.h"
#include <cctype>  // or ctype.h

using namespace std;

int main(void)
{
	char ch;
	unsigned long po;
	Stack st;  // 创建一个空堆栈

	cout << "Please etner A to push to stack, \n"
	     << "P to pop from stack, Q to quit.\n";

	while(cin >> ch && toupper(ch) != 'Q') // toupper() 在cctype中
	{
		while(cin.get() != '\n')
			continue;

        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }

		switch(ch)
		{
			case 'A':
			case 'a':
				cout << "Enter a number you want to push to stack:\n";
				cin >> po;
				if(st.isfull())
					cout << "Stack already full" << endl;
				else
					st.push(po);
				break;
			case 'P':
			case 'p':
				if(st.isempty())
					cout << "Stack is empty" << endl;
				else
				{
					st.pop(po);
					cout << po << " is poped" << endl;
				}
				break;
		}
		cout << "Please etner A to push to stack, \n"
	     	     << "P to pop from stack, Q to quit.\n";
	}
    cout << "Bye\n";
	return 0;
}
