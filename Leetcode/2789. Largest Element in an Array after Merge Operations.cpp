// Link : https://leetcode.com/problems/largest-element-in-an-array-after-merge-operations/


// Code :
// class Solution {
// public:
//     long long maxArrayValue(vector<int>& ns) {
        
//         vector<long long> nums(ns.size());
        
//         for(int i=0;i<ns.size();i++)
//         {
//             nums[i]=ns[i];
//         }
        
//         if(nums.size()<=1)
//             return nums[0];

//         long long ans = 0;
//         int j=0;
//         int count=1;
//         int index=0;
//         int n=nums.size();
//         int size=0;
//         while(count!=0)
//         {
//             count=0;
//             size = 0;
//             index=0;
//             for(int i=0;i<n-1;i++)
//             {
//                 if(nums[i] <= nums[i+1])
//                 {
//                     nums[index] = nums[i]+nums[i+1];
//                     cout << nums[index] << " ";
//                     size++;
//                     index++;
//                     i++;
//                     count++;
//                 }
//                 else
//                 {
//                     nums[index] = nums[i];
//                     cout << nums[index] << " ";
//                     index++;
//                     size++;
//                 }
                
                
//             }
//             nums[index] = nums[n-1];
//             cout << nums[index] << " ";
//             index++;
//             size++;
//             cout << "\n" << size << " is the size\n";
//             n=size;
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i] > ans)
//                 ans = nums[i];
//         }
        
//         return ans;
//     }
// };

// class Solution(object):
//     def maxArrayValue(self, nums):
//         """
//         :type nums: List[int]
//         :rtype: int
//         """
//         stack = []
//         for num in nums[::-1]:
//             if len(stack)>0 and stack[-1] >= num:
//                 stack[-1] += num
//             else:
//                 stack.append(num)
                
//        #     print(stack)
//         return max(stack)

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long ans =0;
        stack<long long> st;
        reverse(nums.begin(),nums.end());
        for(auto num : nums)
        {
            if(!st.empty() && st.top() >= num)
                st.top() += num;
            else
                st.push(num);
        }
        
        while(!st.empty())
        {
            if(st.top() > ans)
                ans=st.top();
            
            st.pop();
        }
        
        return ans;
    }
};
