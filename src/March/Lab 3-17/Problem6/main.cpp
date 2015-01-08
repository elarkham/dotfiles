//Ethan Larkham
//Exercise 3-12-2014
//Problem 4 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std; 

string findLetter(int);

struct exam {
	string name;
	string id;
	int score;
	string grade;
}students[5];


int main(){
	int largest=0;
	int smallest=0;
	double scoreCount=0;
	double average=0;
	
	string line;
	ifstream tests("students");
	
	for (int i=0; i<=4;i++){
		getline(tests,line); students[i].name=line;
        	getline(tests,line); students[i].id=line;
		getline(tests,line); students[i].score=atof(line.c_str());
		students[i].grade=findLetter(students[i].score);
		
		scoreCount++;
		average+=students[i].score;
		if(students[i].score>largest){
			largest=students[i].score;
		}
	}
	tests.close();
	smallest=largest;
	for (int i=0; i<=4;i++){
                if(students[i].score<smallest){
                        smallest=students[i].score;
                }
        }

	average/=scoreCount;
	cout<<"Largest Grade was: "<<largest<<endl;
	cout<<"Smallest Grade was: "<<smallest<<endl;
	cout<<"The Average grade was: "<<average<<endl;	
}

string findLetter(int score){
	if (score>=90){
		return "A";
	}else if(score>=80){
		return "B";
	}else if(score>=70){
		return "C";
	}else if(score>=65){
		return "D";
	}else if(score<65){
		return "F";
	}
}
/*
Largest Grade was: 90
Smallest Grade was: 65
The Average grade was: 79
*/
