/*
 * Ethan Larkham
 * Lab 2-6-2014
 * Problem 2
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
	double calories;
	double fat;
	double percentage;
	
	cout << "How many calories are in the meal?: "; 
	cin >> calories;
	
	cout << "How much fat grams is in it?: "; 
	cin >> fat;
	
	fat*=9;
	
	percentage=(fat/calories)*100;
	
	if (percentage<=30){
		cout<<"This meal is low in fat"<<endl;
	}
}
/*
How many calories are in the meal?: 50
How much fat grams is in it?: 1
This meal is low in fat


------------------
(program exited with code: 0)
Press return to continue
*/
