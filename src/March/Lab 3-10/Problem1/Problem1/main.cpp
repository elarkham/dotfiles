//Ethan Larkham
//1-28-2014
//Lab Exercise 1/28/2014
//Problem 1

#include <iostream>
#include <iomanip>
#include "fraction.h"
using namespace std;

int main(){
	Fraction one(5,10);
	one.print();
	one.reduce();
	one.print();

	Fraction two(8,17);
	two.print();

	cout<<"1/2 + 8/17"<<endl;
	Fraction three(one.add(two));
	three.print();

	cout<<"1/2 - 8/17"<<endl;
	Fraction four(one.subtract(two));
	four.print();
	
	cout<<"1/2 * 8/17"<<endl;
	Fraction five(one.multiply(two));
	five.print();

	cout<<"1/2 / 8/17"<<endl;
	Fraction six(one.divide(two));
	six.print();

	cout<<six.getDecimalEquivalent()<<endl;
}