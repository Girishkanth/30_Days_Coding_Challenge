/*
Problem
Chef is a very big fan of Eren Yeager.
In the last season of Attack on Titan, there were NN episodes numbered from 11 to NN.
Each even indexed episode was AA minutes long and each odd indexed episode was BB minutes long.
Calculate the total duration (in minutes) of the last season.

Input Format
The first line of input contains a single integer TT, the number of test cases.
The first and only line of each test case contains three integers NN, A,A, and BB, the number of episodes and the durations of each even-indexed and odd-indexed episodes respectively in minutes.

Output Format
For each test case, print a single integer on a new line, the total duration of the last season in minutes.

Constraints
1≤T≤1001≤T≤100
1≤N≤601≤N≤60
1≤A,B≤601≤A,B≤60

Sample 1:
Input
3
1 2 2
2 3 4
4 20 30
  
Output
2
7
100
*/

//Solution:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(n%2==0){
	        cout<<((n/2)*(x+y))<<endl;
	    }
	    else{
	        cout<<((((n+1)/2)*y)+(((n-1)/2)*x))<<endl;
	    }
	    
	}
	return 0;
}
