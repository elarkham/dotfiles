/*
 * Ethan Larkham
 * Lab 2-18-2014
 * Problem 2
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double STANDARD_DEVIATION=1.14;
double MEAN=10.71;

double probability(double,double,double);

int main(){
	double x;
	cout<<"Enter the X value of the probability: ";
	cin>>x;
	
	cout<<"The probability is "<<probability(MEAN,STANDARD_DEVIATION,x)<<".";
}

double probability(double mean, double standD, double x){
	
	double d= pow(((x-mean)/standD),2)/2;
	double p= (1/(standD*sqrt(2*3.14)))*exp(-1*d);
	
	return p;
}
/*
Enter the X value of the probability: 8
The probability is 0.0207494.

------------------
(program exited with code: 0)
Press return to continue
*/
