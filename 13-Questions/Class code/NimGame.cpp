// https://leetcode.com/problems/nim-game/
class Solution {
public:
    bool canWinNim(int n) {
        if(n%4 !=0)
            return 1;
        else
            return 0;
        
    }
};