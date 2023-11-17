/*
Problem:
Chef has NN friends. Chef promised that he would gift a pair of shoes (consisting of one left shoe and one right shoe) to each of his NN friends.
Chef was about to go to the marketplace to buy shoes, but he suddenly remembers that he already had MM left shoes.
What is the minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his NN friends?
For example, if N=2N=2, M=4M=4, then Chef already has 44 left shoes, so he must buy 22 extra right shoes to form 22 pairs of shoes.
Therefore Chef must buy at least 22 extra shoes to ensure that he is able to get N=2N=2 pairs of shoes.

Input Format:
The first line contains a single integer TT - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers NN and MM - the number of Chef's friends and the number of left shoes Chef has.

Output Format:
For each test case, output the minimum number of extra shoes that Chef will have to buy to ensure that he is able to get NN pairs of shoes.

Constraints:
    1≤T≤1001≤T≤100
    1≤N≤1001≤N≤100
    0≤M≤1000≤M≤100

Sample 1:
Input:
3
2 4
6 0
4 3

Output:
2
12
5

Explanation:
Test Case 1: Discussed in the problem statement
Test Case 2: Chef initially has no left shoes. He must buy 66 more left shoes and 66 more right shoes to form 66 pairs of shoes.
Test Case 3: Chef initially has 33 left shoes. He must buy 11 more left shoe and 44 more right shoes to form 44 pairs of shoes.
*/

//solution:
#include <iostream>
using namespace std;
int main()
{
    int tc,friends,leftshoe;
    cin>>tc;
    while(tc>0)
    {
        cin>>friends>>leftshoe;

        if(friends>leftshoe)
        {
            cout<<(friends-leftshoe)+friends<<endl;
        }
        else if(leftshoe==0)
        {
            cout<<(friends*2)<<endl;
        }
        else
        {
            cout<<friends<<endl;
        }
        tc--;
    }
    return 0;
}
