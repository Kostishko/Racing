#pragma once
#include <string> 
using namespace std;

class Racer
{
protected:
	
	int StepSize, trackLength, stunCounter;


public:
	int position;
	bool isStunned;
	string symbol , name;
	string GetName();
	virtual int Update(Racer *racers[]);
	virtual void StateCheck(int leader, int thisRacer);
	virtual void StunMe();
	string Draw();	
	Racer(int track) : trackLength(track), StepSize(0), position(0), isStunned(false)
	{		
	};


};

