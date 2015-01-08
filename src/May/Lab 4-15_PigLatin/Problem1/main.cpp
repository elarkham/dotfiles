//Ethan Larkham 
//Lab Exercise 4-15
//Problem 1
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream program ("main.cpp");
	bool complete=false;
	while (complete==false){
		string line;
		if (getline(program,line)){
			cout<<line<<endl;
		}else{
			complete=true;
		}
	}
	program.close();
	return 0;
}
/*
//Ethan Larkham 
//Lab Exercise 4-15
//Problem 1
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream program ("main.cpp");
	bool complete=false;
	while (complete==false){
		string line;
		if (getline(program,line)){
			cout<<line<<endl;
		}else{
			complete=true;
		}
	}
	program.close();
	return 0;
}
*/
