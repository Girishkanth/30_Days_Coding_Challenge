/*
SET BITS:

Problem Statement:
Write a program to count the number of 1's in the binary representation of an integer.
Detailed explanation (Input/output format, Notes, Images)

Constraints
1 <= N <= 100

Sample Input 1:
9

Sample Output 1:
2

Explanation of Sample Input 1:
Binary Representation of 9 is 1001.

Sample Input 2:
13
Sample Output 2:
3
*/

//Solution -CN

#include <bits/stdc++.h> 
#include <iostream>

using namespace std;
int countBits(int n)
{
    int c=0;
    while(n>0)
    {
        if(n%2==1)
        {
            c++;
        }
        n=n/2;
    }
    return c;
}
int main() 
{
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}