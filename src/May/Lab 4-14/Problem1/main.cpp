//Ethan Larkham
//Lab 4-14
//Problem 1
//April 15, 2014
#include <iostream>
#include <cstring>
using namespace std;
void reverseString(char*);

int main(){
	char test[]="Hello";
	cout<<test<<endl;	
	reverseString(test);
	cout<<test<<endl;
}

void reverseString(char *word){
	char *pStart, *pEnd;
	pStart=word;
        pEnd=word+(strlen(word)-1);

        while(pStart<=pEnd){
		swap(*pStart,*pEnd);
                pEnd--;
		pStart++;
        }

}
/*
Hello
olleH
*/

