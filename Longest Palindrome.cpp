// Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.
// Letters are case sensitive, for example, "Aa" is not considered a palindrome.
// Example 1:
// Input: s = "abccccdd"
// Output: 7
// Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
// Example 2:
// Input: s = "a"
// Output: 1
// Explanation: The longest palindrome that can be built is "a", whose length is 1.
// Code :-
class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i =0; i<s.size(); i++){
            if(s[i]>='a'){
                lower[s[i]-'a']++;
            }
            else{
                upper[s[i]-'A']++;
            }
        }
        int cnt=0;
        bool odd=0;
        for(int i=0; i<26; i++){
            if(lower[i]%2==0){
                cnt += lower[i];
            }
            else{
                cnt += lower[i]-1;
                odd=1;
            }
            if(upper[i]%2==0){
                cnt += upper[i];
            }
            else{
                cnt +=upper[i]-1;
                odd = 1;
            }
        }
        return cnt+odd;
    }
};
