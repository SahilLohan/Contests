/* Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *a[])
{
    //Write code 
    int t;
    cin >> t;
    int n,m;
    vector<int> arr;
    int temp;
    while(t--)
    { 
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        // first of all sort the array
        sort(arr.begin(),arr.end());

        // if m is less than n/2 okk
        if(m<=n/2) 
        {
            // phle wale m elements ko daal do
            int count=0;
            int sum1=0;
            while(count!=m)
            {
                sum1 = sum1+arr[count];
                count++;
            }
            
            int sum2 =0;
            while(count!=n)
            {
                sum2 += arr[count];
                count++;
            }
            cout << sum2-sum1 << endl;
        }
        else{
            // last se shuru kr de ab ki baar this is right
            int count=0;
            int sum1=0;
            m=n-m;
            while(count!=m)
            {
                sum1 = sum1+arr[count];
                count++;
            }
            
            int sum2 =0;
            while(count!=n)
            {
                sum2 += arr[count];
                count++;
            }
            cout << sum2-sum1 << endl;
        }

        arr.clear();
    }
    return 0;
}

