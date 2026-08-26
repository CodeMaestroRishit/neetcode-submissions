class Solution {
public:

    string encode(vector<string>& strs) {
    string res="";
    for(auto s:strs)
    {
        res=res+to_string(s.length());
        res=res+'#';
        res=res+s;
    }
    return res;
    }

   vector<string> decode(string s) {
    vector<string> ans;
    int i = 0;

    while(i < s.size()) {

        int hash = i;

        while(s[hash] != '#')
            hash++;

        int len = stoi(s.substr(i, hash - i));

        hash++;

        string word = s.substr(hash, len);
        ans.push_back(word);

        i = hash + len;
    }

    return ans;
}
};
