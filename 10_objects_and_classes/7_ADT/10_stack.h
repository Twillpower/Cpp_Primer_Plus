// stack.h -- 类定义堆栈ADT
#ifndef __STAKC_H__
#define __STACK_H__

typedef unsigned long Item;

class Stack
{
	private:
		enum {MAX = 10};  // 类特有的常量
		Item items[MAX];  // 保存栈项
		int top;  // 栈顶项的索引
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		// 如果堆栈已满push()返回false，否则返回true
		bool push(Item &item);  // 将项目添加到堆栈中
		// 如果堆栈已经为空，pop()返回false，否则返回true
		bool pop(Item &item);  // 弹出top到item
};


#endif