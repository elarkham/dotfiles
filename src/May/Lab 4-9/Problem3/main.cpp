//Ethan Larkham
//Lab 4-9
//Problem 3
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void initialize(int *);
void display(int *);
void displayBackwards(int *);
int maximum(int *);
int minimum(int *);
double average(int *);

int main(){
	int array[100];
	srand(time(NULL));
	initialize(array);
	display(array);
	cout<<endl<<"The array backwards"<<endl;
	displayBackwards(array);
	cout<<endl;
	cout<<"The largest value is: "<<maximum(array)<<endl;
	cout<<"The smallest value is: "<<minimum(array)<<endl;
	cout<<"The average value is: "<<average(array)<<endl;
	return 0;
}
void initialize(int *numbers){
	int *pStart, *pEnd;
        pStart=numbers;
        pEnd=pStart+99;

        while(pStart<=pEnd){
                *pStart=rand()%1000;
                pStart++;
        }

}
void display(int *numbers){
        int *pStart, *pEnd;
	int count=1;
        pStart=numbers;
        pEnd=pStart+99;

        while(pStart<=pEnd){
                cout<<*pStart;
                if ((count%10)==0){cout<<endl;}
                else{cout<<", ";}
		count++;
                pStart++;
        }
  
}
void displayBackwards(int *numbers){
	int *pStart, *pEnd;
	int count=1;
        pStart=numbers+99;
        pEnd=numbers;

        while(pStart>=pEnd){
                cout<<*pStart;
		if ((count%10)==0){cout<<endl;}
		else{cout<<", ";}
                pStart--;
		count++;
        }

}
int maximum(int *numbers){
	int *pStart, *pEnd;
	int max=0;
        pStart=numbers;
        pEnd=pStart+99;

        while(pStart<=pEnd){
		if (*pStart>max){
			max=*pStart;
		}
                pStart++;
        }
	return max;
}
int minimum(int *numbers){
        int *pStart, *pEnd;
        int min=1000;
        pStart=numbers;
        pEnd=pStart+99;

        while(pStart<=pEnd){
                if (*pStart<min){
                        min=*pStart;
                }
                pStart++;
        }
        return min;
}
double average(int *numbers){
        int *pStart, *pEnd;
	int total=0;
        pStart=numbers;
        pEnd=pStart+99;

        while(pStart<=pEnd){
                total+=*pStart;
                pStart++;
        }
	return (total/100);  
}
/*
633, 574, 558, 313, 280, 570, 397, 136, 227, 305
59, 442, 261, 748, 993, 148, 674, 621, 677, 861
564, 622, 682, 954, 882, 985, 763, 355, 356, 666
515, 341, 241, 425, 654, 873, 347, 403, 9, 574
61, 420, 17, 322, 169, 362, 822, 843, 335, 500
56, 899, 122, 738, 853, 356, 723, 968, 64, 431
635, 931, 773, 228, 708, 779, 101, 55, 183, 462
630, 596, 882, 999, 918, 403, 713, 92, 598, 48
944, 654, 948, 418, 393, 801, 127, 468, 770, 191
900, 757, 474, 673, 985, 182, 452, 86, 237, 987

The array backwards
987, 237, 86, 452, 182, 985, 673, 474, 757, 900
191, 770, 468, 127, 801, 393, 418, 948, 654, 944
48, 598, 92, 713, 403, 918, 999, 882, 596, 630
462, 183, 55, 101, 779, 708, 228, 773, 931, 635
431, 64, 968, 723, 356, 853, 738, 122, 899, 56
500, 335, 843, 822, 362, 169, 322, 17, 420, 61
574, 9, 403, 347, 873, 654, 425, 241, 341, 515
666, 356, 355, 763, 985, 882, 954, 682, 622, 564
861, 677, 621, 674, 148, 993, 748, 261, 442, 59
305, 227, 136, 397, 570, 280, 313, 558, 574, 633

The largest value is: 999
The smallest value is: 9
The average value is: 519
*/
