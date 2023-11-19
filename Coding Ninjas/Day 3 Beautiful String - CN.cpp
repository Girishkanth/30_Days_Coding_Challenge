/*
BEAUTIFUL STRING:
Ninja has been given a binary string 'STR' containing either '0' or '1'. A binary string is called beautiful if it contains alternating Os and 1s. For Example:'0101', '1010', '101', '010' are beautiful strings.

He wants to make 'STR' beautiful by performing some operations on it. In one
operation, Ninja can convert '0' into '1' or vice versa.

Your task is to determine the minimum number of operations Ninja should perform to make 'STR' beautiful.

For Example:
Minimum operations to make 'STR' '0010' beautiful is '1'. In one operation, we can convert '0' at index '0' (0-based indexing) to '1'. The 'STR' now becomes '1010' which is a beautiful string.

Detailed explanation:

Input Format:
The first line contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.
The only line of each test case contains a binary string 'STR'.

Output Format:
For each test case, print the minimum operations needed to make 'STR' beautiful.
Print the output of each test case in a separate line.

Note:
You are not required to print the expected output, it has already been taken car of. Just implement the given function.
*/

//SOLUTION:

int makeBeautiful(string str) 
{
	int n=str.length();
	char s1[n];
	char s2[n];
	for(int i=0;i<n;i++)
	{
		s1[i]='0';
		s2[i]='1';
	}
	for(int i=1;i<n;i+=2)
	{
		s1[i]='1';
		s2[i]='0';
	}
	int dif1=0,dif2=0;
	for(int i=0;i<n;i++)
	{
		if(str[i]!=s1[i])
		{
			dif1++;
		}
		if(str[i]!=s2[i])
		{
			dif2++;
		}
	}
	return min(dif1,dif2);
}