/*
Car Class

Problem Statement:
Design a class Car having parameterized constructor that takes two arguments as an input i.e noOfGear and color and a printCarInfo method that prints the CarInfo i.e noOfGear and color.
Design another class RaceCar having parameterized constructor has an additional attribute maxSpeed and printRaceCarinfo method that prints the RaceCarInfo i.e noOfGear, color and maxSpeed.
Note: You have to create an object of class RaceCar and call the printRaceCarInfo method.

Sample Input 1:
5
red
1000

Sample Output 1:
noOfGear: 5
color: red
maxSpeed: 1000

Explanation of Sample output 1:
When we call the printinfo function, all the info related to the car will be printed the same as the above format.
*/

//Solution:

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class Car 
{
    public:
    int a,b;
    string col;    
};
class RaceCar: public Car 
{
    public:
    RaceCar(int noOfGear,string color,int maxSpeed)
    {
        a=noOfGear;
        col=color;
        b=maxSpeed;
    }
    void printInfo()
    {
        cout<<"noOfGear:"<<" "<<a<<endl;
        cout<<"color:"<<" "<<col<<endl;
        cout<<"maxSpeed:"<<" "<<b<<endl;
    }
};
int main() 
{
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}