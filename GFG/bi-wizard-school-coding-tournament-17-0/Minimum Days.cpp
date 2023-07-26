// Link : https://practice.geeksforgeeks.org/contest/bi-wizard-school-coding-tournament-170/problems


// Code :
class Solution {
  public:
  
    int getMinimumDays(int N,string S, vector<int> &P) {
        // code here
        int t=0;
        for(int i=0;i<S.length()-1;i++)
        {
            if(S[i]==S[i+1])
            t++;
        }
        if(t==0) return 0;
        int id=0;
        
        for(int i=0;i<P.size();i++)
        {
            id=P[i];
            
            if(id>0 && S[id]==S[id-1])
            t--;
            if(id<P.size()-1 && S[id]==S[id+1])
            t--;
            
            S[id]='?';
            if(t<=0)
            return i+1;
        }
        
        return P.size();
    }
};
