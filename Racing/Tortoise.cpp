#include "Tortoise.h"

int Tortoise::Update(Racer* racers[])
{
	if (!isStunned)
	{
		position += StepSize;
		cout << "Tortoise has stepped! \n";
	}
	else
	{
		if (stunCounter == 2)
		{
			isStunned = false;
			stunCounter = 0;
		}
		else
		{
			stunCounter++;
		}
	}
	return position;
}

void Tortoise::StunMe()
{
	isStunned = true;
	cout << "Tortoise has been stunned! \n";
	stunCounter=0;
}

