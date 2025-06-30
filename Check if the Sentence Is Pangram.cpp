// A pangram is a sentence where every letter of the English alphabet appears at least once.
// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.
// Example 1:
// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.
// Example 2:
// Input: sentence = "leetcode"
// Output: false
// Code:-
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>ans(26,0);
        for(int i=0; i<sentence.size(); i++){
            ans[sentence[i]-'a']=1;
        }
        for(int i=0; i<26; i++){
            if(ans[i]==0){
                return false;
            }
        }
        return true;
    }
};
