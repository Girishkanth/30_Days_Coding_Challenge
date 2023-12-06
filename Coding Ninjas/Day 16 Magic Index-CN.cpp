/*
Magic Index:
You are given a sorted array A consisting of N integers. Your task is to find the magic index in the given array.

Note:
A magic index in an array A[0... N-1] is defined to be an index i such that A[i] = 1.
The elements in the array can be negative.
The elements in the array can be repeated multiple times.
There can be more than one magic index in an array

Sample Input 1 :
1
5
-5 -1 2 1 9

Sample Output 1 :
2
Explanation For Sample Input 1 :
The output is 2 because A[2] = 2 and hence 2 is the magic index.
*/

//Solution:
#include <bits/stdc++.h> 
int magicIndex(vector<int> a, int n) 
{
	for(auto i: a)
	{
		if(a[i]==i)
			return a[i];
	}
	return -1;
}
