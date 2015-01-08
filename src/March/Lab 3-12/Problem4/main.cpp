//Ethan Larkham
//Exercise 3-12-2014
//Problem 4
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void saleRange(double);
double salaries[9]={0};

int main(){
	int employees=200;
	double baseSalary=200;
	double comission=0.09;
	srand(time(0));
	
	for (int i=0; i<=employees;i++){
		double sales=rand()%10000;
		double pay= baseSalary+(sales*comission);
		saleRange(pay);
	}
	double label=baseSalary;
	for(int i=0; i<8;i++){
		cout<<"There are "<<salaries[i]<<" employees who made from "<<label<<" to "<<(label+99)<<" dollars"<<endl;
		label+=100;
	}
	 cout<<"There are "<<salaries[8]<<" employees who made more then "<<label<<" dollars"<<endl;

}

void saleRange(double pay){
	if(pay>=1000){
		salaries[8]++;
	}else if (pay>=900){
		salaries[7]++;
	}else if (pay>=800){
                salaries[6]++;
        }else if (pay>=700){
                salaries[5]++;
        }else if (pay>=600){
                salaries[4]++;
        }else if (pay>=500){
                salaries[3]++;
        }else if (pay>=400){
                salaries[2]++;
        }else if (pay>=300){
                salaries[1]++;
        }else if (pay>=200){
                salaries[0]++;
	}
}
/*
There are 22 employees who made from 200 to 299 dollars
There are 17 employees who made from 300 to 399 dollars
There are 24 employees who made from 400 to 499 dollars
There are 27 employees who made from 500 to 599 dollars
There are 19 employees who made from 600 to 699 dollars
There are 27 employees who made from 700 to 799 dollars
There are 18 employees who made from 800 to 899 dollars
There are 26 employees who made from 900 to 999 dollars
There are 21 employees who made more then 1000 dollars
*/
