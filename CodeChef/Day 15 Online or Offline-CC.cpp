/*
Problem
Chef is confused whether to go out and eat at the restaurant or order food online.
The online order costs NN rupees while the cost of eating at the restaurant is MM rupees.
However, Chef has a discount coupon with which he can avail flat 10%10% off on his online order.
Find the cheaper option for Chef to eat, i.e., whether to order food online or eat at the restaurant.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two space-separated integers NN and MM, the cost of ordering online and eating at the restaurant respectively.

Output Format
For each test case, output on a new line:
ONLINE, if Chef gets a better deal in online ordering,
DINING if Chef gets a better deal in eating at the restaurant,
EITHER if both deals cost the same.
You may print each character in uppercase or lowercase, For example, the strings Online, online, ONLINE, and onLiNe are all considered identical.

Constraints
1≤T≤10001≤T≤1000
1≤N,M≤10001≤N,M≤1000

Sample 1:
Input
4
500 500
500 400
25 22
100 90

Output
ONLINE
DINING
DINING
EITHER
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

        float n,m,off;

        cin>>n>>m;

        off=n*0.10;

        n-=off;

        if(n>m)

            cout<<"DINING"<<endl;

        else if(n<m)

            cout<<"ONLINE"<<endl;

        else if(n==m)

            cout<<"EITHER"<<endl;

    }

	return 0;

}

