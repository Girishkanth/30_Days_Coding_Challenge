/*
Sunday Brunch

Problem
On a sunny Sunday afternoon, Chef prepared a brunch for his 2020 neighbours.
Chef prepared a total of XX plates. However, the meal was so good that the neighbours started taking YY plates each.
Find the maximum number of neighbours Chef can feed completely.

Input Format
    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of two space-separated integers XX and YY — the number of plates Chef prepared and the number of plates each person takes respectively.

Output Format
For each test case, output on a new line, the maximum number of neighbours Chef can feed completely.

Constraints
    1≤T≤4051≤T≤405
    20≤X≤10020≤X≤100
    1≤Y≤51≤Y≤5

Sample 1:
Input
4
20  1
20  2
100 4
74  5

Output
20
10
20
14

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
        int x,y;
        cin>>x>>y;
        if(x/y<=20)
        cout<<x/y<<endl;
        else
        cout<<20<<endl;
    }
	return 0;
}
