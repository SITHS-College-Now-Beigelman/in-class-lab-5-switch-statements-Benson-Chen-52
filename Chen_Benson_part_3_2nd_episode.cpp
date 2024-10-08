// Benson Chen
// Lab 5 Part 3 2nd Episode
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
    int final_north;
    int final_south;
    int final_east;
    int final_west;
    int steps = 0;
    int final_steps;
    srand(time(0));
    
    for(int i = 1; i<=10; i++)
    {
        while(final_north != 3 || final_east != 2)
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
            {
                final_north = north_number - south_number;
                final_east = east_number - west_number;
            }
            else if(north_number >= south_number && west_number > east_number)
            {
                final_north = north_number - south_number;
                final_west = west_number - east_number;
            }
            else if(south_number > north_number && east_number >= west_number)
            {
                final_south = south_number - north_number;
                final_east = east_number - west_number;
            }
            else if(south_number > north_number && west_number > east_number)
            {
                final_south = south_number - north_number;
                final_west = west_number - east_number;
            }
            cout << steps;
        }
    }
    cout << "The robot took " << steps << " step to reach 3 blocks North and 2 blocks East of the starting point.";
    return 0;
}
