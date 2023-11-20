/*
Bath in Winter:

Problem
A geyser has a capacity of XX litres of water and a bucket has a capacity of YY litres of water.
One person requires exactly 22 buckets of water to take a bath. Find the maximum number of people that can take bath using water from one completely filled geyser..

Input Format

    First line will contain TT, number of test cases. Then the test cases follow.
    Each test case contains a single line of input, two integers X,YX,Y.

Output Format

For each test case, output the maximum number of people that can take bath.

Constraints

    1≤T≤10001≤T≤1000
    1≤X,Y≤1001≤X,Y≤100

Sample 1:
Input:
4
10 6
25 1
100 10
30 40

output:
0
12
5
0
*/

//solution:

#include <bits/stdc++.h>

using namespace std;


int main() {
int t;

    cin>>t;

    while(t--){

        int x,y;

        cin>>x>>y;

        int b=x/y;

        double k;

        k=b/2.0;

        k=floor(k);

        cout<<k<<endl;

        

    }

}

