//Ethan Larkham
//Lab 5-19 
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
struct planet{
	string planetName;
	int planetNum;
	double mass;
	int moons;
	double distance;
	double orbitalPeriod;
	double revolutionPeriod;
	double radius;
	planet(string iName,int iPlanet, double iMass, int iMoons, double iDistance, double iOrbital, double iRevol, double iRadius){
		planetName=iName;
		planetNum=iPlanet;
		mass=iMass;
		moons=iMoons;
		distance=iDistance;
		orbitalPeriod=iOrbital;
		revolutionPeriod=iRevol;
		radius=iRadius;
	}
};

void loadData(vector<planet>&);
void displayPlanet(string);
void printData(planet);
void displayAll();
double myWeight(string);

vector<planet> planets;

int main(){
 	loadData(planets);
	displayAll();
	cout<<"----------------"<<endl;
	displayPlanet("Earth");
	cout<<"You weigh "<<myWeight("Mars")<<"lbf on Mars."<<endl;
}

void displayPlanet(string name){
	for (int i=0; i<planets.size();i++){
		if (planets[i].planetName==name){
			printData(planets[i]);
			cout<<endl;
		}
	}	
}
void printData(planet toPrint){
	cout<<"Planet Name: "<<toPrint.planetName<<endl;
    cout<<"Planet Number: "<<toPrint.planetNum<<endl;
    cout<<"Mass: "<<toPrint.mass<<endl;
    cout<<"Moons: "<<toPrint.moons<<endl;
    cout<<"Distance: "<<toPrint.distance<<endl;
    cout<<"Orbital Period: "<<toPrint.orbitalPeriod<<endl;
	cout<<"Revolution Period: "<<toPrint.revolutionPeriod<<endl;
	cout<<"Radius: "<<toPrint.radius<<endl;
}


double myWeight(string name){
	//d means destination
	double eWeight;
	cout<<"What is your weight on Earth?: ";cin>>eWeight;
	eWeight=eWeight*0.453592;
	double dWeight;
	double dRadius;
	double dMass;	
	for (int i=0; i<planets.size();i++){
		if (planets[i].planetName==name){
				dMass=planets[i].mass;
				dRadius=planets[i].radius*1000;
		}
	}
	double UGC=6.67e-11;
	double dForce=UGC*((eWeight*dMass)/pow(dRadius,2));
	dWeight=(dForce/9.8)*2.2;
	return dWeight;	
}

void displayAll(){
  	for (int i=0; i<planets.size();i++){
                printData(planets[i]);
		cout<<"----------------"<<endl;
        }

}


void loadData(vector<planet>& planets){
	fstream file;
        file.open("planets", ios::in);
	string line;
	while(getline(file,line)){
		string planetName;
		int planetNum, moons;
		double mass, distance, orbitalPeriod, revolutionPeriod, radius;
			
		int positionStart=0;
        	int positionEnd=0;
                	positionEnd=line.find("|",positionEnd+1);
        	planetName=(line.substr(positionStart+1,(positionEnd-positionStart)-1));
                	positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	planetNum=atoi((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());
                	positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	mass=atof((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());
                	positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	moons=atoi((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());
                	positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	distance=atof((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());
                	positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	orbitalPeriod=atof((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());
					positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	revolutionPeriod=atof((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());
					positionStart=positionEnd;
                	positionEnd=line.find("|",positionEnd+1);
        	radius=atof((line.substr(positionStart+1,(positionEnd-positionStart)-1)).c_str());

		planets.push_back(planet(planetName,planetNum,mass,moons,distance,orbitalPeriod,revolutionPeriod,radius));
	}
	file.close();
}
/*
   Planet Name: Mercury
   Planet Number: 1
Mass: 3.3e+23
Moons: 0
Distance: 5.79e+07
Orbital Period: 87.97
Revolution Period: 58.64
Radius: 2439
----------------
Planet Name: Venus
Planet Number: 2
Mass: 4.87e+24
Moons: 0
Distance: 1.08e+08
Orbital Period: 224.71
Revolution Period: -243.5
Radius: 6051
----------------
Planet Name: Earth
Planet Number: 3
Mass: 5.98e+24
Moons: 1
Distance: 1.5e+08
Orbital Period: 365.25
Revolution Period: 0.997
Radius: 6378
----------------
Planet Name: Mars
Planet Number: 4
Mass: 6.42e+23
Moons: 2
Distance: 2.28e+08
Orbital Period: 686.98
Revolution Period: 1.03
Radius: 3397
----------------
Planet Name: Jupiter
Planet Number: 5
Mass: 1.9e+27
Moons: 16
Distance: 7.78e+08
Orbital Period: 4332.7
Revolution Period: 0.414
Radius: 71492
----------------
Planet Name: Saturn
Planet Number: 6
Mass: 5.69e+27
Moons: 18
Distance: 1.43e+09
Orbital Period: 10759.5
Revolution Period: 0.444
Radius: 60268
----------------
Planet Name: Uranus
Planet Number: 7
Mass: 8.69e+25
Moons: 15
Distance: 2.87e+09
Orbital Period: 30685
Revolution Period: -0.718
Radius: 25559
----------------
Planet Name: Neptune
Planet Number: 8
Mass: 1.02e+26
Moons: 8
Distance: 4.5e+09
Orbital Period: 60190
Revolution Period: 0.67125
Radius: 24746
----------------
----------------
Planet Name: Earth
Planet Number: 3
Mass: 5.98e+24
Moons: 1
Distance: 1.5e+08
Orbital Period: 365.25
Revolution Period: 0.997
Radius: 6378

What is your weight on Earth?: 141
You weigh 53.2784lbf on Mars.
*/
