//Ethan Larkham
//Lab 4-4
//Problem1
//April 6 2014
#include <iostream>
using namespace std;

int main(){
	int i=10;
	while (i<100){
		int d=((i/10)+(i%10))*2;
		if (d==i){cout<<i<<endl;}
		i++;
	}
}
//18
