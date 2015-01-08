//Ethan Larkham
//Lab Exercise 4-15
//Problem 3
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main(){
	char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
        ifstream file;
        file.open("story.txt");
	string line;

        while (getline(file, line)){
		istringstream lineWord(line);
	        do{
			string word;
			bool vowel=false;
			lineWord>>word;

			for (int i=0;i<=8;i++){
				if (word[0]==vowels[i]){vowel=true;}
			}
			
                	if(vowel==true){
				word+="hay ";
                        	cout<<word;
                	}else if(word.size()>2){
				word=word.substr(1)+word[0]+"ay ";
				cout<<word; 
			}
		}while(lineWord);
        }
        return 0;
}
/*
~story.txt~
Once upon a time there were three little piglets.
Their mother had decided that they would have to set off
on their own and so the three piglets were now apart. 
Also a wolf was there and so on.
So two piglets were eaten because they were lazy pieces of ...dirt.
And then the last pig ate the wolf. 
The last piglet lived a good life the end.

~Program Output~
Oncehay uponhay ahay imetay heretay ereway hreetay ittlelay iglets.pay heirTay othermay adhay ecidedday hattay heytay ouldway avehay etsay offhay onhay heirtay ownhay andhay hetay hreetay igletspay ereway ownay apart.hay Alsohay ahay olfway asway heretay andhay on.hay wotay igletspay ereway eatenhay ecausebay heytay ereway azylay iecespay ofhay ..dirt..ay Andhay hentay hetay astlay igpay atehay hetay olf.way heTay astlay igletpay ivedlay ahay oodgay ifelay hetay end.hay
*/
