// TBinaryTree.cpp
// Implementation file for the TBinaryTree class
#include <iostream>
#include "TBinaryTree.h"
using namespace std;

template<class T>
TBinaryTree<T>::TBinaryTree()		// Constructor
{ 
	root = NULL; 
}

template<class T>
TBinaryTree<T>::~TBinaryTree()	// Destructor
{ 
	destroySubTree(root); 
}

//*************************************************************
// insert accepts a TreeNode pointer and a pointer to a node. *
// The function inserts the node into the tree pointed to by  *
// the TreeNode pointer. This function is called recursively. *
//*************************************************************

template<class T>
void TBinaryTree<T>::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
	if (nodePtr == NULL)
		nodePtr = newNode;						// Insert the node.
	else if (newNode->value < nodePtr->value)
		insert(nodePtr->left, newNode);			// Search the left branch
	else 
		insert(nodePtr->right, newNode);		// Search the right branch
}


//**********************************************************
// insertNode creates a new node to hold num as its value, *
// and passes it to the insert function.                   *
//**********************************************************

template<class T>
void TBinaryTree<T>::insertNode(T num)
{
	TreeNode *newNode;		// Pointer to a new node.

	// Create a new node and store num in it.
	newNode = new TreeNode;
	newNode->value = num;
	newNode->left = newNode->right = NULL;
	// Insert the node.
	insert(root, newNode);
}

//***************************************************
// destroySubTree is called by the destructor. It   *
// deletes all nodes in the tree.                   *
//***************************************************

template<class T>
void TBinaryTree<T>::destroySubTree(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		if (nodePtr->left)
			destroySubTree(nodePtr->left);
		if (nodePtr->right)
			destroySubTree(nodePtr->right);
		delete nodePtr;
	}
}

//***************************************************
// searchNode determines if a value is present in   *
// the tree. If so, the function returns true.      *
// Otherwise, it returns false.                     *
//***************************************************

template<class T>
bool TBinaryTree<T>::searchNode(T num)
{
	TreeNode *nodePtr = root;

	while (nodePtr)
	{
		if (nodePtr->value == num)
			return true;
		else if (num < nodePtr->value)
			nodePtr = nodePtr->left;
		else
			nodePtr = nodePtr->right;
	}
	return false;
}

//**********************************************
// remove calls deleteNode to delete the       *
// node whose value member is the same as num. *
//**********************************************

template<class T>
void TBinaryTree<T>::remove(T num)
{
	deleteNode(num, root);
}

//********************************************
// deleteNode deletes the node whose value   *
// member is the same as num.                *
//********************************************

template<class T>
void TBinaryTree<T>::deleteNode(T num, TreeNode *&nodePtr)
{
	if (num < nodePtr->value)
		deleteNode(num, nodePtr->left);
	else if (num > nodePtr->value)
		deleteNode(num, nodePtr->right);
	else
		makeDeletion(nodePtr);
}

//***********************************************************
// makeDeletion takes a reference to a pointer to the node  *
// that is to be deleted. The node is removed and the       *
// branches of the tree below the node are reattached.      *
//***********************************************************

template<class T>
void TBinaryTree<T>::makeDeletion(TreeNode *&nodePtr)
{
	TreeNode *tempNodePtr;	// Temporary pointer, used in reattaching the
	                        // left subtree.

	if (nodePtr == NULL)
		cout << "Cannot delete empty node.\n";
	else if (nodePtr->right == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left;	// Reattach the left child
		delete tempNodePtr;
	}
	else if (nodePtr->left == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right;	// Reattach the right child
		delete tempNodePtr;
	}
	// If the node has two children.
	else
	{
		// Move one node the right.
		tempNodePtr = nodePtr->right;
		// Go to the end left node.
		while (tempNodePtr->left)
			tempNodePtr = tempNodePtr->left;
		// Reattach the left subtree.
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		// Reattach the right subtree.
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}

//****************************************************************
// The displayInOrder member function displays the values        *
// in the subtree pointed to by nodePtr, via inorder traversal.  *
//****************************************************************

template<class T>
void TBinaryTree<T>::displayInOrder(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}

//****************************************************************
// The displayPreOrder member function displays the values       *
// in the subtree pointed to by nodePtr, via preorder traversal. *
//****************************************************************

template<class T>
void TBinaryTree<T>::displayPreOrder(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);		
		displayPreOrder(nodePtr->right);
	}
}

//****************************************************************
// The displayPostOrder member function displays the values      *
// in the subtree pointed to by nodePtr, via postorder traversal.*
//****************************************************************

template<class T>
void TBinaryTree<T>::displayPostOrder(TreeNode *nodePtr)
{
	if (nodePtr)
	{
		displayPostOrder(nodePtr->left);		
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}

// Overloaded display functions that pass the root to their overloaded counterparts
template<class T>
void TBinaryTree<T>::displayInOrder()
{	
	cout << "\nThe tree in order " << endl;
	displayInOrder(root); 
}

template<class T>
void TBinaryTree<T>::displayPreOrder()
{	
	cout << "\nThe tree pre-order " << endl;
	displayPreOrder(root); 
}

template<class T>
void TBinaryTree<T>::displayPostOrder()
{	
	cout << "\nThe tree post-order " << endl;
	displayPostOrder(root); 
}

