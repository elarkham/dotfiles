#include <iostream>
using namespace std;

int main(){
	double x=0;
	for (double i=0;i<13;i++){
		x+=(200.0*(5.0-(9/(2.0+i))));
		//cout<<x<<endl;
	}
	x/=13;
	cout<<x<<endl;
}
