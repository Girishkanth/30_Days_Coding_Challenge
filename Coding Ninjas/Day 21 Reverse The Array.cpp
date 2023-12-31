/*
Problem statement:
Given an array/list 'ARR' of integers and a position 'M'. You have to reverse the array after that position.
Example:
We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3, considering 0 based indexing 
so the subarray [5, 6} will be reversed and our output array will be (1, 2, 3, 4, 6, 5).

Sample Input 1:
2
6 3
1 2 3 4 5 6
5 2
10 9 8 7 6

Sample Output 1:
1 2 3 4 6 5
10 9 8 6 7

Explanation 1:
For the first test case, 
Considering 0-based indexing we have M = 3 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {1, 2, 3, 4, 6, 5}.

For the second test case, 
Considering 0-based indexing we have M = 2 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {10, 9, 8, 6, 7}.

Sample Input 2:
2
7 3
1 4 5 6 6 7 7 
9 3
10 4 5 2 3 6 1 3 6

Sample Output 2:
 1 4 5 6 7 7 6
 10 4 5 2 6 3 1 6 3 
*/

//Solution:
void reverseArray(vector<int> &arr , int m)
{
    int n=arr.size()-1;
    int i=m+1;
    int j=n;
    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
