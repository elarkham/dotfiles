/*
 * Ethan Larkham
 * Lab 2-18-2014
 * Problem 3
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double CHARGE=1.6e-19;

double electronVelocity(double);

int main(){
	double radius;
	cout<<"Enter the electrons orbit radius: ";
	cin>>radius;
	
	if (radius<6e-11){
		cout<<"The velocity of the electron is "<<electronVelocity(radius)<<" m/s"<<endl;
	}else{
		cout<<"That radius is to large."<<endl;
		exit(0);
	}
}

double electronVelocity(double radius){
	double m=9.11e-31;
	double k=9.0e-9;
	double f=(k*CHARGE*CHARGE)/sqrt(radius);
	double v= sqrt((radius*f)/m);
	
	return v;
}
/*
Enter the electrons orbit radius: 6e-19
The velocity of the electron is 4.42609e-13 m/s


------------------
(program exited with code: 0)
Press return to continue
*/
