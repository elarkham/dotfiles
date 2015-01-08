//Ethan Larkham
//Problem 3
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
		srand(time(NULL));
		int fortuneFinder=rand()%4;
		string fortune;
		switch(fortuneFinder){
				case 0:
						fortune="You will have a long and happy life.";
						break;
				case 1:
						fortune="Never use break and continue in the same loop";
						break;
				case 2:
						fortune="A C++ programmer will live a long and prosperous life";
						break;
				case 3: 
						fortune="Include cstdlib when using rand()";
						break;
		}
		cout<<"Your Fortune: "<<fortune<<endl;
		cout<<"Lucky Numbers: "<<endl;
		for(int i=0;i<5;i++){
			cout<<(rand()%98)+1<<endl;
		}
}
/*
Your Fortune: Include cstdlib when using rand()
Lucky Numbers: 
52
74
57
80
86
*/
