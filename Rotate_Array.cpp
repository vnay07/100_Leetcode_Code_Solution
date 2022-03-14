// Question 1: Rotate Array
//Question Link: https://leetcode.com/problems/rotate-array/

//Solutin below:

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> x(n);
        int j=0;
        int x1 = n - k;
        int _x;
        if(x1<0){
            _x = abs(n-k) % n;
            x1 = n - _x;
        }
        for(int i = x1;i<n;i++){
            x[j]=nums[i];
            j++;
        }
        for(int i=0;i<x1;i++){
            x[j] = nums[i];
            j++;
        }
        for(int i=0;i<n;i++){
            nums[i]=x[i];
        }
    }
};

//Time Complexity is O(n)
