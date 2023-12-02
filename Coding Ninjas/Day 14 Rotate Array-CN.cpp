/*
Rotate Array:
Given an array 'arr' with 'n'elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.

Example:
'arr = [1,2,3,4,5]
'k' = 1 rotated array = [2,3,4,5,1]
'k' = 2 rotated array = [3,4,5,1,2]
'k' = 3 rotated array = [4,5,1,2,3] and so on.

Sample Input 1:
8
75 2 11 2 43 1 1
2

Sample Output 1:
2 11 2 43 1175

Explanation of Sample Input 1:
Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
Rotate 2 steps to the left: 2 11 2 43 1 1 75
*/
//Solution:
vector<int> rotateArray(vector<int>arr, int k) 
{
    while(k--)
    {
        int ele=arr[0];
        arr.erase(arr.begin()+0);
        arr.push_back(ele);
    }
    return arr;
}
