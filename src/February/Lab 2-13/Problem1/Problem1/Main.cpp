//Ethan Larkham
//2-20-2014
//Lab Exercise 2/13/2014
//Problem 1

#include <iostream>
#include <iomanip>
using namespace std;

void getValues(int &,int &, int &, int &, int &);
int findLowest(int, int, int, int, int);
double calcAverage(int,int,int,int,int);

int main(){
	int test1,test2,test3,test4,test5;

	getValues(test1,test2,test3,test4,test5);
	
	cout<<"The Average test score minus the lowest is "<<calcAverage(test1,test2,test3,test4,test5)<<endl;

}

void getValues(int &test1, int &test2, int &test3, int &test4, int &test5){
	cout<<"Test Score 1: ";
	cin>>test1;
		
	cout<<"Test Score 2: ";
	cin>>test2;

	cout<<"Test Score 3: ";
	cin>>test3;

	cout<<"Test Score 4: ";
	cin>>test4;

	cout<<"Test Score 5: ";
	cin>>test5;
}

int findLowest(int test1, int test2, int test3, int test4, int test5){
	int lowest=test1;
	if (test2<lowest){
		lowest=test2;
	}
	if (test3<lowest){
		lowest=test3;
	}
	if (test4<lowest){
		lowest=test4;
	}
	if (test5<lowest){
		lowest=test5;
	}
	return lowest;
}

double calcAverage(int test1, int test2, int test3,int test4,int test5){
	double average;
	int lowest=findLowest(test1,test2,test3,test4,test5);

	average=(test1 + test2 + test3 + test4 + test5 - lowest)/4;
	return average;
}

/*
Test Score 1: 90
Test Score 2: 85
Test Score 3: 65
Test Score 4: 5
Test Score 5: 100
The Average test score minus the lowest is 85
Press any key to continue . . .
*/
