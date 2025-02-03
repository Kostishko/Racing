#pragma once
#include <string> 
using namespace std;

class Racer
{
	string name , symbol ;

	int position , StepSize ;

public:
	string GetName();
	bool Update(bool leading);
	string Draw();

};

