//Ethan Larkham
//Lab 4-14
//Problem 3 
//April 16, 2014
#include <iostream>
#include <cstring>
using namespace std;
int numWords(char*);
double averageLength(char*);

int main(){
	char test[]="Who was phone?";
	cout<<test<<endl;	
	cout<<averageLength(test)<<endl;
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
double averageLength(char *words){
	char *pStart, *pEnd;
        int letterCount=0;
        pStart=words;
        pEnd=words+(strlen(words)-1);

        while(pStart<=pEnd){
                if(isspace(*pStart)==false){
                        letterCount++;
                }
                pStart++;
        }
        return (letterCount/numWords(words));
}
/*
Who was phone?
4
*/
