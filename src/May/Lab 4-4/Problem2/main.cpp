//Ethan Larkham
//Lab 4-4
//Problem 2
//4-7-2014
#include <iostream>
using namespace std;

int countBits(int);

int main(){
	cout<<"Ones in base2 50: "<<countBits(50)<<endl;
}

int countBits(int base10){
	int base2=base10;
	int ones=0;
	while (base2!=0){
		if ((base2%2)!=0){
			ones++;
		}
		base2/=2;
	}
	return ones;
}
//Ones in base2 50: 3

