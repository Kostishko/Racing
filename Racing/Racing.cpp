// Racing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Racer.h"

using namespace std;

static void DrawTrack(Racer* racers[]);

int main()
{
    Racer *racers[] = { new Racer(),new Racer() };
    
    bool finished = false;
    int winner = -1;

    while (!finished )
    {
        DrawTrack(racers);
        if (!finished && winner >= 0)
        {
            cout << racers[winner]->GetName() + " won!";
        }
        else
        {
            cout << "Press enter to continue...";
            while (cin.get() != '\n') 
            {
            }
            cout << "!!!!";
        }
    }
    
    
}

static void DrawTrack(Racer* racers[])
{
    //todo darw the top of the track
    //for loop that draws every racer (or call Draw() methofd out of them
    //Draw the bottom of the track 
    
}

static int UpdateRacers(Racer* racers[])
{
    //todo for loop that update every racer
    // racers[0]->Update();
    //return number of racer that one if one of them one, -1 otherwice
}
