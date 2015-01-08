//Ethan Larkham
//Exercise 3-12-2014
//Problem 2
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

string whatMonth(int);

int main(){
	int largest, smallest, largestIndex, smallestIndex;
	double average;
	string line;
	double months[11];
	
	ifstream year("months");
	for (int i=0; i<12;i++){	
		getline(year,line);
		months[i]=atof(line.c_str());
	}
	year.close();	

	largest=0;
	average=0;
	for (int i=0; i<10;i++){
		if (months[i]>largest){
			largest=months[i];
			largestIndex=i;
		}
		average+=months[i];
	}
	average/=10;
	smallest=largest;
	for (int i=0; i<10;i++){
                if (months[i]<smallest){
                        smallest=months[i];
			smallestIndex=i;
                }
        }
		
	cout<<"Month with most  rain: "<<whatMonth(largestIndex)<<endl;
	cout<<"Month with least rain: "<<whatMonth(smallestIndex)<<endl;
	cout<<"Average Value: "<<average<<endl;
}

string whatMonth(int month){
	switch (month){
	
	case 0:
		return "January";
		break;
	case 1:
		return "February";
		break;
	case 2:
		return "March";
		break;
	case 3:
		return "April";
		break;
	case 4:
		return "May";
		break;
	case 5: 
		return "June";
		break;
	case 6:
		return "July";
		break;
	case 7:
		return "August";
		break;
	case 8:
		return "September";
		break;
	case 9:
		return "October";
		break;
	case 10:
		return "November";
		break;
	case 11:
		return "December";
		break;
	defualt:
		return "Dunno";
		break;
	}
}	
/*
Month with most  rain: February
Month with least rain: March
Average Value: 36.7
*/
