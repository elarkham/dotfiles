//Ethan Larkham
//Lab 5-2
//Problem 1: Stack
#include <iostream>
#include "MyStack.h"
#include "NumberList.h"

MyStack::MyStack(){	 
}	

void MyStack::push(double input){
	size++;
	stack.prependNode(input);
}
double MyStack::pop(){
	size--;
	return stack.getNode();
}
bool MyStack::checkEmpty(){
		if (size<=0){
			return true;
		}else{
			return false;
		}	
}
void MyStack::display(){
	stack.displayList();
}
