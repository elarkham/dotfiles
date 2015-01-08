//Ethan Larkham
//Lab 4-4
//Problem 3
//4-8-2014
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x=1;
	bool tf=false;
	while (abs(x-(2.0/x))>0.00001){
		x=(x+(2.0/x))/2;
	}
	cout<<"Manual: "<<x<<endl;
	cout<<"Auto: "<<sqrt(2)<<endl;
}
/*
Manual: 1.41422
Auto: 1.41421
*/
