//Ethan Larkham
//Problem5
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int total=3;
	int prev=1;
	int current=2;
	
	while (current<=4000000){
		int buffer=current;
		current=current+prev;
		prev=buffer;
		total+=current;
	}
	cout<<total<<endl;	
}
//14930350
