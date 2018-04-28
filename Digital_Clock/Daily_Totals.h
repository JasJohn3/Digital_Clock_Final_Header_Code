#pragma once
#include <iostream>

using namespace std;
void Daily_Totals_Pushups(int Pushups);
void Daily_Totals_Mountain_Climbers(int MountainClimbers);

void Daily_Totals_Pushups(int Pushups)
{
	int Daily_Total_Pushups = 0;

	Daily_Total_Pushups = Pushups + Daily_Total_Pushups;


	cout << "\nYou have performed " << Daily_Total_Pushups << " Pushups!" << endl;

	cout << "\nRest Well, you have earned it!" << endl;
}



void Daily_Totals_Mountain_Climbers(int MountainClimbers)
{

	int Daily_Total_MountainClimbers = 0;

	Daily_Total_MountainClimbers = MountainClimbers + Daily_Total_MountainClimbers;


	cout << "\nYou have performed " << Daily_Total_MountainClimbers << " Mountain Climbers!" << endl;
	cout << "\nRest Well, you have earned it!" << endl;
}