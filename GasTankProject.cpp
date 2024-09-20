// GasTankProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Creating variables for all given numbers to make calculations easier
    double mpgCity = 23.5;
    double mpgHighway = 28.9;
    double mpgAverage = (mpgCity + mpgHighway) / 2;
    double numofgallons = 20;
    double townDistance = numofgallons * mpgCity;
    double highwayDistance = numofgallons * mpgHighway;
    double combinedDistance = numofgallons * mpgAverage;
    cout << "Your car's city mpg is " << mpgCity << ", so you can go " << townDistance << " miles in town on a tank of gas." << endl;
    cout << "Your car's highway mpg is " << mpgHighway << ", so you can go " << highwayDistance << " miles on the highway on a tank of gas." << endl;
    cout << "Your car's combined mpg is " << mpgAverage << ", so you can go " << combinedDistance << " miles on a tank of gas." << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
/*A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town, and 28.9 miles per gallon when driven on the highway.
Write a program that calculates and displays the distance the car can travel on one tank of gas when driven in town and when driven on the highway.*/

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
