//Ethan Larkham
//Lab 4-16
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
struct entry{
	int partNum;
	string itemInfo;
	int quanity;
	double wholesaleCost;
	double retailCost;
	string date;
	entry(int iPartNum, string iItemInfo, int iQuanity, double iWholesaleCost, double iRetailCost, string iDate){
		partNum=iPartNum;
	   	itemInfo=iItemInfo;
	        quanity=iQuanity;
        	wholesaleCost=iWholesaleCost;
        	retailCost=iRetailCost;
        	date=iDate;
	}
};

void loadRecords(vector<entry>&);
void writeRecords(vector<entry>);
void newRecord(vector<entry>&);
void displayRecord(vector<entry>);
void printData(entry);
void displayAll(vector<entry>);
void changeRecord(vector<entry>&);

int main(){
	vector<entry> inventory;
 	loadRecords(inventory);
	string selection;
	cout<<"Would you like to a) display all, b)display a single entry, c) edit a specfic entry, d)add new entry, f)quit"<<endl;
	cin>>selection;
	if (selection=="a"){
		displayAll(inventory);
		main();
	}else if(selection=="b"){
		displayRecord(inventory);
		main();
	}else if (selection=="c"){
		changeRecord(inventory);
		main();
	}else if (selection=="d"){
		newRecord(inventory);	
		main();
	}
}

void newRecord(vector<entry>& inventory){
	bool samePart=false;
	int newPartNum;
	cout<<"Enter the part number of the new entry: ";cin>>newPartNum;
        for (int i=0; i<inventory.size();i++){
                if (inventory[i].partNum==newPartNum){
			cout<<"Cannot of have two items with the same part number!"<<endl;
			samePart=true;
        		}
	}
	if (samePart==false){
	string newDescript;
        cout<<"Enter the  description: ";cin>>newDescript;
        int newQuanity;
        cout<<"Enter the quantity: ";cin>>newQuanity;
        double newWholesale;
        cout<<"Enter the wholesale price: ";cin>>newWholesale;
        double newRetail;
        cout<<"Enter the retail price: ";cin>>newRetail;
        string newDate;
        cout<<"Enter the date: ";cin>>newDate;
	cout<<endl;	
	inventory.push_back(entry(newPartNum,newDescript,newQuanity,newWholesale,newRetail,newDate));
	}
	writeRecords(inventory);
}

void displayRecord(vector<entry> inventory){
	int partNum;
	cout<<"Enter the part number of the entry: ";cin>>partNum;
	for (int i=0; i<inventory.size();i++){
		if (inventory[i].partNum==partNum){
			printData(inventory[i]);
			cout<<endl;
		}
	}	
}
void printData(entry toPrint){
	cout<<"Part Number: "<<toPrint.partNum<<endl;
        cout<<"Item Description: "<<toPrint.itemInfo<<endl;
        cout<<"Quanity: "<<toPrint.quanity<<endl;
        cout<<"Wholesale Cost: "<<toPrint.wholesaleCost<<endl;
        cout<<"Retail Cost: "<<toPrint.retailCost<<endl;
        cout<<"Date Added: "<<toPrint.date<<endl;
}


void displayAll(vector<entry> inventory){
  	for (int i=0; i<inventory.size();i++){
                printData(inventory[i]);
		cout<<"----------------"<<endl;
        }

}

void changeRecord(vector<entry>& inventory){
	int partNum;
        cout<<"Enter the part number of the record you would like to change: ";cin>>partNum;
        for (int i=0; i<inventory.size();i++){
                if (inventory[i].partNum==partNum){
        	string newDescript;
        	cout<<"Enter a new description: ";cin>>newDescript;
        	int newQuanity;
       	 	cout<<"Enter the new quantity: ";cin>>newQuanity;
        	double newWholesale;
        	cout<<"Enter the new wholesale price: ";cin>>newWholesale;
        	double newRetail;
        	cout<<"Enter the new retail price: ";cin>>newRetail;
        	string newDate;
       		cout<<"Enter the new date: ";cin>>newDate;
		cout<<endl;
        	inventory[i]=(entry(partNum,newDescript,newQuanity,newWholesale,newRetail,newDate));
		cout<<endl;
                }
        }
	writeRecords(inventory);
}

void loadRecords(vector<entry>& inventory){
	fstream file;
        file.open("inventory", ios::in);
	string line;
	while(getline(file,line)){
		string date, itemDescription;
		int partNum, quanity;
		double wholesale, retail;
			
		int positionStart=0;
        	int positionEnd=0;
                	positionEnd=line.find("|",positionEnd+1);
        	partNum=atoi((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());
                	positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	itemDescription=line.substr(positionStart+1,(positionEnd-positionStart)-1);
                	positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	quanity=atoi((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());
                	positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	wholesale=atoi((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());
                	positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	retail=atof((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());
                	positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	date=line.substr(positionStart+1,(positionEnd-positionStart)-1);
		inventory.push_back(entry(partNum,itemDescription,quanity,wholesale,retail,date));
	}
	file.close();
}

void writeRecords(vector<entry> inventory){
	fstream file;
        file.open("inventory", ios::out|ios::trunc);
	for (int i; i<inventory.size();i++){
		file<<"|"<<inventory[i].partNum<<"|"<<inventory[i].itemInfo<<"|"<<inventory[i].quanity<<"|"<<inventory[i].wholesaleCost<<"|"<<inventory[i].retailCost<<"|"<<inventory[i].date<<endl;
	}
	file.close();
}
/*
~Program Output~

Would you like to a) display all, b)display a single entry, c) edit a specfic entry, d)add new entry, f)quit
a
Part Number: 0
Item Description: Gedget
Quanity: 5
Wholesale Cost: 6
Retail Cost: 7
Date Added: 5/5/55
----------------
Part Number: 1
Item Description: Gadet
Quanity: 5
Wholesale Cost: 6
Retail Cost: 7
Date Added: 5/5/55
----------------
Part Number: 2
Item Description: Gget
Quanity: 5
Wholesale Cost: 6
Retail Cost: 7
Date Added: 5/5/55
----------------
Part Number: 3
Item Description: Gadget
Quanity: 5
Wholesale Cost: 6
Retail Cost: 7
Date Added: 5/5/55
----------------
Part Number: 4
Item Description: get
Quanity: 5
Wholesale Cost: 6
Retail Cost: 7
Date Added: 5/5/55
----------------
Part Number: 5
Item Description: wheel
Quanity: 75
Wholesale Cost: 50
Retail Cost: 75
Date Added: 5-5-2015
----------------
Part Number: 6
Item Description: car
Quanity: 1
Wholesale Cost: 300000
Retail Cost: 500000
Date Added: 5-5-2013
----------------
Would you like to a) display all, b)display a single entry, c) edit a specfic entry, d)add new entry, f)quit
b       
Enter the part number of the entry: 4
Part Number: 4
Item Description: get
Quanity: 5
Wholesale Cost: 6
Retail Cost: 7
Date Added: 5/5/55

Would you like to a) display all, b)display a single entry, c) edit a specfic entry, d)add new entry, f)quit
c
Enter the part number of the record you would like to change: 5
Enter a new description: engine 
Enter the new quantity: 5
Enter the new wholesale price: 50
Enter the new retail price: 75
Enter the new date: 4-4-2014


Would you like to a) display all, b)display a single entry, c) edit a specfic entry, d)add new entry, f)quit
d
Enter the part number of the new entry: 7
Enter the  description: gizmo
Enter the quantity: 500
Enter the wholesale price: 500
Enter the retail price: 700
Enter the date: 3-4-2015

Would you like to a) display all, b)display a single entry, c) edit a specfic entry, d)add new entry, f)quit
f

~inventory text file~
|0|Gedget|5|6|7|5/5/55
|1|Gadet|5|6|7|5/5/55
|2|Gget|5|6|7|5/5/55
|3|Gadget|5|6|7|5/5/55
|4|get|5|6|7|5/5/55
|5|engine|5|50|75|4-4-2014
|6|car|1|300000|500000|5-5-2013
|7|gizmo|500|500|700|3-4-2015
*/
