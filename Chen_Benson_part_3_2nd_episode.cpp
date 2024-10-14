// Benson Chen
// Lab 5 Part 3 2nd Episode
// 10/08/24
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{   
    //Declares variables
    int north_number = 0;
    int south_number = 0;
    int east_number = 0;
    int west_number = 0;
    int final_north;
    int final_south;
    int final_east;
    int final_west;
    int steps = 0;
    double final_steps = 0;
    int real_final_north = 0;
    int real_final_east = 0;
    int steps_2 = 0;
    srand(time(0)); //Generates a random sequence of numbers based off the time
    
    while(final_north != 3 || final_east != 2) //A while loop that stops once the robot reached the destination
    {   
        steps += 1; // Counts the steps the robot took
        int direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West

        // Adds 1 to each variable depending on the number generated
        if(direct == 1)
            north_number += 1;
        else if(direct == 2)
            south_number += 1;
        else if(direct == 3)
            east_number += 1;
        else if(direct == 4)
            west_number += 1;  
        else
            cout << "The number generated went awire. Robot is incapacitated. Better luck next time." << endl;

        // Does all the calculations based off of the numbers generated.
        // If north and east are greater than their counterparts
        if(north_number >= south_number && east_number >= west_number)
        {
            final_north = north_number - south_number; // North - south
            final_east = east_number - west_number; // East - West
        }
        else if(north_number >= south_number && west_number > east_number)
        {
            final_north = north_number - south_number; // North - South
            final_west = west_number - east_number; // West - East
        }
        else if(south_number > north_number && east_number >= west_number)
        {
            final_south = south_number - north_number; // South - North
            final_east = east_number - west_number; // East - West
        }
        else if(south_number > north_number && west_number > east_number)
        {
            final_south = south_number - north_number; // South - North
            final_west = west_number - east_number; // West - East
        }
    }
    // Prints the total steps the robot took to reach the destination
    cout << "The robot took " << steps << " steps to reach 3 blocks North and 2 blocks East of the starting point.\n";

    //Runs 10 iterations of the code
    for (int i = 1; i <= 10; i++) 
    {   
        // Another while loop that serves the same purpose as the first one
        while (real_final_north != 3 || real_final_east != 2) 
        {
            int direction = rand() % 4 + 1;  // Random number generator
            
            // If statements that changes the values based off of the number generated
            if(direction == 1) real_final_north++;      
            else if(direction == 2) real_final_north--; 
            else if(direction == 3) real_final_east++; 
            else if(direction == 4) real_final_east--; 

            steps_2++; // Counts the steps
        }
        final_steps += steps_2; // Adds the steps for each iteration
    }
    double average_steps = final_steps/10; // The calculations for the average steps
    // Prints the average number of steps it took to reach the destination
    cout << "On average the robot took " << average_steps << " to reach 3 blocks North and 2 blocks East of the starting point across 10 iterations.";
    return 0;
}
/*
The robot took 105 steps to reach 3 blocks North and 2 blocks East of the starting point.
On average the robot took 6807 to reach 3 blocks North and 2 blocks East of the starting point across 10 iterations.*/