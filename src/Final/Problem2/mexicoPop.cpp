//Ethan Larkham
//Problem2
#include<iostream>
using namespace std;

int main(){
	double population=89.2;
	double year=1990;
	while(population<=200){
		population+=(population*0.023);
		year++;
	}
	cout<<"By the year "<<year<<" the population of mexico will have grown to 200 million."<<endl;
}
/*
   By the year 2026 the population of mexico will have grown to 200 million.
*/
