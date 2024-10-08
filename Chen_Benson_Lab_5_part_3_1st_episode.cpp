// Benson Chen
// Lab 5 Part 3 1st Episode
// 10/08/24
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int direct;
    int north_number = 0;
    int south_number = 0;
    int east_number = 0;
    int west_number = 0;
    int steps = 0;
    srand(time(0));
    for(int i = 1; i<=25; i++)
    {   
        steps += 1;
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West

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

        if(north_number >= south_number && east_number >= west_number)
            cout << "The robot is " << north_number - south_number << " blocks North of the starting point and " 
            << east_number - west_number << " blocks East of the starting point.\n" << endl;
        else if(north_number >= south_number && west_number > east_number)
            cout << "The robot is " << north_number - south_number<< " blocks North of the starting point and " 
            << west_number - east_number << " blocks West of the starting point.\n" << endl;
        else if(south_number > north_number && east_number >= west_number)
            cout << "The robot is " << south_number - north_number << " blocks South of the starting point and " 
            << east_number - west_number << " blocks East of the starting point.\n" << endl;
        else if(south_number > north_number && west_number > east_number)
            cout << "The robot is " << south_number - north_number << " blocks South of the starting point and " 
            << west_number - east_number << " blocks West of the starting point.\n" << endl;
    }
    return 0;
}
