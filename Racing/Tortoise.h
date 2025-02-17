#include "Racer.h"
#include <iostream>
#pragma once
class Tortoise : public Racer
{

public :
	Tortoise(int track) : Racer(track)
	{
		name = "Tortoise";
		symbol = "T";
		stunCounter = 0;
		position = 0;
		StepSize = 1;
	};
	virtual int Update(Racer* racers[]);
	virtual void StunMe();
};

