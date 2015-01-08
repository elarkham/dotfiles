//Ethan Larkham
//Lab 3-26
//Problem3
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void insertionSort (string []);
void screenOutput (const string []);

int main(){
        string list[]={"Shea","Jared", "Tristan", "Josh", "Tim","Norm"};
	insertionSort(list);
        screenOutput(list);
}

void screenOutput (const string temp[])
{
	for(int i=0;i<6;i++){
		cout<<temp[i]<<endl;
	}	 
}
void insertionSort (string list[]){
	int outer, pos; 
	string temp;
	for (outer=1; outer < 6; outer++)
	{
		pos = outer;
		temp = list[pos];
		while ( (pos > 0) && list[pos-1]>temp)
		{
			list[pos] = list[pos-1];
			pos--;
		}
		list[pos] = temp;
	}
}
/*
Jared
Josh
Norm
Shea
Tim
Tristan
*/
