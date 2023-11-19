/*
Qualify the round:

Problem:
In a coding contest, there are two types of problems:
    Easy problems, which are worth 11 point each
    Hard problems, which are worth 22 points each

To qualify for the next round, a contestant must score at least XX points. Chef solved AA Easy problems and BB Hard problems. Will Chef qualify or not?

Input Format:
    The first line of input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
    Each test case consists of a single line of input containing three space-separated integers — X,AX,A, and BB.

Output Format:
For each test case, output a new line containing the answer — Qualify if Chef qualifies for the next round, and NotQualify otherwise.
Each character of the answer may be printed in either uppercase or lowercase. For example, if the answer is Qualify, outputs such as qualify, quALiFy, QUALIFY and QuAlIfY will also be accepted as correct.

Constraints:
    1≤T≤1001≤T≤100
    1≤X≤1001≤X≤100
    0≤A,B≤1000≤A,B≤100

Sample 1:
Input:
3
15 9 3
5 3 0
6 2 8

Output:
Qualify
NotQualify
Qualify
*/

//Solution:

#include <iostream>
using namespace std;

int main()
{
	int t,x,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>x>>a>>b;
	    if(a+(b*2)>=x)
	    {
	        cout<<"Qualify"<<endl;
	    }
	    else
	    {
	        cout<<"NotQualify"<<endl;
	    }
	}
	return 0;
}
