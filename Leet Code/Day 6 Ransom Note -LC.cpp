Ransom Note:
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false

Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false

Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true

*/
//Solution -LC:

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
       unordered_map<char,int> charCount;
       for(char ch : magazine)
       {
           charCount[ch]++;
       }     
       for(char ch : ransomNote)
       {
           if(charCount.find(ch)==charCount.end() || charCount[ch]==0)
           {
               return false;
           }
           charCount[ch]--;
       }     
        return true;
    }
};