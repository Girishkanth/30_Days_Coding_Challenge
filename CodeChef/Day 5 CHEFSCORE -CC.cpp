/*
CHEFSCORE

Problem:
In a test, there are NN problems, each carrying XX marks.
In each problem, Chef either received XX marks or 00 marks.

Determine whether is it possible for Chef to achieve exactly YY marks.

Input Format:
    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of three integers N,X,N,X, and YY, the number of problems, the maximum score for each problem, and the score         Chef wants.

Output Format:
For each test case, output YES if Chef can achieve exactly YY marks, NO otherwise.
You can print each character of the string in uppercase or lowercase. For example, the strings Yes, YES, yes, and yEs, are all considered identical.

Constraints:
    1≤T≤1001≤T≤100
    1≤N≤101≤N≤10
    1≤X≤101≤X≤10
    0≤Y≤N⋅X0≤Y≤N⋅X

Sample 1:
Input
5
1 8 4
3 6 12
4 5 0
10 10 100
8 5 36

Output
NO
YES
YES
YES
NO
*/

//SOLUTION CC

#include <iostream>
using namespace std;

int main()
{
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
	        cin>>n>>x>>y;
	        if(y%x==0)
	        {
	            if(y/x<=n)
	                cout<<"YES"<<endl;
	            else
	                cout<<"NO"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	}
	return 0;
}
