/*
Valid Palindrome:
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

Constraints:

    1 <= s.length <= 2 * 105
    s consists only of printable ASCII characters.
*/

//Solution:

class Solution 
{
    public:
    bool isPalindrome(string s) 
    {
        string str="",ch="",temp="";
        for(char c: s)
        {
            str+= tolower(c);
        }
        int n=str.size();
        for(int i=0;i<n;i++ )
        {
            if((str[i]>=97 && str[i]<=122)|| (str[i]>=48 && str[i]<=57))               
                ch+=str[i];
        }
        temp=ch;
        reverse(ch.begin(),ch.end());
        if (ch==temp) 
            return 1;     
        return 0;
    }
};