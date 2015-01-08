//Ethan Larkham
//Exercise 3-12-2014
//Problem 3 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void countChar(char);
double letters[25];
int letterTally; 

int main(){
	string line;
	ifstream hamlet("hamlet");
	double average=0;
	char label=64;
	while (getline(hamlet,line)){
		for (int i=0;i<line.length()-1;i++){
		  countChar(line.at(i));
		}

	}
	hamlet.close();
	for(int i=0;i<26;i++){
		letters[i]/=letterTally;
		letters[i]*=100;
	}
	cout<<"Total Letters: "<<letterTally<<endl;		
	for(int i=0;i<26;i++){
	       label++;
               cout<<label<<"'s percentage: %"<<letters[i]<<endl;
        }               
        
}

void countChar(char letter){
	switch (letter){
		case 'a':
		case 'A':
			letters[0]+=1;
			letterTally+=1;	
			break;
		case 'b':
                case 'B':
                        letters[1]+=1;
                        letterTally+=1;
                        break;
                case 'c':
                case 'C':
                        letters[2]+=1;
                        letterTally+=1;
                        break;
                case 'd':
                case 'D':
                        letters[3]+=1;
                        letterTally+=1;
                        break;
                case 'e':
                case 'E':
                        letters[4]+=1;
                        letterTally+=1;
                        break;
                case 'f':
                case 'F':
                        letters[5]+=1;
                        letterTally+=1;
                        break;

		case 'g':
                case 'G':
                        letters[6]+=1;
                        letterTally+=1;
                        break;
                case 'h':
                case 'H':
                        letters[7]+=1;
                        letterTally+=1;
                        break;

                case 'i':
                case 'I':
                        letters[8]+=1;
                        letterTally+=1;
                        break;
                case 'j':
                case 'J':
                        letters[9]+=1;
                        letterTally+=1;
                        break;
                case 'k':
                case 'K':
                        letters[10]+=1;
                        letterTally+=1;
                        break;
                case 'l':
                case 'L':
                        letters[11]+=1;
                        letterTally+=1;
                        break;
                case 'm':
                case 'M':
                        letters[12]+=1;
                        letterTally+=1;
                        break;
                case 'n':
                case 'N':
                        letters[13]+=1;
                        letterTally+=1;
                        break;
                case 'o':
                case 'O':
                        letters[14]+=1;
                        letterTally+=1;
                        break;
                case 'p':
                case 'P':
                        letters[15]+=1;
                        letterTally+=1;
                        break;
                case 'q':
                case 'Q':
                        letters[16]+=1;
                        letterTally+=1;
                        break;
                case 'r':
                case 'R':
                        letters[17]+=1;
                        letterTally+=1;
                        break;
                case 's':
                case 'S':
                        letters[18]+=1;
                        letterTally+=1;
                        break;
                case 't':
                case 'T':
                        letters[19]+=1;
                        letterTally+=1;
                        break;
                case 'u':
                case 'U':
                        letters[20]+=1;
                        letterTally+=1;
                        break;
                case 'v':
                case 'V':
                        letters[21]+=1;
                        letterTally+=1;
                        break;
                case 'w':
                case 'W':
                        letters[22]+=1;
                        letterTally+=1;
                        break;
                case 'x':
                case 'X':
                        letters[23]+=1;
                        letterTally+=1;
                        break;
                case 'y':
                case 'Y':
                        letters[24]+=1;
                        letterTally+=1;
                        break;
                case 'z':
                case 'Z':
                        letters[25]+=1;
                        letterTally+=1;
                       break;
		default:
			break;
	}
}
/*
Total Letters: 525403845
A's percentage: %18.4824
B's percentage: %3.39928
C's percentage: %4.84072
D's percentage: %9.33408
E's percentage: %27.7886
F's percentage: %5.01161
G's percentage: %4.49522
H's percentage: %16.2181
I's percentage: %15.8094
J's percentage: %0.204328
K's percentage: %2.36278
L's percentage: %10.861
M's percentage: %7.90007
N's percentage: %15.4119
O's percentage: %20.8377
P's percentage: %3.74478
Q's percentage: %0.408656
R's percentage: %14.446
S's percentage: %15.5642
T's percentage: %22.0359
U's percentage: %8.06724
V's percentage: %2.2699
W's percentage: %5.81778
X's percentage: %0.332497
Y's percentage: %5.95152
Z's percentage: %0.133742
*/
