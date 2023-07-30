// https://leetcode.com/contest/weekly-contest-356/problems/shortest-string-that-contains-three-strings/


class Solution {
public:
    
    string addIT(string a,string b)
    {
        string ans="";
        int j=0;
        int temp;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]==b[j])
            {
                temp=i;
                while(i<a.length() && j<b.length() &&  a[i]==b[j])
                {
                    j++;
                    i++;
                }
                if(i==a.length())
                {
                    break;
                }else if(j==b.length())
                {
                    return a;
                }
                else
                {
                    i=temp;
                    j=0;
                }
            }
            
        }
        
        ans = a + b.substr(j,b.length()-j);
        return ans;
    }
    
    string minimumString(string a, string b, string c) {
        vector<string> ans;
        
        ans.push_back(addIT(addIT(a,b),c));
        ans.push_back(addIT(addIT(a,c),b));
        ans.push_back(addIT(addIT(b,a),c));
        ans.push_back(addIT(addIT(b,c),a));
        ans.push_back(addIT(addIT(c,a),b));
        ans.push_back(addIT(addIT(c,b),a));
        
        sort(ans.begin(),ans.end(),[](string a,string b)
             {
                 return a.length() < b.length();
             });
        
        if(ans[0].length() == ans[1].length())
        {
            int len=0;
            for(int i=0;i<ans.size();i++)
            {
                if(ans[i].length()==ans[0].length())
                {
                    len++;
                }
            }
            sort(ans.begin(),ans.begin()+len);
            return ans[0];
        }
        return ans[0];
    }
};
