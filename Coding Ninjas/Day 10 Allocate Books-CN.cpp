/*
Allocate Books

Problem Statement 

Given an array 'arr' of integer numbers, 'arr[i]' represents the number of pages in the 'i-th' book.
There are 'm'number of students, and the task is to allocate all the books to the students.

Allocate books in such a way that:
1. Each student gets at least one book.
2. Each book should be allocated to only one student.
3. Book allocation should be in a contiguous manner.

You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum.
If the allocation of books is not possible, return -1.

Example:
Input: 'n' = 4, 'm' = 2
'arr' = [12, 34, 67, 90]
Output: 113

Explanation: All possible ways to allocate the '4' books to '2' students are:

12 | 34, 67, 90- the sum of all the pages of books allocated to student 1 is '12', and student two is * 34 + 67 + 90 = 191 deg . so the maximum is 'max(12, 191) = 191'

12, 34 | 67, 90 - the sum of all the pages of books allocated to student 1 is '12+ 34 = 46 deg 157'. and student two is 67 + 90 = 157 deg so the maximum is 'max(46, 157)=157'.

12, 34, 67 | 90 - the sum of all the pages of books allocated to student 1 is '12+ 34 + 67 = 113' and student two is '90', so the maximum is 'max(113, 90)= 113' .

We are getting the minimum in the last case.
Hence answer is '113'

*/
//Solution:

int func(vector<int>& arr, int n, int cap){
    int cnt=1;
    int load=0;
    for(int i=0;i<n;i++){
        if(load+arr[i]>cap){    
            cnt++;
            load=arr[i];
        }
        else{
            load+=arr[i];
        }
    }
    return cnt;
}
int findPages(vector<int>& arr, int n, int m) {
    int ans=0;
    if(n<m){
        return -1;
    }
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(), arr.end(), 0);
    while(low<=high){
        int mid=(low+high)/2;
        if(func(arr,n,mid)>m){;
            low=mid+1;
        } 
        else{
            high=mid-1;
        }
    }
    return low;
}