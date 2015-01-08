#include "fraction.h"
#include <iostream>
#include <iomanip>
using namespace std;

Fraction::Fraction(){
	numerator=1;	
	denominator=1;
	decimalEquivalent;
	calcDecimalEquivalent();
}
Fraction::Fraction(int num,int den){
	numerator=num;	
	denominator=den;
	decimalEquivalent;
	calcDecimalEquivalent();
}

void Fraction::reduce(){
	int buffer=gcd();
	numerator/=buffer;
	denominator/=buffer;
}
void Fraction::calcDecimalEquivalent(){
	decimalEquivalent=numerator/denominator;
}
int Fraction::gcd(){
	int t,a,b;
	a=numerator;
	b=denominator;
	while(b!=0){
		t=b;
		b=a % b;
		a=t;
	}
	return a;
}


Fraction Fraction::add(Fraction input){
	Fraction added(1,1);
	int dem1, num1, dem2, num2;

	dem1=denominator;
	num1=numerator;
	dem2=input.getDenominator();
	num2=input.getNumerator();

	num1*=dem2;
	num2*=dem1;
	dem1*=dem2;

	added.setNumerator((num1+num2));
	added.setDenominator(dem1);
	
	added.calcDecimalEquivalent();
	added.reduce();
	
	return added;
}
Fraction Fraction::subtract(Fraction input){
	Fraction subtracted(1,1);
	int dem1, num1, dem2, num2;

	dem1=denominator;
	num1=numerator;
	dem2=input.getDenominator();
	num2=input.getNumerator();

	num1*=dem2;
	num2*=dem1;
	dem1*=dem2;

	subtracted.setNumerator((num1-num2));
	subtracted.setDenominator(dem1);
	
	subtracted.calcDecimalEquivalent();
	subtracted.reduce();
	return subtracted;
}
Fraction Fraction::multiply(Fraction input){
	Fraction multiplied(input.getNumerator(),input.getDenominator());

	multiplied.setNumerator(numerator*multiplied.getNumerator());
	multiplied.setDenominator(denominator*multiplied.getDenominator());

	multiplied.calcDecimalEquivalent();
	multiplied.reduce();
	return multiplied;
}
Fraction Fraction::divide(Fraction input){
	Fraction divided(input.getNumerator(),input.getDenominator());
	divided.reciprocate();

	divided.setNumerator(numerator*divided.getNumerator());
	divided.setDenominator(denominator*divided.getDenominator());

	divided.calcDecimalEquivalent();
	divided.reduce();
	return divided;
}
void Fraction::reciprocate(){
	int buffer;
	buffer=numerator;
	numerator=denominator;
	denominator=buffer;
	reduce();
}
int Fraction::getNumerator(){
	return numerator;
}
int	Fraction::getDenominator(){
	return denominator;
}
double Fraction::getDecimalEquivalent(){
	return decimalEquivalent;
}
void Fraction::setNumerator(int num){
	numerator=num;
}
void Fraction::setDenominator(int dem){
	denominator=dem;
}
void Fraction::print(){
	cout<<numerator<<"/"<<denominator<<endl;
}