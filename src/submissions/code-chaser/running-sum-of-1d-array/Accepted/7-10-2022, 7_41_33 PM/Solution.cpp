// https://leetcode.com/problems/running-sum-of-1d-array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v = nums;
        for(int i = 1; i < nums.size(); i++)
            v[i] += v[i-1];
        return v;
    }
};