/*
Good Program

Problem

In computing, the collection of four bits is called a nibble.

Chef defines a program as:

    Good, if it takes exactly XX nibbles of memory, where XX is a positive integer.
    Not Good, otherwise.

Given a program which takes NN bits of memory, determine whether it is Good or Not Good.
Input Format

    First line will contain TT, number of test cases. Then the test cases follow.
    The first and only line of each test case contains a single integer NN, the number of bits taken by the program.

Output Format

For each test case, output GoodGood or Not GoodNot Good in a single line. You may print each character of GoodGood or Not GoodNot Good in uppercase or lowercase (for example, GoOdGoOd, GOODGOOD, goodgood will be considered identical).
Constraints

    1≤T≤10001≤T≤1000
    1≤N≤10001≤N≤1000

*/

//solution
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n%4==0)
	        cout<<"Good"<<endl;
	   else
	    cout<<"Not Good"<<endl;
	}
	return 0;
}
