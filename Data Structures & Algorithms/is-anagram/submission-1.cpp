class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char,int> CountS;
        unordered_map<char,int> CountT;
        for(int i = 0; i < s.length(); i++){
            CountS[s[i]]++;
            CountT[t[i]]++;
        }

        for(auto i : CountS){
            if (i.second != CountT[i.first]){
                return false;
            }
        }
        return true;
    }
};
