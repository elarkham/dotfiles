//Ethan Larkham
//Lab 3-12-14
//Problem 5
#include <iostream>
using namespace std;
void getSales();
void display();
double total();
int largest();
int smallest(int);

string names[5]={"Mild","Medium","Sweet","Hot","Zesty"};
double sales[5];


int main(){
	getSales();	
	display();	
}

void getSales(){
	for (int i=0; i<5;i++){
		cout<<"Enter Sales for "<<names[i]<<": ";
		cin>>sales[i];
	}
	
}

void display(){
	for (int i=0; i<5; i++){
		cout<<names[i]<<"sold "<<sales[i]<<" jars."<<endl;	
	}
	cout<<"The Best selling jar was "<<names[largest()]<<endl;
	cout<<"The Poorest selling jar was " <<names[smallest(sales[largest()])]<<endl;
	cout<<"Sales total was: "<<total()<<endl;
	
}

int largest(){
	double largest=0;
        int largestIndex=0;
	
	for (int i=0; i<5;i++){
		if (sales[i]>largest){
			largest=sales[i];
			largestIndex=i;
		}
	}
	return largestIndex;
}

int smallest(int largestIn){
        double smallest=largestIn;
        int smallestIndex=0;
	for (int i=0; i<5;i++){
                if (sales[i]<smallest){
                        smallest=sales[i];
                        smallestIndex=i;
                }
        }
	return smallestIndex;
}
double total(){
	double total=0;
	for(int i=0; i<5;i++){
		total+=sales[i];
	}
	return total;
}
/*
Enter Sales for Mild: 10
Enter Sales for Medium: 1
Enter Sales for Sweet: 15
Enter Sales for Hot: 123
Enter Sales for Zesty: 421
Mildsold 10 jars.
Mediumsold 1 jars.
Sweetsold 15 jars.
Hotsold 123 jars.
Zestysold 421 jars.
The Best selling jar was Zesty
The Poorest selling jar was Medium
Sales total was: 570
/*
