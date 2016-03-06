#include "Dice.h"
#include<iostream> 

using namespace std;

Dice::Dice()
{
}

Dice::~Dice()
{
}

int Dice::roll()
{
	return (rand() % 6) + 1;
}


float Dice::average(Dice dice, int numRolls)
{
	int sum = 0;
	int i = 0;
	for (i = 1; i <= numRolls; i++)
	{
		sum += dice.roll();
	}
	return sum / numRolls;
}

float Dice::average(int arrInt[], int numInts)
{
	int sum = 0;
	int i = 0;
	for (i = 1; i <= numInts; i++)
	{
		sum += arrInt[i];
	}
	return sum / numInts;
}