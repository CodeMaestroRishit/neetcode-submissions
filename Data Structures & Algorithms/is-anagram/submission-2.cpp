class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        int length;
        if(s.length()>=t.length())
        {
            length=s.length();
        }else{
            length=t.length();
        }

        for(int i=0;i<length;i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(auto p:mp)
        {
            if(p.second>0)
            {
                return false;
            }
        }
        return true;
    }
};
