//Ethan Larkham
//Lab 3-27
//Problem 2
//3-31-2014
#include <iostream>
using namespace std;

int main(){
	double x = 0.5;
	double term21;
	double term31;
	double term41;
	for (int i=1;i<=42;i++){
		x*=2;
		//cout<<"Term "<<i<<": "<<x<<endl; 
		if (i==21){term21=x;}
		if (i==31){term31=x;}
		if (i==41){term41=x;}
	}
	cout<<"The 21 term is "<<term21<<endl;
	cout<<"The 31 term is "<<term31<<endl;
	cout<<"The 41 term is "<<term41<<endl;
}
/*
The 21 term is 1.04858e+06
The 31 term is 1.07374e+09
The 41 term is 1.09951e+12
*/

