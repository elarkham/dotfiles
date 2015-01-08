//Ethan Larkham
//Lab Exercise 4-15
//Problem 2
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream file;
	string find, line, buffer;
	cout<<"What is it you seek?: ";cin>>find;
	cout<<"Where do you seek it?: ";cin>>buffer;
	file.open(buffer.c_str());

	while (getline(file, line)){
		if(line.find(find)!=-1){
			cout<<line<<endl;
		} 
	}
	return 0;
}
/*
~ story.txt ~

Once upon a time there were three little piglets.
Their mother had decided that they would have to set off
on their own and so the three piglets were now apart. 
Also a wolf was there and so on.
So two piglets were eaten because they were lazy pieces of ...dirt.
And then the last pig ate the wolf. 
The last piglet lived a good life the end.

~ Program Output ~

What is it you seek?: piglet
Where do you seek it?: story.txt
Once upon a time there were three little piglets.
on their own and so the three piglets were now apart. 
So two piglets were eaten because they were lazy pieces of ...dirt.
The last piglet lived a good life the end.
*/
