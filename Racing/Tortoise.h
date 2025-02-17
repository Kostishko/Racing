#include "Racer.h"
#pragma once
class Tortoise : public Racer
{

public :
	Tortoise(int track) : Racer(track)
	{
		name = "Tortoise";
		symbol = "T";

		position = 0;
		StepSize = 1;
	};
	virtual int Update();

};

