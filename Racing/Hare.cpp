#include "Hare.h"




void Hare::StateCheck(int leader, int thisRacer)
{
	if (isAsleep&& (rand()%4==0) && leader==thisRacer)
	{
		isAsleep = false;
		cout << "Hare woke up! \n";
	}

	if (leader != thisRacer && (rand() % 4 == 0))
	{
		isAsleep = true;
		cout << "Hare has felt asleep! \n";
		
	}
}

int Hare::Update(Racer* racers[])
{
	if (!isAsleep&&!isStunned)
	{
		position += StepSize;
		cout << "Hare has stepped! \n";
	}
	else
	{
		if (isStunned)
		{
			if (stunCounter == 2)
			{
				stunCounter = 0;
				isStunned = false;
			}
			else
			{
				stunCounter++;
			}
		}		
	}
	return position;
}

void Hare::StunMe()
{
	if (isAsleep)
	{
		isAsleep = false;
	}
	else
	{
		isStunned = true;
		cout << "Hare has been stunned! \n";
		stunCounter=0;
	}
}


