// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
   bool isprime(int n)
   {
       if(n<=1) return false;
        for(int i=2;i<n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
   }
  
  
    int solve(int n, string s) {
        // code here
        int dis_count=0,ans=0;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]==0)
            {
                ++mp[s[i]];
                dis_count++;
            }
            if(i%2==0 && isprime(dis_count)) 
            {
                ans++;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {

        int N;
        string S;
        cin >> N >> S;

        Solution obj;
        int res = obj.solve(N, S);

        cout << res << "\n";
    }
}
  // } Driver Code Ends
