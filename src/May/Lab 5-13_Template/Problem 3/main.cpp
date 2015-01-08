//Ethan Larkham
//Lab Exercise 5-13
//Problem 3
#include <iostream>
#include "NumberList.h"
using namespace std;

int main(){
        NumberList<double> list;

		list.appendNode(2.3);
		list.appendNode(4.1);
		list.appendNode(6.7);
		cout<<"Here are the inital values:\n";
		list.displayList();
		cout<<endl;

		cout<<"Now inserting the value 5.3.\n";
		list.insertNode(5.3);
		cout<<"Here are the nodes now.\n";
		list.displayList();
		cout<<endl;

		cout<<"Now deleting a node.\n";
		list.deleteNode(4.1);
		cout<<"Here are the nodes left.\n";
		list.displayList();
		return 0;
}
/*
   Here are the inital values:
   2.3 --> 4.1 --> 6.7

   Now inserting the value 5.
   Here are the nodes now.
   2.3 --> 4.1 --> 5.3 --> 6.7

   Now deleting a node.
   Here are the nodes left.
   2.3 --> 5.3 --> 6.7
*/

