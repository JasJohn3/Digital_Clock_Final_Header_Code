#pragma once
#include <iostream>
using namespace std;
void Effects_of_Sitting();

int Push_Ups(int Pushups);
int Mountain_Climbers(int MountainClimbers);

int Push_Ups(int Pushups)
{
	cout << "\nPerform " << Pushups << " Pushups" << endl;
	return Pushups;
}
int Mountain_Climbers(int MountainClimbers)
{
	cout << "\nPerform " << MountainClimbers << " Mountain Climbers" << endl;
	return MountainClimbers;
}