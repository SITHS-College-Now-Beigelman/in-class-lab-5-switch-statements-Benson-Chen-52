// Benson Chen
// Lab 5 Part 1
// 10/08/24
#include <iostream>
#include <iomanip>
using namespace std;

//Coding Space
int main()
{
    //Defining variables
    float Duration;
    float user_weight;
    int MET_1 = 2;
    int MET_2 = 3;
    float MET_3 = 8.8;
    int type_of_exercise;
    int type_of_exercise_2;

    //Asking user for duration of exercise
    //Sets the output value to be in decimal notation and only goes up to 2 decimal places
    cout << fixed << setprecision(2) << "\nWhat is the total amount of minutes you exercised for: ";
    cin >> Duration;

    //Asking user for weight in kilograms
    cout << "What is your weight in kilograms: ";
    cin >> user_weight;

    //Asking user for the type of exercise completed
    cout << "What type of exercise did you complete - walking slowly (1), walking quickly (2), jogging (3)): ";
    cin >> type_of_exercise;

    //calculations for the total calories burned based off of user input
    float calories_burned_1 = (Duration) * (MET_1 * 3.5* user_weight)/200;
    float calories_burned_2 = (Duration) * (MET_2 * 3.5* user_weight)/200;
    float calories_burned_3 = (Duration) * (MET_3 * 3.5* user_weight)/200;

    //switch to output the calories burned for the specific exercise the user chose
    switch(type_of_exercise)
    {
        case 1: //If user chose 1 then this line of code will run
            cout << "You burned " << calories_burned_1 << " calories." << endl;
        break; //exits the switch
        case 2: //If user chose 2 then this line of code will run
            cout << "You burned " << calories_burned_2 << " calories." << endl;
        break;
        case 3: //If user chose 3 then this line of code will run
            cout << "You burned " << calories_burned_3 << " calories." << endl;
        break;
        default: //In case the user inputs some values that is not 1, 2, or 3.
            cout << "Invalid numerical equivalent for type of exercise completed." << endl;
    }

    //Extra Credit - How many calories does the user want to burn
    //Defining more variables
    double calories_want_to_burn;

    //Obtaining user input
    cout << "\nHow many calories does the user wish to burn today: ";
    cin >> calories_want_to_burn;

    //Once again asking for user input of the type of exercise completed
    cout << "What type of exercise do you wish to do to reach this goal - walking slowly (1), walking quickly (2), jogging (3)): ";
    cin >> type_of_exercise_2;

    //Calculations for the minutes needed to reach user's calories goal
    double minutes_needed_1 = (calories_want_to_burn*200)/(MET_1 * 3.5* user_weight);
    double minutes_needed_2 = (calories_want_to_burn*200)/(MET_2 * 3.5* user_weight);
    double minutes_needed_3 = (calories_want_to_burn*200)/(MET_3 * 3.5* user_weight);

    //Another switch to output the minutes needed for the specific exercise the user chose
    switch(type_of_exercise_2)
    {
        case 1: //If user chose 1 then this line of code will run
            cout << "The amount of minutes of exercise needed: " << minutes_needed_1;
            break; //Exits the switch
        case 2: //same thing as case 1
            cout << "The amount of minutes of exercise needed: " << minutes_needed_2;
            break;
        case 3: //same thing as case 2
            cout << "The amount of minutes of exercise needed: " << minutes_needed_3;
            break;
        default: //In case user inputs a number that is not 1, 2, or 3
            cout << "Invalid numerical equivalent for type of exercise completed.";
    }

    return 0;
}
/*What is the total amount of minutes you exercised for: 50.67
What is your weight in kilograms: 73.2
What type of exercise did you complete - walking slowly (1), walking quickly (2), jogging (3)): 2
You burned 194.72 calories.

How many calories does the user wish to burn today: 300
What type of exercise do you wish to do to reach this goal - walking slowly (1), walking quickly (2), jogging (3)): 3
The amount of minutes of exercise needed: 26.61*/