//Ethan Larkham
//Lab 4-4
//Problem 3
//4-8-2014
#include <iostream>
#include <cmath>
using namespace std;
#define size 1000

int main(){
	for (int a=1; a<=size;a++){
		for (int b=1; b<=size;b++){
			for (int c=1; c<=size;c++){
				if (((a*a)+(b*b))==(c*c)){
					cout<<"a= "<<a<<endl;
					cout<<"b= "<<b<<endl;
					cout<<"c= "<<c<<endl;
					cout<<endl;
				}
			}
		}
	}
}
/*
a= 896
b= 120
c= 904

a= 899
b= 60
c= 901

a= 900
b= 95
c= 905

a= 900
b= 165
c= 915

a= 900
b= 301
c= 949

a= 900
b= 375
c= 975

a= 910
b= 312
c= 962

a= 912
b= 215
c= 937

a= 912
b= 266
c= 950

a= 912
b= 380
c= 988

a= 920
b= 129
c= 929

a= 920
b= 207
c= 943

a= 924
b= 43
c= 925

a= 924
b= 143
c= 935

a= 924
b= 225
c= 951

a= 925
b= 372
c= 997

a= 936
b= 75
c= 939

a= 936
b= 273
c= 975

a= 936
b= 310
c= 986

a= 936
b= 352
c= 1000

a= 945
b= 240
c= 975

a= 945
b= 248
c= 977

a= 945
b= 324
c= 999

a= 950
b= 264
c= 986

a= 952
b= 186
c= 970

a= 957
b= 124
c= 965

a= 960
b= 62
c= 962

a= 960
b= 176
c= 976

a= 960
b= 216
c= 984

a= 960
b= 280
c= 1000

a= 966
b= 88
c= 970

a= 969
b= 108
c= 975

a= 975
b= 140
c= 985
*/
