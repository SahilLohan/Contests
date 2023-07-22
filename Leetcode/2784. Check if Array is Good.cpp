class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size()==1) return false;
        int n = nums.size() - 1;
        
        map<int,int> mp;
        
        for(auto num : nums)
        {
            mp[num]++;
        }
        
        for(int num=1;num<=n;num++)
        {
            if(mp.find(num) == mp.end())
                return false;
            else
            {
                if((num <= n-2 && mp[num]!=1 ) || (num==n && mp[num]!=2))
                    return false;
            }
        }
        
        return true;
    }
};
