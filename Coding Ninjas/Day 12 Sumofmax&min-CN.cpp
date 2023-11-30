/*
Problem statement:
You are given an array "ARR" of size N. Your task is to find out the sum of maximum and minimum elements in the array.
  
Follow Up:
Can you do the above task in a minimum number of comparisons?

Constraints:
1 <= T <= 10
1 <= N <= 10 ^ 5
- 10 ^ 9 <= ARR[i] <= 10 ^ 9

Sample Input 1:
2
7
1 2 4 5 6 6 6 
6
-1 -4 5 8 9 3

Sample Output 1:
7
5
*/

//Solution:
#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n)
{
	sort(arr,arr+n);
	int max=arr[n-1];
	int min=arr[0];
	return (max+min);
}
