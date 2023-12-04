/*
Average Marks:
You are given the name of a student in the form of a character 'firstLetterOfName' and 3 integers 'M1', 'M2', 'M3' representing the marks of the student in 3 subjects. 
You have to print the 'firstLetterOfName' of the student and the average marks obtained by the student.
Note: You need to print the integer part of the average only and neglect the decimal part.

For Example:
If 'firstLetterOfName' = 'K', 'M1' = 10, 'M2' = 6 and 'M3' = 9, then the average marks would be around 7.67. Hence, the output should be as follows:
K7

Sample Input 1:
2
A
3 4 6
T
7 3 8

Sample Output 1:
A 4
T 6
*/
//Solution:
#include <bits/stdc++.h> 
#include <utility>
pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) 
{
    pair<char,int> p;
    p.first=firstLetterOfName;
    int avg=(m1+m2+m3)/3;
    p.second=avg;
    return p;
}
