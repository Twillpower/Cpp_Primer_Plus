//Stack .cpp ---- 堆栈成员函数
#include "10_stack.h"

Stack::Stack()  // 创建一个空堆栈
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(Item &item)
{
	if(top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item &item)
{
	if(top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
