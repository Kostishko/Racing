#include "Racer.h"


//
//Racer::Racer(int track)
//{
//
//}

int Racer::Update(Racer *racers[])
{
	position += StepSize;
	return position;

}

void Racer::StateCheck(int leader, int thisRacer)
{

}

void Racer::StunMe()
{

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
	for (int i = position+1; i <= trackLength; i++)
	{
		TrackString += " ";
	}

	return TrackString;


}
