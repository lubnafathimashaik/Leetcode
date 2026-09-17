class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0];
        int f=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                f++;
            }
            else
            {
                f=0;
                ans=nums[i];
            }
            if(f>nums.size()/2)
            {
                return ans;
            }
        }
        return ans;
    }
};