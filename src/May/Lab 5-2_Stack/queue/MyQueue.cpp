#include <iostream>
#include "MyQueue.h"
#include "NumberList.h"

MyQueue::MyQueue(){	 
}	

void MyQueue::enqueue(double input){
	size++;
	queue.appendNode(input);
}
double MyQueue::dequeue(){
	size--;
	return queue.getNode();
}
bool MyQueue::checkEmpty(){
		if (size<=0){
			return true;
		}else{
			return false;
		}	
}
void MyQueue::display(){
	queue.displayList();
}
