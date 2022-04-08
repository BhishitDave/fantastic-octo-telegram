/*
     Link : https://leetcode.com/problems/maximum-subarray/submissions/
     Logic: based on dp
     Source: tuf ,pepcoding
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maximum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            maximum=max(sum,maximum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maximum;
    }
};