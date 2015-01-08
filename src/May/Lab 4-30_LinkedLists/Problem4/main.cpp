//Ethan Larkham
//Exercise 4-30-2014
//Problem 4
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

	num.prependNode(500);
	num.displayList();
}
/*
500 --> 5.6 --> 7.5 --> 12.8 --> 24.2 --> 31.6 --> 34.8 --> 44.5 --> 78.1 --> 78.5 --> 112.9
*/
