#pragma once
#include <string> 
using namespace std;

class Racer
{
protected:
	
	int StepSize, trackLength;


public:
	int position;
	string symbol , name;
	string GetName();
	virtual int Update();
	string Draw();	
	Racer(int track) : trackLength(track), StepSize(0), position(0)
	{		
	};

};

