Binary Search:
You are given an integer array 'A' of size 'N', sorted in non-decreasing order. You are also given an integer 'target'.>
Your task is to write a function to search for 'target' in the array 'A' If it exists, return its index in 0-based indexing. If 'target' is not present in the array 'A', return -1.>
Note:>
You must write an algorithm whose time complexity is O(LogN)
Example:>
Input: 'N' = 7 'target' = 3 'A' = [1, 3, 7, 9, 11, 12, 45]
Output: 1
Explanation: A = [1, 3, 7, 9, 11, 12, 45], The index of element '3' is 1. Hence, the answer is '1'.

//Solution: 

int search(vector<int> &arr, int key)
{
    int l=0;
    int r=arr.size()-1;
    while(l<=r)
    {
        int m=(r+l)/2;
        if(arr[m]==key)
        {
            return m;
        }
        else if (arr[m]<key)
        {
            l=m+1;
        }else
        {
            r=m-1;
        }
    }
    return -1;
}