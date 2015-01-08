// Specification file for the NumberList class
#ifndef NUMBERLIST_H
#define NUMBERLIST_H

template <class T>
class NumberList
{
   private:
      // Declare a structure for the list
      struct ListNode
      {
         T value;
         struct ListNode *next;
      }; 
      ListNode *head;   // List head pointer

   public:
      NumberList();      // Constructor
      ~NumberList();    // Destructor
      void prependNode(T);
      void displayBackwards();
      void destroyList();
      void reverseList();
      void copyList(NumberList<T>&);
      void appendNode(T);
      void insertNode(T);
      void deleteNode(T);
      void displayList();
      T getNode();
      bool isEmpty();
};
#include "NumberList.cpp"
#endif 

