//Ethan Larkham
//Lab 4-7
//Problem 2
//April 10, 2014
#include <iostream>
#include <string>
using namespace std;
bool isValidUPC(int []);

int main(){
	int code[]={0,7,2,0,4,3,0,0,0,1,8,7};
	if (isValidUPC(code)==true){
		cout<<"Code is Valid"<<endl;
	}else{
		cout<<"Code is Invalid"<<endl;
	}
}

bool isValidUPC(int UPC[]) {
	int odd=0;
	int even=0;
	for(int i=0; i<12;i++){
		if ((i%2)==0){	
		  odd+=UPC[i]*3;
		}else{
		  even+=UPC[i];
		}
	}
	if (((odd+even)%10)==0){return true;}
	else{return false;}
}
//Code is Valid

