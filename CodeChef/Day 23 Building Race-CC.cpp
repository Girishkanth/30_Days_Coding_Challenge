/*
Problem
Two friends Chef and Chefina are currently on floors A and B respectively. They hear an announcement that prizes are being 
distributed on the ground floor and so decide to reach the ground floor as soon as possible.

Chef can climb down X floors per minute while Chefina can climb down Y floors per minute. Determine who will reach the ground floor first 
(ie. floor number 0). In case both reach the ground floor together, print Both.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first line of each test case contains four space-separated integers A, B, X, and Y  — the current floor of Chef, the current floor of Chefina, 
speed of Chef and speed of Chefina in floors per minute respectively.

Output Format
For each test case, output on a new line:
Chef if Chef reaches the ground floor first.
Chefina if she reaches the ground floor first.
Both if both reach the ground floor at the same time.

You may print each character of the string in uppercase or lowercase. For example, the strings CHEF, chef, Chef, and chEF are all considered the same.

Constraints
1≤T≤25001≤T≤2500
1≤A,B≤1001≤A,B≤100
1≤X,Y≤101≤X,Y≤10

Sample 1:
Input
4
2 2 2 2
4 2 1 5
3 2 4 1
3 2 2 1

Output
Both
Chefina
Chef
Chef
*/

//Solution:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(a/x>b/y)
	    cout<<"Chefina"<<endl;
	    else if(a/x<b/y)
	    cout<<"Chef"<<endl;
	    else
	    cout<<"Both"<<endl;
	}
	return 0;
}
