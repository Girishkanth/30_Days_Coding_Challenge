/*
Police and Thief

Problem

Chef discovered that his secret recipe has been stolen. He immediately informs the police of the theft.

It is known that the policeman and thief move on the number line. You are given that:

    The initial location of the policeman on the number line is XX and his speed is 22 units per second.
    The initial location of the thief on the number line is YY and his speed is 11 unit per second.

Find the minimum time (in seconds) in which the policeman can catch the thief. Note that,
the policeman catches the thief as soon as their locations become equal and the thief will try to evade the policeman for as long as possible.

Input Format

    The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
    The first and only line of each test case contains two integers XX and YY, as described in the problem statement.

Output Format

For each test case, output in a single line the minimum time taken by the policeman to catch the thief.

Constraints
    1≤T≤10001≤T≤1000
    −105≤X,Y≤105−105≤X,Y≤105

Sample 1:
Input
3
1 3
2 1
1 1

Output
2
1
0
*/

//Solution:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        cout<<abs(x-y)<<endl;
    }
	return 0;
}
