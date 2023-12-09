/*
Problem
Chefland consists of three countries named A,B and C.
Country A exports goods worth A1​ units and imports goods worth A2 units.
Country B exports goods worth B1​ units and imports goods worth B2​ units.
A trade surplus occurs when a country exports strictly more than it imports.
Find whether country C is in trade surplus.
Note that the countries A,B,C trade only between themselves.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of four space-separated integers A1,A2,B1A1​,A2​,B1​ and B2B2​ — denoting the exports and imports of countries AA and BB respectively.

Output Format
For each test case, output on a new line, YES, if country CC is in trade surplus and NO otherwise.
You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints
1≤T≤10001≤T≤1000
1≤A1,A2,B1,B2≤1001≤A1​,A2​,B1​,B2​≤100

Sample 1:
Input
4
4 6 5 4
1 1 1 1
10 5 12 6
1 100 1 100

Output
YES
NO
NO
YES

Explanation:
Let us define net export =(=(exports −− imports)).
Test case 11: Net export of country AA is 4−6=−24−6=−2, while of country BB is 5−4=15−4=1. The net exports of countries AA and BB combined is −2+1=−1−2+1=−1.
Thus, the net export of country CC is 11 and it is in trade surplus.
Test case 22: Net export of country AA is 1−1=01−1=0, while of country BB is 1−1=01−1=0. The net exports of countries AA and BB combined is 00.
Thus, the net export of country CC is also 00 and it is not in trade surplus.
Test case 33: Net export of country AA is 10−5=510−5=5, while of country BB is 12−6=612−6=6. The net exports of countries AA and BB combined is 1111.
Thus, the net export of country CC is −11−11 and it is not in trade surplus.
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

        int a1,a2,b1,b2;

        cin>>a1>>a2>>b1>>b2;

        if(a2+b2>a1+b1)

            cout<<"YES"<<endl;

        else

            cout<<"NO"<<endl;

    }

	return 0;

}

