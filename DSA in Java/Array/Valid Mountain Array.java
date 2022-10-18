// Problem Link: https://leetcode.com/problems/valid-mountain-array/

class Solution {
    public boolean validMountainArray(int[] arr) {
        if(arr.length < 3) 
            return false;
        int left = 0;
        int right = arr.length - 1;
        while(left + 1 < arr.length - 1 && arr[left] < arr[left + 1]) 
            left++;
        while(right - 1 > 0 && arr[right] < arr[right - 1]) 
            right--;
        return left == right;
    }
}
