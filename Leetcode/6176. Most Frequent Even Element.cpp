#Link for problem is :- https://leetcode.com/contest/weekly-contest-310/problems/most-frequent-even-element/

#code ---->

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> myMap;
        int len = nums.size();
        int ele=-1;
        int fre=-1;
        
        for(int i=0;i<len;i++)
        {
            if(nums[i]%2==0)
            {
                ++myMap[nums[i]];
                cout << i << endl;
                
                if(myMap[nums[i]]>fre)
                {
                    ele=nums[i];
                    fre=myMap[nums[i]];

                }
                
                if(myMap[nums[i]]==fre && ele>nums[i])
                {
                    ele=nums[i];
                }

            }
        } 
        return ele;
        
    }
};
