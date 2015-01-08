//Ethan Larkham
//Exercise 5-1-2014
#include <iostream>
#include "NumberList.h"
using namespace std;

int main(){
	NumberList num, copy;
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

	num.copyList(copy);
	cout<<"Copied List: ";
	copy.displayList();
	num.reverseList();
	cout<<"Reversed List: ";
	num.displayList();
	num.destroyList();
	cout<<"After Origin List is destroyed: ";
	num.displayList();
}
/*
Copied List: 5.6 --> 7.5 --> 12.8 --> 24.2 --> 31.6 --> 34.8 --> 44.5 --> 78.1 --> 78.5 --> 112.9
Reversed List: 112.9 --> 78.5 --> 78.1 --> 44.5 --> 34.8 --> 31.6 --> 24.2 --> 12.8 --> 7.5 --> 5.6
After Origin List is destroyed: List is empty

*/
