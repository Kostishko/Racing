#include "Wolf.h"
#include "Hare.h"
#include <cstdlib>
#pragma once


int Wolf::Update(Racer* racers[])
{
	if (isHowled)
	{
		for (int i = 0; i< sizeof(racers) / sizeof(*racers); i++)
		{
			if ( racers[i]->name=="Wolf")
			{
				continue;
			}
			else 
			{
				racers[i]->StunMe();
			}
		}
		isHowled = false;
	}
	else
	{
		position += StepSize;
		cout << "Wolf stepped! \n";
	}
	return position;
}
void Wolf::StateCheck(int leader, int thisRacer)
{
	if (leader != thisRacer && (rand() % 4 == 0))
	{
		isHowled = true;
		cout << "Wolf has howled! \n";
	}
}