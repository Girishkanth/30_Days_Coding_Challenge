/*
Problem statement:

You are given an array of integers ARR[] of size N consisting of zeros and ones. You have to select a subset and flip bits of that subset. 
You have to return the count of maximum one's that you can obtain by flipping chosen sub-array at most once.
A flip operation is one in which you turn 1 into 0 and 0 into 1.

For example:
If you are given an array (1, 1, 0, 0, 1) then you will have to return the count of maximum one's you can obtain by flipping anyone chosen sub-array at most once, 
so here you will clearly choose sub-array from the index 2 to 3 and then flip it's bits. 
So, the final array comes out to be (1, 1, 1, 1, 1) which contains five ones and so you will return 5.

Sample Input 1 :
3
5
1 0 0 1 0
4
1 1 1 0
5
0 0 1 0 0

Sample Output 1 :
4
4
4

Explanation For Sample Input 1:
For the first test case:
We can perform a flip operation in the range [1,2]. After the flip operation, the array is: 1 1 1 1 0 and so the answer will be 4

Similarly, in the second test case :
We can perform a flip operation in the range [3,3]. After the flip operation, the array is: 1 1 1 1 and so the answer will be 4.

Finally for the third test case :
We can perform a flip operation in the range [0,4]. After the flip operation, the array is: 1 1 0 1 1 and so the answer will be 4

Sample Input 2 :
3
5
0 0 0 0 0
5
1 1 1 1 1
8
1 0 1 0 1 0 1 0

Sample Output 2 :
5
5
5
*/

//Solution:
#include <bits/stdc++.h> 
int flipBits(int* arr, int n) 
{
    int z=0,o=0,mx=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            z++;
        else
        {
            z--;
            o++;
        }
        mx=max(z,mx);
        if(z<0)
            z=0;
    }
    return mx+o;
}
