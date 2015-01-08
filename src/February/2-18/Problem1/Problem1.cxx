/*
 * Ethan Larkham
 * Lab 2-18-2014
 * Problem 1
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double calcRadius(double);
double calcSurfaceArea(double);
double calcCircumference(double);
double calcVolume(double);
void printSphere(double,double,double,double,double);

int main(){
	double diameter;
	
	cout<<"Enter a diameter: ";
	cin>>diameter;
	
	printSphere(diameter,calcRadius(diameter),calcSurfaceArea(calcRadius(diameter)),calcCircumference(diameter),calcVolume(calcRadius(diameter)));
}

double calcRadius(double diameter){
		return diameter/2;
	}
double calcSurfaceArea(double radius){
		return 4*3.14*pow(radius,2);
	}
double calcCircumference(double diameter){
		return 3.14*diameter;
	}
double calcVolume(double radius){
		return ((4*3.14)/3)*pow(radius,3);
	}
void printSphere(double diameter,double radius,double surfaceArea, double circumference,double volume){
		cout<<"Sphere with diameter "<<diameter<<endl;
		cout<<"Radius= "<<radius<<endl;
		cout<<"Surface Area= "<<surfaceArea<<endl;
		cout<<"Circumference= "<<circumference<<endl;
		cout<<"Volume= "<<volume<<endl;
	}
/*
Enter a diameter: 3
Sphere with diameter 3
Radius= 1.5
Surface Area= 28.26
Circumference= 9.42
Volume= 14.13


------------------
(program exited with code: 0)
Press return to continue
*/
