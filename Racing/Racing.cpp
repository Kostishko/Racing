// Racing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Racer.h"
#include "Hare.h"
#include "Tortoise.h"


using namespace std;

#define LeftUpCorner (char)201 
#define LeftLowCorner (char)200 
#define Vertical (char)186 
#define Horizontal (char)205 
#define RightUpCorner (char)187 
#define RightLowCorner (char)188
 

static void DrawTrack(Racer* racers[]);

int trackLength, racerCount;


int main()
{

    trackLength = 100;
    Racer *racers[] = { new Hare(trackLength), new Tortoise(trackLength) };
    
    bool finished = false;
    int winner = -1;
    
    racerCount = sizeof(racers)/sizeof(*racers);

    while (!finished )
    {
        DrawTrack(racers);
        if (!finished && winner >= 0)
        {
            cout << racers[winner]->GetName() + " won!";
        }
        else
        {
            cout << "\nPress enter to continue...";
            while (cin.get() != '\n') 
            {
                
            }
            
        }
    }
    
    
}

static void DrawTrack(Racer* racers[])
{
    //todo darw the top of the track
    cout << LeftUpCorner;
    for (int i = 0; i < trackLength; i++)
    {
        cout << Horizontal;
    }
    cout << RightUpCorner;
    cout << "\n";
    cout << Vertical;
    for (int i = 0; i < trackLength; i++)
    {
        cout << " ";
    }
    cout << Vertical;
    cout << "\n";

    //for loop that draws every racer (or call Draw() methofd out of them
    for (int i = 0; i < racerCount; i++)
    {
        cout << Vertical;
        for (int j = 0; j < trackLength; j++)
        {
            if (j == racers[i]->position)
            {
                cout << racers[i]->symbol;
            }
            else
            {
                cout << " ";
            }
        }
        cout << Vertical;
        cout << "\n";
        cout << Vertical;
        for (int j = 0; j < trackLength; j++)
        {
            cout << " ";
        }
        cout << Vertical;
        cout << "\n";
    }
    
    cout << LeftLowCorner;
    for (int j = 0; j < trackLength; j++)
    {
        cout << Horizontal;
    }
    cout << RightLowCorner;
    cout << "\n";
    //Draw the bottom of the track 
    
}

static int UpdateRacers(Racer* racers[])
{
    //todo for loop that update every racer
    // racers[0]->Update();
    //return number of racer that one if one of them one, -1 otherwice
}
