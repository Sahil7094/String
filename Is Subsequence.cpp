/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters
without disturbing the relative positions of the remaining characters.(i.e., "ace" is a subsequence of "abcde" while "aec" is not).
Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
Code :-
  */
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;

        while (i<s.length() && j<t.length()) {
            if (s[i]==t[j]) {
                i++;
            }
            j++;
        }

        return i==s.length();        
    }
};

// Recursive :-
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0){
            return true;
        }
        if(t.size()==0){
            return false;
        }
        if(s[0]==t[0]){
            return isSubsequence(s.substr(1),t.substr(1));
        }
        else{
            return isSubsequence(s,t.substr(1));
        }
    }
};
