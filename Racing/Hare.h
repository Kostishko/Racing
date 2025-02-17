#include "Racer.h"
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
		StepSize = 3;		
	};
	virtual int Update();
};

