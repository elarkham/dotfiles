//Ethan Larkham
//Lab 4-7
//Problem 1
//April 9, 2014
#include <iostream>
#include <string>
using namespace std;
string convertBinary(int);

int main(){
	string input;
	cout<<"Enter a string to have it converted to binary: ";
	cin>>input;
	for (int i=0; i<input.size();i++){
		int a=input[i];
		cout<<convertBinary(a)<<endl;
	}
}

string convertBinary(int base10){
	int base2=base10;
	string binary ="";
	string forwBinary ="";
	//Gets the ones
	while (base2!=0){
		if ((base2%2)!=0){
			binary+="1";
		}else{binary+="0";}

		base2/=2;
	}
	//Makes it go forwards
	for (int i=binary.size()-1; i>=0;i--){
                char a=binary[i];
                forwBinary+=a;
        }
	//Makes sure its eight bits
	if (forwBinary.size()!=8){
		int difference=(forwBinary.size()-8)*-1;
		for (int i=0;i<difference;i++){
				forwBinary+="0";	
			}
	}	
	//Even Parity
	forwBinary+="0";
	return forwBinary;
}
/*
Enter a string to have it converted to binary: NewHampshire!
100111000
110010100
111011100
100100000
110000100
110110100
111000000
111001100
110100000
110100100
111001000
110010100
100001000
*/
