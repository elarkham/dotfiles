#include "frog.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>

using namespace std;

Frog::Frog(){
	initialize();
	frow=20;
	fcol=20;	
	marsh[20][20]='S';
}
void Frog::initialize(){
	int i, j;
        for(i = 0; i < ROWS; i++)
                for (j = 0; j < COLS; j++)
                        marsh[i][j] = '_';
}
void Frog::jump()
{
        int rnumber;
        rnumber = rand() % 5 + 1;
        switch (rnumber)
        {
                case 1:         break;
                case 2:  if (frow == ROWS-1)
                                break;
                        marsh[frow][fcol] = '*';
                        frow++;
                        marsh[frow][fcol] = 'F';
                        break;
                case 3:  if (frow == 0)
                                break;
                        marsh[frow][fcol] = '*';
                        frow--;
                        marsh[frow][fcol] = 'F';
                        break;
                case 4:  if (fcol == COLS-1)
                                break;
                        marsh[frow][fcol] = '*';
                        fcol++;
                        marsh[frow][fcol] = 'F';
                        break;
                case 5:  if (fcol == 0)
                                break;
                        marsh[frow][fcol] = '*';
                        fcol--;
                        marsh[frow][fcol] = 'F';
                        break;
        }
}
void Frog::display()
{
	marsh[20][20]='S';
        int i, j;
        for(i=0; i < ROWS; i++)
        {
                for (j = 0; j < COLS; j++)
                        cout<< marsh[i][j];
                cout<<endl;
        }
}

double Frog::distance()
{
        return sqrt(pow(abs(frow-20), 2.0)+ pow(abs(fcol-20), 2.0));
}

