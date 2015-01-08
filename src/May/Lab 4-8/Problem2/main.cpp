//Ethan Larkham
//Lab 4-8
//Problem 1
//April 11, 2014
#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	
	int *d;
	int *e;
	int *f;
	
	int **g;
	int ***j;
	int **k;
	int **h;
	
	d=&a;
	e=&b;
	f=&c;
	g=&e;
	h=&f;
	j=&k;
	k=&e;

	*d=5;
	***j=6;
	**h=7;

	cout<<"a-> "<<a<<"  ::  "<<&a<<endl;
	cout<<"b-> "<<b<<"  ::  "<<&b<<endl;
	cout<<"c-> "<<c<<"  ::  "<<&c<<endl;	
	cout<<"d->a-> "<<*d<<"  ::  "<<&d<<endl;
	cout<<"e->b-> "<<*e<<"  ::  "<<&e<<endl;
	cout<<"f->c-> "<<*f<<"  ::  "<<&f<<endl;
	cout<<"g->-e->b-> "<<**g<<"  ::  "<<&g<<endl;
	cout<<"h->f->c-> "<<**h<<"  ::  "<<&h<<endl;
	cout<<"j->k->e->b-> "<<***j<<" ::  "<<&j<<endl;
	cout<<"k->e->b-> "<<**k<<"  ::  "<<&k<<endl;
	
}
/*
a-> 5  ::  0x7fffc9d4077c
b-> 6  ::  0x7fffc9d40778
c-> 7  ::  0x7fffc9d40774
d->a-> 5  ::  0x7fffc9d40768
e->b-> 6  ::  0x7fffc9d40760
f->c-> 7  ::  0x7fffc9d40758
g->-e->b-> 6  ::  0x7fffc9d40750
h->f->c-> 7  ::  0x7fffc9d40738
j->k->e->b-> 6 ::  0x7fffc9d40748
k->e->b-> 6  ::  0x7fffc9d40740
*/
