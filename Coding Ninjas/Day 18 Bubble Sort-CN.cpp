/*
Bubble Sort

Problem Statement:
Bubble Sort is one of the sorting algorithms that works by repeatedly swapping the
adjacent elements of the array if they are not in sorted order. 
You are given an unsorted array consisting of N non-negative integers. 
Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.

Sample Input 1:
1
5
6 2 8 4 10

Sample Output 1:
2 4 6 8 10

Sample Input 2:
2
2
1 2
4
4 3 2 1

Sample Output 2:
1 2
1 2 3 4
*/

//Solution:
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
