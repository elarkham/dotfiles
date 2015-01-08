#ifndef FRACTION_H
#define FRACTION_H
using namespace std;
class Fraction{
	private:
		int numerator;
		int denominator;
		double decimalEquivalent;
		
		void calcDecimalEquivalent();
		int gcd();
	public:
		Fraction();
		Fraction(int,int);
		void reduce();
		Fraction add(Fraction);
		Fraction subtract(Fraction);
		Fraction multiply(Fraction);
		Fraction divide(Fraction);
		void reciprocate();
		int getNumerator();
		int getDenominator();
		double getDecimalEquivalent();
		void setNumerator(int);
		void setDenominator(int);
		void print();
};
#endif