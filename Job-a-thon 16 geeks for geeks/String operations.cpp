// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution 
{
	public:
	bool isVowel(char c)
	{
	    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	}
	int solve(int n,string s)
	{
		int vowelo=0;
		int vowele=0;
		int conso=0;
		int conse=0;
		for(int i=0;i<n;i++)
		{
		   if(i%2==0)
		   {
		       if(isVowel(s[i]))
		       vowele++;
		       else
		       conse++;
		   }
		   else
		   {
		       if(isVowel(s[i]))
		       vowelo++;
		       else
		       conso++;
		   }
		}
		
        if((conso+vowele)<(vowelo+conse))
        return conso+vowele;
        else
        return conse+vowelo;
		
	}
};

// { Driver Code Starts.


int main()
{
	int t;
	cin >>  t;
	while(t--)
	{
		int n;
		cin >> n;
	     string s;
	     cin >> s;
	     Solution obj;
	     int ans = obj.solve(n,s);
	     cout << ans << "\n";
	}

	return 0;
}

  // } Driver Code Ends
