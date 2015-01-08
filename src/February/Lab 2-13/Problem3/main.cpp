//Ethan Larkham
//3-13-2014
//Lab Exercise 2/13/2014
//Problem 3

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double totalWallSpace(double,double);
double gallonsOfPaint(double);
double costOfPaint(double,double);
double totalHoursOfLabor(double);
double pay(double);
double total(double,double); 
void roomSpace(int);

double wallSpace, dRooms, paintCost;

int main(){
	cout<<"How many rooms? ";cin>>dRooms;
	for (int i=1;i<=dRooms;i++){
		roomSpace(i);
	}	
	
	cout<<"WallSpace= "<<wallSpace<<endl;	

	cout<<"How much is the paint per gallon?: "; cin>>paintCost;

	double gallons=gallonsOfPaint(wallSpace);
	double costPaint=costOfPaint(gallons,paintCost);
	double hours=totalHoursOfLabor(wallSpace);
	double payed=pay(hours);
	double totaled=total(payed,paintCost);

	cout<<"Total Gallons of Paint: "<<gallons<<endl;
	cout<<"Hours of Labor: "<<hours<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"Paint Cost: $"<<costPaint<<endl;
	cout<<"Labor Cost: $"<<payed<<endl;
	cout<<"Total Cost: $"<<totaled<<endl;
	return 0;
}

double totalWallSpace(double length, double width){
	return (2*length*8.0)+(2*width*8.0);
}

double gallonsOfPaint(double wallSpace){
	return (wallSpace/115.0);
}
double costOfPaint(double gallons,double cost){
	return (gallons*cost);
}

double totalHoursOfLabor(double wallSpace){
	return (wallSpace/115)*8;
}

double pay(double hours){
	return (27.0*hours);
}

double total(double pay, double paint){
	return (pay+paint*1.0);
}

void roomSpace(int i){
	int length, width, paint;
	cout<<"How long is the room "<<i<<"?: "; cin>>length;
        cout<<"How wide is the room "<<i<<"?: "; cin>>width;
	cout<<endl;
	wallSpace+=totalWallSpace(length,width);
}
/*
How many rooms? 5
How long is the room 1?: 4
How wide is the room 1?: 3

How long is the room 2?: 2
How wide is the room 2?: 2

How long is the room 3?: 6
How wide is the room 3?: 5

How long is the room 4?: 4
How wide is the room 4?: 4

How long is the room 5?: 7
How wide is the room 5?: 7

WallSpace= 704
How much is the paint per gallon?: 5
Total Gallons of Paint: 6.12174
Hours of Labor: 48.9739
Paint Cost: $30.61
Labor Cost: $1322.30
Total Cost: $1327.30
*/
