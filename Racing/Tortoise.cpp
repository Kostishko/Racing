#include "Tortoise.h"

int Tortoise::Update()
{
	position += StepSize;
	return position;
}
