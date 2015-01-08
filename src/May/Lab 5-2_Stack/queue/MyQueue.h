#ifndef MYQUEUE_H
#define MYQUEUE_H
#include "NumberList.h"

class MyQueue{
	private:
		NumberList queue;
		int size;
	public:
		MyQueue();
		void enqueue(double);
		double dequeue();
		bool checkEmpty();
		void display();
};
#endif
		
