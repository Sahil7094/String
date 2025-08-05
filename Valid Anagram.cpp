/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true
Example 2:
Input: s = "rat", t = "car"
Output: false
Code :-
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int count[26] = {0};

        for (int i=0; i<s.size(); i++) {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for (int i=0; i<26; i++) {
            if (count[i]!=0) return false;
        }
        return true;
    }
};
