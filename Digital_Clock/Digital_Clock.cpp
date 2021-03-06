// Digital_Clock.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>
#include "Message.h"
#include "Solution.h"
#include "Daily_Totals.h"

using namespace std;

int main()

{
	int seconds = 0; 
	int minutes = 0; 
	int hours = 0; 


	while (minutes != 2) // starts loop
	{


		for (seconds < 61; seconds++;) // iterates 60 seconds
		{

			if (seconds == 60) // resets seconds adds to minutes
			{
				minutes = minutes + 1;
				seconds = seconds - 60;
			}
			if (minutes == 60) // resets minutes adds to hours
			{
				hours = hours + 1;
				minutes = 0;
			}
			if (minutes == 15) // displays time to stand after 15 minutes
			{
				cout << "Time to stand" << endl;
			}

			system("cls"); // clears screen

			cout << "Hours Active:" << hours << "| Minutes:" << minutes << "| Seconds:" << seconds << " |"; // GUI
			//adds a delay to the computer process to accurately simulate one second
			Sleep(1000);

			if (minutes == 1 & seconds == 0) 
			{
				Effects_of_Sitting();
				int MountainClimbers;
				
				cout << "Enter the Number of Mountain Climbers you wish to perform" << endl;
				cin >> MountainClimbers;
				Mountain_Climbers(MountainClimbers);
				Daily_Totals_Mountain_Climbers(MountainClimbers);
				system("Pause");
			}

			if (minutes == 2 & seconds == 0) 
			{ 
				int Pushups;
				cout << "Enter the Number of Pushups you wish to perform" << endl;
				cin >> Pushups;
				Push_Ups(Pushups);
				Daily_Totals_Pushups(Pushups);
				system("Pause");
			}
		}
	}
	system("pause");
	return 0;
}