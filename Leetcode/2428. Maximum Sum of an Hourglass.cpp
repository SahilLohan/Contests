// Link for problem :- https://leetcode.com/contest/weekly-contest-313/problems/maximum-sum-of-an-hourglass/

// code --->

class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int sum=0;
        int max=0;
        for(int i=1;i<m-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                sum=grid[i][j]+grid[i-1][j]+grid[i-1][j-1]+grid[i-1][j+1]+grid[i+1][j]+grid[i+1][j-1]+grid[i+1][j+1];
                if(sum>max) max=sum;
                sum=0;
            }
            
        }
        return max;
    }
};
