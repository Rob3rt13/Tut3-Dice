#include "Dice.h"
#include<iostream> 

using namespace std;

int main()
{
	Dice dice;
	int numInts = 0;
	cout << "Enter the number of values the array will hold" << endl;
	cin >> numInts;


	int arrInt[100];

	for (int i = 0; i < numInts; i++)
	{
		cout << "Enter the values" << endl;
		cin >> arrInt[i];
	}
	
	int numRolls = 0;
	cout << "Enter the number of rolls" << endl;
	cin >> numRolls;
	
	float ArrayAvg = dice.average(arrInt, numInts);
	cout << "The Average of the array is" << ArrayAvg << endl;
	cout << "The Average of " << numRolls << " random rolls: " << dice.average(dice, numRolls) << endl;


	return 1;
}
