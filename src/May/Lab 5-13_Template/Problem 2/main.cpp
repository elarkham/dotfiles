//Ethan Larkham
//Lab 5-13
//Problem 2
#include <iostream>
using namespace std;

template<class T>
T total(T);

int main(){
	double test2 = total(5);
	cout<<test2<<endl;
}

template<class T>
T total(T input){
	T total;
	for (T i=0;i<input;i++){
		T userInput;
		cout<<"Enter a value: ";cin>>userInput;
		total+=userInput;
	}
	return total;	
}
/*
   Enter a value: 5
   Enter a value: 5
   Enter a value: 5
   Enter a value: 5
   Enter a value: 5
   25
*/
