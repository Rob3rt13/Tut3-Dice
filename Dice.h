#pragma once

class Dice
{
public:
	Dice();
	~Dice();
	int roll();
	float average(Dice dice, int numRolls);
	float average(int arrInt[], int numInts);
};