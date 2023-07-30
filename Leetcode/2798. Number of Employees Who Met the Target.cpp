// https://leetcode.com/contest/weekly-contest-356/problems/number-of-employees-who-met-the-target/

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count =0;
        for(auto e:hours)
        {
            if(e>=target)
                count++;
        }
        return count;
    }
};
