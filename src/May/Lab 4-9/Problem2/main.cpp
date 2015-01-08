//Ethan Larkham
//Lab 4-9
//Problem 2
//April 14, 2014
#include <iostream>
using namespace std;

void swap(int,int);
void swap2(int *,int *);
void swap3(int &,int &);

int main(){
	int ex1=5;
	int ex2=6;
	
	int *pEx1, *pEx2;
	pEx1=&ex1;
	pEx2=&ex2;

	swap(ex1,ex2);
	swap2(pEx1,pEx2);	
	swap3(ex1,ex2);
}

void swap (int num1, int num2){
        cout<<"---Swapping with Values---"<<endl;
        cout<<"Before = ("<<num1<<","<<num2<<")"<<endl;
        int buffer=num1;
        num1=num2;
        num2=buffer;
        cout<<"After = ("<<num1<<","<<num2<<")"<<endl<<endl;
}

void swap2(int *pNum1, int *pNum2){
	cout<<"---Swapping with Pointers---"<<endl;
        cout<<"Before = ("<<pNum1<<","<<pNum2<<")"<<endl;
	cout<<"         ("<<*pNum1<<","<<*pNum2<<")"<<endl;
        int *buffer;
	buffer=pNum1;
        pNum1=pNum2;
        pNum2=buffer;
        cout<<"After = ("<<pNum1<<","<<pNum2<<")"<<endl;
	cout<<"        ("<<*pNum1<<","<<*pNum2<<")"<<endl<<endl;
}

void swap3(int &rNum1, int &rNum2){
	cout<<"---Swapping with Refrence---"<<endl;
	cout<<"Before = ("<<rNum1<<","<<rNum2<<")"<<endl;
        int buffer=rNum1;
        rNum1=rNum2;
        rNum2=buffer;
	cout<<"After = ("<<rNum1<<","<<rNum2<<")"<<endl<<endl;
}
/*
---Swapping with Values---
Before = (5,6)
After = (6,5)

---Swapping with Pointers---
Before = (0x7fff69ae34fc,0x7fff69ae34f8)
         (5,6)
After = (0x7fff69ae34f8,0x7fff69ae34fc)
        (6,5)

---Swapping with Refrence---
Before = (5,6)
After = (6,5)
*/
