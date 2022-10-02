// link for problem :- https://leetcode.com/contest/weekly-contest-313/problems/number-of-common-factors/

// code --->

class Solution {
public:
    int commonFactors(int a, int b) {
        int len;
        int count=0;
        a<=b?len=a:len=b;
        for(int i=1;i<=len;i++)
        {
            if(a%i==0 && b%i==0)
                count++;
        }
        return count;
    }
};
