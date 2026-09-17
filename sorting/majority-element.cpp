class Solution {
public:
    int majorityElement(vector<int>& nums) {        for(int val:nums)
        {
            int f=0;
            for(int e:nums)
            {
                if(e==val)
                {
                    f++;
                }
            }
            if(f>nums.size()/2)
            {
                return val;
            }
        }
        return -1;
    }
};