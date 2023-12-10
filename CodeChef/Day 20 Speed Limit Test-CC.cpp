/*
Speed Limit Test:

Problem
Alice is driving from her home to her office which is AA kilometers away and will take her XX hours to reach.
Bob is driving from his home to his office which is BB kilometers away and will take him YY hours to reach.
Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.

Input Format
The first line will contain TT, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing four integers A,X,B,A,X,B, and YY, the distances and and the times taken by Alice and Bob respectively.

Output Format
For each test case, if Alice is faster, print ALICE. Else if Bob is faster, print BOB. If both are equal, print EQUAL.
You may print each character of the string in uppercase or lowercase (for example, the strings equal, equAL, EquAl, and EQUAL will all be treated as identical).

Constraints
1≤T≤10001≤T≤1000
1≤A,X,B,Y≤10001≤A,X,B,Y≤1000

Sample 1:
Input
3
20 6 20 5
10 3 20 6
9 1 1 1

Output
Bob
Equal
Alice
*/

//Solution:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   float a,x,b,y;
	   cin>>a>>x>>b>>y;
	   float c=a/x;
	   float d=b/y;
	   if(c>d)
	   {
	       cout<<"Alice\n";
	   }
	   else if(d>c)
	   {
	       cout<<"Bob\n";
	   }
	   else
	   {
	       cout<<"EQUAL\n";
	   }
	}
	return 0;
}
