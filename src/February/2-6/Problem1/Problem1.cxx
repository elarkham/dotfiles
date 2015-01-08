/*
 * Ethan Larkham
 * Lab 2-6-2014
 * Problem 1
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int input;
	string output=""; 
	
	cout<<"Please enter a number that is from 1 to 99?: ";
	cin >> input;
	
	int firstDigit=(input/10);
	
	switch (firstDigit){
		case 1:
			output+="X";
			break;
		case 2:
			output+="XX";
			break;
		case 3:
			output+="XX";
			break;
		case 4:
			output+="XL";
			break;
		case 5:
			output+="L";
			break;
		case 6:
			output+="LX";
			break;
		case 7:
			output+="LXX";
			break;
		case 8:
			output+="LXXX";
			break;
		case 9:
			output+="XC";
			break;
	}
	
	int secondDigit=(input%10);
	
		switch (secondDigit){
		case 1:
			output+="I";
			break;
		case 2:
			output+="II";
			break;
		case 3:
			output+="III";
			break;
		case 4:
			output+="IV";
			break;
		case 5:
			output+="V";
			break;
		case 6:
			output+="VI";
			break;
		case 7:
			output+="VII";
			break;
		case 8:
			output+="VIII";
			break;
		case 9:
			output+="IX";
			break;
	}
	
	cout<<"The roman numeral for "<<input<<" is "<<output;
	return 0;
}
/*
 Please enter a number that is from 1 to 99?: 4
The roman numeral for 4 is IV

------------------
(program exited with code: 0)
Press return to continue
*/

