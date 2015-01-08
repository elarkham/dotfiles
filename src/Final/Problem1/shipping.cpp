//Ethan Larkham
//Problem1
#include <iostream>
#include <cmath>
using namespace std; 

double shippingCost(int);

int main(){
	double test=shippingCost(13);
	cout<<"13 binders costs: $"<<test<<endl;
}

double shippingCost(int numberBinders){
		int shippingCartons;
		if ((numberBinders%12)==0){
			shippingCartons=(numberBinders/12);
		}else{
			shippingCartons=(numberBinders/12)+1;
		}
		
		double dweight=(shippingCartons*(1+(9.0/16.0)))+(numberBinders*(1+(5.0/16.0)));
		int iweight=dweight;
		if((dweight-iweight)!=0){
			iweight+=1;
		}

		double cost=(1.44*shippingCartons)+(0.96*iweight)+3;
		return cost;
}
/*
   13 binders costs: $26.04
*/
