//Ethan Larkham
//Lab 3-19
//Problem1
//3-20-2014

#include <iostream>
using namespace std;

bool arraySearch(int [],int);

int main(){
	int accountNum[]={5658845,4520125,7895122,8777541,8451277,1302850,8080152,4562555,5552012,5050552,7825877,1250255,1005231,654231,3852085,7576651,7881200,4581002
};
	int userInput;

	cout<<"Enter the 7 digit account number: ";cin>>userInput;
	if (arraySearch(accountNum,userInput)==true){
		cout<<"Number is valid."<<endl;	
	}else{
		cout<<"Number is Invalid."<<endl;
	}

}

bool arraySearch(int input[],int search){
	bool found=false;
	for (int i=0; i<18;i++){
		if(input[i]==search){
			found=true;
		}
	}
	return found;
}
/*
Enter the 7 digit account number: 5555555 
Number is Invalid.
*/

/*
Enter the 7 digit account number: 1250255
Number is valid.
*/
