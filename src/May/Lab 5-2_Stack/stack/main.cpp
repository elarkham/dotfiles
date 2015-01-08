//Ethan Larkham
//Lab 5-2
//Problem 1: Stack
#include <iostream>
#include "MyStack.h"
using namespace std;

int main(){
		MyStack test;
		test.push(5);
		test.push(58);
		test.push(55);
		test.push(235);
		test.push(123);
		test.push(34);
		test.push(234);
		test.display();
		
		cout<<test.pop()<<" popped"<<endl;
		test.display();
		cout<<test.pop()<<" popped"<<endl;
		test.display();
		cout<<test.pop()<<" popped"<<endl;
		test.display();
		cout<<test.pop()<<" popped"<<endl;
		test.display();
		cout<<test.pop()<<" popped"<<endl;
		test.display();
		cout<<test.pop()<<" popped"<<endl;
		test.display();
		cout<<test.pop()<<" popped"<<endl;
		test.display();
		cout<<test.checkEmpty()<<endl;
}
/*
   234 --> 34 --> 123 --> 235 --> 55 --> 58 --> 5
   234 popped
   34 --> 123 --> 235 --> 55 --> 58 --> 5
   34 popped
   123 --> 235 --> 55 --> 58 --> 5
   123 popped
   235 --> 55 --> 58 --> 5
   235 popped
   55 --> 58 --> 5
   55 popped
   58 --> 5
   58 popped
   5
   5 popped
   List is empty
   0
*/
