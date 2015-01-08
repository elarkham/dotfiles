//Ethan Larkham
//Lab 4-8
//Problem 1
//April 11, 2014
#include <iostream>
using namespace std;

int main(){
	int i;
	double d;
	char c;
	
	int *pI;
	double *pD;
	char *pC;

	pI=&i;
	pD=&d;
	pC=&c;

	*pI=5;
	*pD=0.5;
	*pC='F';

	cout<<"i= "<<*pI<<endl<<"d= "<<*pD<<endl<<"c= "<<*pC<<endl;

	cout<<endl<<"i= "<<i<<endl<<"d= "<<d<<endl<<"c= "<<c<<endl;

	
}
/*
i= 5
d= 0.5
c= F

i= 5
d= 0.5
c= F
*/
