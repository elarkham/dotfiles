/*
 * Ethan Larkham
 * Lab 2-6-2014
 * Problem 3
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
	double two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,ten=0,eleven=0,twelve=0;
	
	for (int i=1;i<=1000000;i++){	
		int dieRoll1 = ((rand()%6)+1);
		int dieRoll2 = ((rand()%6)+1);
		int total = dieRoll1+dieRoll2;
		
		switch(total){
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
			case 5:
				five++;
				break;
			case 6:
				six++;
				break;
			case 7:
				seven++;
				break;
			case 8:
				eight++;
				break;
			case 9:
				nine++;
				break;
			case 10:
				ten++;
				break;
			case 11:
				eleven++;
				break;
			case 12:
				twelve++;
				break;
		}
	}
	cout <<"2 was rolled: "<< (two/1000000)*100<<"%"<<endl; 
	cout <<"3 was rolled: "<< (three/1000000)*100<<"%"<<endl; 
	cout <<"4 was rolled: "<< (four/1000000)*100<<"%"<<endl; 
	cout <<"5 was rolled: "<< (five/1000000)*100<<"%"<<endl; 
	cout <<"6 was rolled: "<< (six/1000000)*100<<"%"<<endl; 
	cout <<"7 was rolled: "<< (seven/1000000)*100<<"%"<<endl; 
	cout <<"8 was rolled: "<< (eight/1000000)*100<<"%"<<endl; 
	cout <<"9 was rolled: "<< (nine/1000000)*100<<"%"<<endl; 
	cout <<"10 was rolled: "<< (ten/1000000)*100<<"%"<<endl; 
	cout <<"11 was rolled: "<< (eleven/1000000)*100<<"%"<<endl; 
	cout <<"12 was rolled: "<< (twelve/1000000)*100<<"%" <<endl; 

	return 0;
}
/*
 2 was rolled: 2.7598%
3 was rolled: 5.5658%
4 was rolled: 8.3936%
5 was rolled: 11.0741%
6 was rolled: 13.8337%
7 was rolled: 16.6865%
8 was rolled: 13.9078%
9 was rolled: 11.125%
10 was rolled: 8.3269%
11 was rolled: 5.5262%
12 was rolled: 2.8006%


------------------
(program exited with code: 0)
Press return to continue
*/
