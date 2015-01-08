//Ethan Larkham
//Lab 4-14
//Problem 4 
//April 16, 2014
#include <iostream>
#include <cstring>
using namespace std;
void count(char*);

int main(){
	char test[100];
	cout<<"Enter some numbers(Max 100 Char): ";cin.getline(test,100);
	count(test);
}
void count(char *words){
	char *pStart, *pEnd;
	int count=0, largest=0, smallest=9;
	pStart=words;
        pEnd=words+(strlen(words)-1);

        while(pStart<=pEnd){
		int convert=((int)*pStart) - 48;
		count+=convert;
		if(convert>largest){
			largest=convert;
		}
		if(convert<smallest){
			smallest=convert;
		}
		pStart++;
        }
	cout<<"Total: "<<count<<endl;
	cout<<"Largest: "<<largest<<endl;	
	cout<<"Smallest: "<<smallest<<endl;
}
/*
Enter some numbers(Max 100 Char): 12345  
Total: 15
Largest: 5
Smallest: 1
*/
