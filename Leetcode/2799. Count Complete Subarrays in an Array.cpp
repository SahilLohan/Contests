// https://leetcode.com/contest/weekly-contest-356/problems/count-complete-subarrays-in-an-array/


class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int unq=0;
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())
            {
                mp[nums[i]]++;
            }
        }
        unq =mp.size();
        int ans =0;
        for(int i=0;i<nums.size();i++)
        {
            mp.clear();
            for(int j=i;j<nums.size();j++)
            {
                if(mp.find(nums[j])==mp.end())
                {
                    mp[nums[j]]++;
                }
                if(mp.size()==unq)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
