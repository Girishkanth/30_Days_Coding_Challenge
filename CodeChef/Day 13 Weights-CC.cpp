/*
Weights
Problem:
Chef is playing with weights. He has an object weighing WW units. He also has three weights each of X,Y,X,Y, and ZZ units respectively. 
Help him determine whether he can measure the exact weight of the object with one or more of these weights.
If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of single line containing a four positive integers W,X,Y,W,X,Y, and ZZ.

Output Format
For each test case, output on a new line YES if it is possible to measure the weight of object with one or more of these weights, otherwise print NO.
You may print each character of the string in either uppercase or lowercase (for example, the strings yes, YES, Yes, and yeS will all be treated as identical).

Constraints
1≤T≤1041≤T≤104
1≤W,X,Y,Z≤1051≤W,X,Y,Z≤105

Input
4
5 2 1 6
7 9 7 2
20 8 10 12
20 10 11 12

Output
NO
YES
YES
NO
*/

//Solution:
#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    if(w==x+y || w==x+z || w==y+z || w==x+y+z || w==x || w==y || w==z)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}
