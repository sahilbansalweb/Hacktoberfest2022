// Problem Link: https://leetcode.com/problems/find-the-winner-of-the-circular-game/

class Solution {
    public int findTheWinner(int n, int k) {
        return ans(n, k) + 1;
    }
    
    public int ans(int n, int k) {
        if (n == 1) {
            return 0;
        }
        return (ans(n-1, k) + k) % n;
    }
}
