//Ethan Larkham
//Exercise 4-30-2014
//Problem 5
#include <iostream>
#include "NumberList.h"
using namespace std;

int main(){
	NumberList num;
	num.insertNode(5.6);
	num.insertNode(7.5);
	num.insertNode(12.8);
	num.insertNode(34.8);
	num.insertNode(24.2);
	num.insertNode(78.1);
	num.insertNode(78.5);
	num.insertNode(112.9);	
	num.insertNode(31.6);
	num.insertNode(44.5);

	num.prepend(500)
	num.displayBackwards();
}
/*
112.9<-78.5<-78.1<-44.5<-34.8<-31.6<-24.2<-12.8<-7.5<-5.6<-500
*/
