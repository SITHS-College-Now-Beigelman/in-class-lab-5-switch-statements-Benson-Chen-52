// BensonChen
// Lab 5 Part 2
// 10/08/24
#include <iostream>
#include <iomanip>
using namespace std;

//Coding space
int main()
{
    //Defining Variables
    double gigabytes;
    double hours;
    int type_of_music;

    //Asking user for the amount of gigabytes
    //Setting all future output to be in decimal form as well as going up to 2 decimal places
    cout << fixed << setprecision(2) << "\nHow many gigabytes does your monthly plan have: ";
    cin >> gigabytes;

    //Asking user for the type of music they want to stream in terms of numerical equivalents
    cout << "What type of music do you wish to stream - low-quality (1), medium-quality (2), high-quality (3): ";
    cin >> type_of_music;

    /*Calculations by taking user input, multiplying by 1000 to covert 
    gigabytes to megabytesand then dividing by consumption of data per hour*/
    double streaming_hours_low = (gigabytes * 1000)/43.2;
    double streaming_hours_med = (gigabytes * 1000)/72;
    double streaming_hours_high = (gigabytes * 1000)/115.2;

    //switch to run through the different cases that could occur
    switch(type_of_music)
    {
        case 1: //If user chose 1 then this line of code will run
            cout << "You can stream this many hours of low-quality music: " << streaming_hours_low;
            break; //exits the switch
        case 2: //If user chose 2 then this line of code will run
            cout << "You can stream this many hours of medium-quality music: " << streaming_hours_med;
            break;
        case 3: //If user chose 3 then this line of code will run
            cout << "You can stream this many hours of high-quality music: " << streaming_hours_high;
            break;
        default:
            cout << "Invalid numerical equivalent for type of exercise completed.";
    }
    return 0;
}
/*How many gigabytes does your monthly plan have: 500
What type of music do you wish to stream - low-quality (1), medium-quality (2), high-quality (3): 3
You can stream this many hours of high-quality music: 4340.28*/
