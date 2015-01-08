//Ethan Larkham
//Lab 4-10
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void initialize(int *);
void find(int *);

int main(){
	int array[100];
	srand(time(NULL));
	initialize(array);
	find(array);
	return 0;
}
void initialize(int *numbers){
	int *pStart, *pEnd;
        pStart=numbers;
        pEnd=pStart+99;

        while(pStart<=pEnd){
                *pStart=rand()%100;
                pStart++;
        }
}
void find(int *numbers){
	int *pStart, *pEnd, *old=new int,count=0, *begin, bCount=0, *bBegin;
        pStart=numbers;
        pEnd=pStart+99;
	bool nonDecrease=false;
			
        while(pStart<=pEnd){
		if (*pStart>*old && nonDecrease==false){
			nonDecrease=true;
			begin=old;
			count++;
		}else if (*pStart>*old && nonDecrease==true){
			count++;
		}else{
                        if (count>bCount){
                                bCount=count;
                                bBegin=begin;
                        }
                        count=0;
			nonDecrease=false;
                }
		old=pStart;		
		pStart++;
        }
	pStart-=100;	
	int start=(bBegin-pStart);
	int end=(bBegin-pStart)+bCount;
	cout<<"Index "<<start<<" through "<<end<<endl;
	for (int i=start; i<=end;i++){
		cout<<i<<": "<<*(pStart+i)<<endl;
	}	
}
/*
Index 28 through 31
28: 1
29: 20
30: 51
31: 68
*/
