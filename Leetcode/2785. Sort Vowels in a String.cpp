class Solution {
public:
    
    bool isVowel(char ch)
    {
        ch = tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            return true;
        else
            return false;
    }
    
    string sortVowels(string s) {
        
        vector<char> vec;
        
        for(auto ch:s)
        {
            if(isVowel(ch))
            vec.push_back(ch);
        }
        if(vec.size()==0)
            return s;
        
        sort(vec.begin(),vec.end());
        
        int index=0;
        for(int i=0;i<s.length();i++)
        {
            if(isVowel(s[i]))
            {
                s[i]=vec[index];
                index++;
            }
            
            if(index==vec.size())
                break;
        }
        
        return s;
    }
};
