#include "Racer.h"
#include <iostream>
using namespace std;
#pragma once
class Wolf:public Racer
{
private:
	bool isHowled;

public:
	Wolf(int track) : Racer(track)
	{
		name = "Wolf";
		symbol = "W";		
		position = 0;
		StepSize = 1;
		isHowled = false;
	};
	virtual int Update(Racer* racers[]);
	virtual void StateCheck(int leader, int thisRacer);


};

