#include "Racer.h"
#include <cstdlib>
#include <iostream>
using namespace std;
#pragma once

class Hare : public Racer
{
private:
	bool isAsleep;

public:
	Hare(int track) : Racer(track)
	{
		name = "Hare";
		symbol = "H";
		isAsleep = false;
		position = 0;
		stunCounter = 0;
		StepSize = 3;		
	};
	virtual int Update(Racer* racers[]);
	virtual void StateCheck(int leader, int thisRacer);
	virtual void StunMe();
};

