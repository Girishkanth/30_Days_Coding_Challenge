/*
Discus Throw

Problem Statement:
In discus throw, a player is given 33 throws and the throw with the longest distance is regarded as their final score.
You are given the distances for all 33 throws of a player. Determine the final score of the player.

Input Format
    First line will contain TT, number of test cases. Then the test cases follow.
    Each test case contains of a single line of input, three integers A,B,A,B, and CC denoting the distances in each throw.

Output Format
For each test case, output the final score of the player.

Constraints
    1≤T≤1001≤T≤100
    1≤A,B,C≤1001≤A,B,C≤100

Sample 1:
Input:
3
10 15 8
32 32 32
82 45 54

Output:
15
32
82

*/

//Solution:
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b && a>=c)
            cout<<a<<endl;
        else if(b>=a && b>=c)
            cout<<b<<endl;
        else
            cout<<c<<endl;
    }
	return 0;
}
