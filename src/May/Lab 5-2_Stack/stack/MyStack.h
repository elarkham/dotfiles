#ifndef MYSTACK_H
#define MYSTACK_H
#include "NumberList.h"

class MyStack{
	private:
		NumberList stack;
		int size;
	public:
		MyStack();
		void push(double);
		double pop();
		bool checkEmpty();
		void display();
};
#endif
		
