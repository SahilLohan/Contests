// Link : https://practice.geeksforgeeks.org/contest/bi-wizard-school-coding-tournament-170/problems


// Code :

class Solution {
public:
  int countWords(string &str) {
       // code here
       
       int start = 0;
       while(str[start]==' ')
       start++;
       
       int end = str.length()-1;
       while(str[end]==' ')
       end--;
       
       if(end < start) return 0;
       else
       {
           int count=1;
           for(int i=start;i<=end;i++)
           {
               if(str[i]==' ')
               count++;
               
               while(str[i]==' ')
               i++;
           }
           
           return count;
       }
       
       
       
  }
};
