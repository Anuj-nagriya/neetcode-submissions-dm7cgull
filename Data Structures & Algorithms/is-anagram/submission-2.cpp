class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> K;
        unordered_map<char,int> P;
        if(s.length() != t.length()){
            return false;
        }

        for(int i = 0; i<s.length(); i++){
            K[s[i]]++;
            P[t[i]]++;
        }

        for(auto i : K){
            if(i.second != P[i.first]){
                return false;
            }
        }
        return true;
    }
};
