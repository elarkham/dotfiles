//Ethan Larkham
//2-20-2014
//Lab Exercise 2/13/2014
//Problem 2

#include <iostream>
#include <iomanip>
using namespace std;

int totalEmployees();
int daysAbsent(int);
double calcAverage(int,int);

int main(){
	int totalEmployee=totalEmployees();
	double average=calcAverage(daysAbsent(totalEmployee),totalEmployee);
	cout<<"The average number of days absent is "<<average<<endl;
}

int totalEmployees(){
	int employeeTotal;
	cout<<"How many employees are there?: ";
	cin>>employeeTotal;

	return employeeTotal;
}

int daysAbsent(int employees){
	int totalAbsent=0;
	int absentBuffer=0;
	for (int i=1;i<=employees;i++){
		cout<<"How many days was employee "<<i<<" absent? ";
		cin>>absentBuffer;
		totalAbsent+=absentBuffer;
	}
	return totalAbsent;
}

double calcAverage(int daysAbsent,int totalEmployees){
	double dTotalEmployees=totalEmployees;
	double dDaysAbsent=daysAbsent;
	return dDaysAbsent/dTotalEmployees;
}

/*
How many employees are there?: 4
How many days was employee 1 absent? 2
How many days was employee 2 absent? 123
How many days was employee 3 absent? 45
How many days was employee 4 absent? 5
The average number of days absent is 43.75
Press any key to continue . . .
*/
