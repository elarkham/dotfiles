// Specification file for the NumberList class
#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
   private:
      // Declare a structure for the list
      struct ListNode
      {
         double value;
         struct ListNode *next;
      }; 
      ListNode *head;   // List head pointer

   public:
      NumberList();      // Constructor
      ~NumberList();    // Destructor
      void prependNode(double);
      void displayBackwards();
      void destroyList();
      void reverseList();
      void copyList(NumberList&);
      void appendNode(double);
      void insertNode(double);
      void deleteNode(double);
      void displayList();
      double getNode();
};
#endif
