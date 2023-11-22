/*
Election in Chefland

Problem:
Election season has started in Chefland and the election commission wants to know the count of eligible voters.
There are NN people in Chefland where the age of the ithith person in AiAi​.
Given that a person needs to be at least XX years old to vote, find the number of eligible voters.

Input Format
    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first line of each test case contains two space-separated integers NN and XX — the number of people in Chefland, and the minimum age required for a person to vote in Chefland.
        The next line contains NN space-separated integers, where the ithith integer denotes the age of the ithith person.

Output Format:
For each test case, output on a new line, the number of eligible voters in Chefland.

Constraints:
    1≤T≤2001≤T≤200
    1≤N≤1001≤N≤100
    1≤Ai,X≤1001≤Ai​,X≤100

Sample 1:
Input
4
4 3
5 3 1 2
3 2
1 3 4
4 2
2 1 2 4
5 6
1 2 3 4 5

Output
2
2
3
0

*/

//Solution
#include <iostream>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int arr[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=x)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
