/*
Set Matrix Zeros

Problem Statement

Given an 'N' x 'M' integer matrix, if an element is 0, set its entire row and column to 0's, and return the matrix. In particular, your task is to modify it in such a way that if a cell has a value 0 (matrix[i][j] == 0), then all the cells of the ith row and jth column should be changed to 0.
You must do it in place.

For Example:
If the given grid is this:
[7, 19, 3]
[4, 21, 0]
Then the modified grid will be:
[7, 19, 0]
[0, 0, 0]

Sample Input 1 :

2
2 3
7 19 3
4 21 0
3 3
1 2 3
4 0 6
7 8 9

Sample Output 1 :

7 19 0
0 0 0
1 0 3
0 0 0
7 0 9
*/

//solution:

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{  	
	int row_size=matrix.size();
	int col_size=matrix[0].size();
    	vector<int>col(col_size,0);
    	vector<int>row(row_size,0);
  
 	for(int i=0;i<row_size;i++)
	{

        	for(int j=0;j<col_size;j++)
		{
            		if(matrix[i][j]==0)
			{	    
               		 	row[i]=1;						 
               		 	col[j]=1;									  
            		}
		}
	}
	for(int i=0;i<row_size;i++)
	{
	    	for(int j=0;j<col_size;j++)
		{
			if (row[i] or col[j]) 
			{
               			 matrix[i][j] = 0;
            		}
        	}
    	}
}