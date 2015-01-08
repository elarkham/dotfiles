//Ethan Larkham
//Lab 4-15
//Problem 1
#include <iostream>
#include "TBinaryTree.h"
using namespace std;

int main(){
	TBinaryTree<int> tree;
	tree.insertNode(45);
	tree.insertNode(78);
	tree.insertNode(38);
	tree.insertNode(17);
	tree.insertNode(9);
	tree.insertNode(57);
	tree.insertNode(88);
	tree.insertNode(2);
	tree.insertNode(19);
	tree.insertNode(51);
	tree.displayInOrder();
	tree.displayPreOrder();
	tree.displayPostOrder();
	
	cout<<endl<<"~Values 57 and 38 removed~"<<endl;
	tree.remove(57);
	tree.remove(38);

	tree.displayInOrder();
	tree.displayPreOrder();
	tree.displayPostOrder();
}
/*
   The tree in order 
   2
   9
   17
   19
   38
   45
   51
   57
   78
   88

   The tree pre-order 
   45
   38
   17
   9
   2
   19
   78
   57
   51
   88

   The tree post-order 
   2
   9
   19
   17
   38
   51
   57
   88
   78
   45

   ~Values 57 and 38 removed~

   The tree in order 
   2
   9
   17
   19
   45
   51
   78
   88

   The tree pre-order 
   45
   17
   9
   2
   19
   78
   51
   88

   The tree post-order 
   2
   9
   19
   17
   51
   88
   78
   45
*/
