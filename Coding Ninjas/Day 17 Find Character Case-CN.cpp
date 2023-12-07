/*
Problem statement
Write a program that takes a character as input and prints either 1, 0, or-1 according to the following rules.
1. if the character is an uppercase alphabet (A-Z)
if the character is a lowercase alphabet (a )
-1. if the character is not an alphaber

Constraints:
Input can be any character.
Constraints
Isput can be any character

Input format:
The only line of input contains a single character.

Output format:
The only line of output prints eith1. 0 or -1 (as applicable).

Sample Input 1 :
v
Sample Output 1 :
0
Explanation of Sample Input 1:
v is a lower case alphabet hence the output is 0.

Sample Input 2 :
V
Sample Output 2 :
1
Explanation of Sample Input 3:
V is an upper case alphabet hence the output is 1.

Sample Input 3 :
#
Sample Output 3 :
-1
Explanation of Sample Input 3:
# is a symbol and neither an upper case alphabet nor lower case alphabet; hence the output is -1.
*/

//Solution:
#include <iostream>
using namespace std;

int main() 
{
    char c;
    cin>>c;
    if(c>='A' && c<='Z')
        cout<<1;
    else if(c>='a' && c<='z')
        cout<<0;
    else
        cout<<"-1";
    return 0;
}
