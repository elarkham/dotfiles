//Ethan Larkham
//Lab 4-14
//Problem 2
//April 15, 2014
#include <iostream>
#include <cstring>
using namespace std;
int numWords(char*);

int main(){
	char test[100];
	cout<<"Enter some words(Max 100 Char): ";cin.getline(test,100);	
	cout<<numWords(test)<<endl;
}
int numWords(char *words){
	char *pStart, *pEnd;
	int wordCount=1;
	pStart=words;
        pEnd=words+(strlen(words)-1);

        while(pStart<=pEnd){
		if(isspace(*pStart)){
			wordCount++;
		}
		pStart++;
        }
	return wordCount;
}
/*
Hello, how are you?
4
*/	

