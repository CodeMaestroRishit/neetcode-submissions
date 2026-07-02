class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(string s:strs)
        {
        string orgstring=s;
        sort(s.begin(),s.end());
        mp[s].push_back(orgstring);
        }

        vector<vector<string>>anagrams;

        for(auto &pair:mp)
        {
            string key=pair.first;

            anagrams.push_back(move(pair.second));
        }
        return anagrams;
    }
};
