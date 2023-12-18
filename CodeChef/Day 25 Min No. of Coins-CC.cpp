/*
Problem:

Chef has infinite coins in denominations of rupees 55 and rupees 1010.
Find the minimum number of coins Chef needs, to pay exactly XX rupees. If it is impossible to pay XX rupees in denominations of rupees 55 and 1010 only, print −1−1.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single integer XX.

Output Format
For each test case, print a single integer - the minimum number of coins Chef needs, to pay exactly XX rupees. 
If it is impossible to pay XX rupees in denominations of rupees 55 and 1010 only, print −1−1.

Sample 1:
Input
3
50
15
8

Output
5
2
-1
*/

//Solution:
#include <iostream>

using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--){

        int x;

        cin>>x;

        if(x%5==0) 

            cout<<x/10 + (x%10)/5 <<endl;

        else 

            cout<<"-1"<<endl;

    } 

	return 0;

}
