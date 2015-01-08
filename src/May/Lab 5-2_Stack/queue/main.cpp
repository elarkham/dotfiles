//Ethan Larkham
//Lab 5-2
//Problem 2: Queue
#include <iostream>
#include "MyQueue.h"
using namespace std;

int main(){
		MyQueue test;
		test.enqueue(5);
		test.enqueue(58);
		test.enqueue(55);
		test.enqueue(235);
		test.enqueue(123);
		test.enqueue(34);
		test.enqueue(234);
		test.display();
		
		cout<<test.dequeue()<<" dequeued "<<endl;
		test.display();
		cout<<test.dequeue()<<" dequeued"<<endl;
		test.display();
		cout<<test.dequeue()<<" dequeued"<<endl;
		test.display();
		cout<<test.dequeue()<<" dequeued"<<endl;
		test.display();
		cout<<test.dequeue()<<" dequeued"<<endl;
		test.display();
		cout<<test.dequeue()<<" dequeued"<<endl;
		test.display();
		cout<<test.dequeue()<<" dequeued"<<endl;
		test.display();
		cout<<test.checkEmpty()<<endl;
}
/*
   5 --> 58 --> 55 --> 235 --> 123 --> 34 --> 234
   5 dequeued 
   58 --> 55 --> 235 --> 123 --> 34 --> 234
   58 dequeued
   55 --> 235 --> 123 --> 34 --> 234
   55 dequeued
   235 --> 123 --> 34 --> 234
   235 dequeued
   123 --> 34 --> 234
   123 dequeued
   34 --> 234
   34 dequeued
   234
   234 dequeued
   List is empty
   0
*/
