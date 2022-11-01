#ifndef HUMAN_SIM
#define HUMAN_SIM
#pragma once
#include <iostream>
#include <string>
#include "StillsuitSim.h"
using namespace std;

class HumanSim
{
public:
	 HumanSim(string n, StillsuitSim* suit);
	 void setWorldInfo(int time, int temp);
	 void calculateSweat(int time, int temp, int weight);
	 double calculateHydration(int height, int weight, bool s);

private:
	 string name;
	 StillsuitSim* suit;
	 double worldTemp;

	 // Weight of Human
	 int weight;
	 int height;			// in cm
	 bool sex;				// 0 female; 1 male
	 double waterLevel;		// in liters

};
//find the amount of sweat that gets evaporated from the body in a precent

	int evaporate(int sweat, int temp) {
    		float evap = 0;
   		 evap = sweat / temp;
   		 evap = sweat/evap;
    		int e = static_cast<int>(evap);
    		return e;
		}
#endif

