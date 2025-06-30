// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
// A shift on s consists of moving the leftmost character of s to the rightmost position.
// For example, if s = "abcde", then it will be "bcdea" after one shift.
// Example 1:
// Input: s = "abcde", goal = "cdeab"
// Output: true
// Example 2:
// Input: s = "abcde", goal = "abced"
// Output: false
// Code :-
class Solution {
public:
void rotate(string &s){
        char temp=s[0];
        int i=1;
        while(i<s.size()){
            s[i-1]=s[i];
            i++;
        }
        s[s.size()-1]=temp;
    }
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        string rotatestr = s;
        for(int i=0; i<s.size(); i++){
            rotate(rotatestr);
            if(rotatestr==goal){
                return true;
                break;
            }
        }
        return false;
       
    }
};
