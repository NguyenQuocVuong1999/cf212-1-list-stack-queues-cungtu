#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "node.h"
using namespace std;
template<class T>

class Stack
{
private:
	Node<T> *stack;
public:
	Stack()
	{
		stack = 0;
	};
	void pushStack(T value)
	{
		Node <T> *n = new Node<T>;
		n->data = value;
		n->next = 0;
		if(Stack == 0)
		{
			stack = n;
		}
		else
		{
			Node<T> *p = stack;
			while( p->next != 0 )
			{
				p = p->next;
			}
			p->next = n;
		}	
	};
	T popStack()
	{ Node<T> *q = stack;
    while(q->next!=null)
      {
        p=p->next;
      }
		delete q;
		return stack;
	};
	bool IsEmpty()const
	{
		return stack == 0;
	};
};

#endif
