//Ethan Larkham
//Lab 5-13
//Problem 1
#include <iostream>
using namespace std;

template<class T>
T mint(T,T);
template<class G>
G maxt(G,G);

int main(){
		int iX=50;
		int iY=10;
		cout<<"Max: "<<maxt(iX,iY)<<endl;	
		double dX=50.0;
		double dY=10.0;
		cout<<"Min: "<<mint(dX,dY)<<endl;
}

template<class G>
G maxt(G val1, G val2){
	if (val1>val2){
		return val1;
	}else{
		return val2;
	}
}

template<class T>
T mint(T val1, T val2){
	if (val1<val2){
		return val1;
	}else{
		return val2;
	}
}
/*
Max: 50
Min: 10
*/
