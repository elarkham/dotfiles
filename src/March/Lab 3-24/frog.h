#ifndef FROG_H
#define FROG_H

#include<vector>

#define ROWS 40
#define COLS 40
class Frog{
	private:
		char marsh[ROWS][COLS];
		int frow, fcol;
	public:
		Frog();
		void initialize();
		void jump();
		void display();
		double distance();
};
#endif
