// Link : https://leetcode.com/contest/weekly-contest-354/problems/minimum-index-of-a-valid-split/


class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        map<int,int> mp;
        int f=0;
        int m=0;
        for(auto num:nums)
        {
            mp[num]++;
        }
        
        for(auto e:mp)
        {
            if(e.second>f)
            {
                f=e.second;
                m=e.first;
            }
        }
        
        mp.clear();
        // now we have a dominant element;
        
        int n = nums.size();
        int l1,c1=0,l2,c2=f;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==m)
            {
                c1++;
                c2--;
            }
            l1=i+1;
            l2=n-l1;
            
            if((c1*2)>l1 && (c2*2)>l2)
            {
                return i;
            }
        }
        
        return -1;
    }
};
