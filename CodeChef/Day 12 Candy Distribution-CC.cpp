/*
Candy Distribution:

Problem
Chef has NN candies. He has to distribute them to exactly MM of his friends such that each friend gets equal number of candies and each friend gets even number of candies. 
Determine whether it is possible to do so.
NOTE: Chef will not take any candies himself and will distribute all the candies.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers NN and MM, the number of candies and the number of friends.

Output Format
For each test case, the output will consist of a single line containing Yes if Chef can distribute the candies as per the conditions and No otherwise.
You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).

Constraints
1≤T≤10001≤T≤1000
1≤N,M≤10001≤N,M≤1000

Sample 1:
Input
4
9 3
4 1
4 2
8 3

Output
No
Yes
Yes
No
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
        int n,m;
        cin>>n>>m;
        if(n%m==0)
        {
            int d=n/m;
            if(d%2==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }   
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
	return 0;
}
