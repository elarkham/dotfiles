/*
 * Ethan Larkham
 * Lab 2-6-2014
 * Problem 4
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

	
	two/=2500;
	three/=2500;
	four/=2500;
	five/=2500;
	six/=2500;
	seven/=2500;
	eight/=2500;
	nine/=2500;
	ten/=2500;
	eleven/=2500;
	twelve/=2500;
	
	for(int i=2;i<=12;i++){
		switch(i){
			case 2:
			cout<<"2:  ";
				for(int i=1;i<=two;i++){
					cout<<"X";
				}
				cout<<endl;
				break;
			case 3:
			cout<<"3:  ";
				for(int i=1;i<=three;i++){
					cout<<"X";
				}
				cout<<endl;
				break;
			case 4:
			cout<<"4:  ";
				for(int i=1;i<=four;i++){
					cout<<"X";
				}
				cout<<endl;
				break;
			case 5:
			cout<<"5:  ";
				for(int i=1;i<=five;i++){
					cout<<"X";
				}
				cout<<endl;
				break;
			case 6:
			cout<<"6:  ";
				for(int i=1;i<=six;i++){
					cout<<"X";
				}
				cout<<endl;
				break;
			case 8:
			cout<<"8:  ";
				for(int i=1;i<=eight;i++){
					cout<<"X";
				}
				cout<<endl;
				break;
			case 9:
			cout<<"9:  ";
				for(int i=1;i<=nine;i++){
					cout<<"X";
				}
				cout<<endl;
				break;
			case 10:
			cout<<"10: ";
				for(int i=1;i<=ten;i++){
					cout<<"X";
				}
				cout<<endl;
				break;
			case 11:
			cout<<"11: ";
				for(int i=1;i<=eleven;i++){
					cout<<"X";
				}
				cout<<endl;
				break;
			case 12:
			cout<<"12: ";
				for(int i=1;i<=twelve;i++){
					cout<<"X";
				}
				cout<<endl;
				break;
		}
	}

	return 0;
}
/*
2:  XXXXXXXXXXX
3:  XXXXXXXXXXXXXXXXXXXXXX
4:  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
5:  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
6:  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
8:  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
9:  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
10: XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
11: XXXXXXXXXXXXXXXXXXXXXX
12: XXXXXXXXXXX


------------------
(program exited with code: 0)
Press return to continue
*/
