// TBinaryTree.h
#ifndef TBinaryTree_H
#define TBinaryTree_H

template <class T>
class TBinaryTree
{
	private:
		struct TreeNode
		{
			T value;
			TreeNode *left;
			TreeNode *right;
		};

		TreeNode *root;
		void insert(TreeNode *&, TreeNode *&);
		void destroySubTree(TreeNode *);
		void deleteNode(T, TreeNode *&);
		void makeDeletion(TreeNode *&);
		void displayInOrder(TreeNode *);
		void displayPreOrder(TreeNode *);
		void displayPostOrder(TreeNode *);
	public:
		TBinaryTree();		// Constructor
		~TBinaryTree();	// Destructor
		void insertNode(T);
		bool searchNode(T);
		void remove(T);
		void displayInOrder();
		void displayPreOrder();
		void displayPostOrder();
};
#include "TBinaryTree.cpp"
#endif
