//Ethan Larkham
//Problem 4
#include<iostream>
using namespace std;

void replace(int&,int&);

int main(){
	int num1=5;
	int num2=10;
	replace(num1,num2);
	cout<<"Num1: "<<num1<<endl;
	cout<<"Num2: "<<num2<<endl;
}

void replace(int& val1,int& val2){
	int buffer1=val1+val2;
	int buffer2=val1-val2;

	val1=buffer1;
	val2=buffer2;
}
/*
Num1: 15
Num2: -5
*/
