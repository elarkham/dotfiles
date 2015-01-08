//Ethan Larkham
//Exercise 3-12-2014
//Problem 1
#include <iostream>
using namespace std;

int main(){
	double largest, average, smallest;
	double array[9];
	for (int i=0; i<10;i++){	
		cout<<"What will value "<<i+1<<" be?: "; cin>>array[i];
	}
	largest=0;
	average=0;
	for (int i=0; i<10;i++){
		if (array[i]>largest){
			largest=array[i];
		}
		average+=array[i];
	}
	average/=10;
	smallest=largest;
	for (int i=0; i<10;i++){
                if (array[i]<smallest){
                        smallest=array[i];
                }
        }
	
	cout<<"Largest Value: "<<largest<<endl;
	cout<<"Smallest Value: "<<smallest<<endl;
	cout<<"Average Value: "<<average<<endl;
	
}
/*
What will value 1 be?: 5
What will value 2 be?: 3
What will value 3 be?: 2
What will value 4 be?: 5
What will value 5 be?: 67
What will value 6 be?: 8
What will value 7 be?: 9
What will value 8 be?: 10
What will value 9 be?: 0
What will value 10 be?: 30
Largest Value: 67
Smallest Value: 0
Average Value: 13.9
*/
