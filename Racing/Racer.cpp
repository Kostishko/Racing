#include "Racer.h"

#define TRACK 50

Racer::Racer()
{
	string name = "Deafault Name";
	string symbol = "D";

	int position = 0;
	int StepSize = 0;
}

bool Racer::Update(bool leading)
{
	position += StepSize;
	return position >= TRACK;

}

string Racer::GetName()
{
	return name;
}

string Racer::Draw()
{
	string TrackString;
	//draw the track before the racer position 
	for (int i = 0; i < position; i++)
	{
		TrackString += " ";
	}
	// symbol at the racer position
	TrackString += symbol;

	//draw the track after the racer position
	for (int i = position+1; i <= TRACK; i++)
	{
		TrackString += " ";
	}

	return TrackString;


}
