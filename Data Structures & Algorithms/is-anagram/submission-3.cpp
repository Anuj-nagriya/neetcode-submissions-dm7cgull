class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> K1;
        unordered_map<char,int> K2;

        if(s.length() != t.length()){
            return false;
        }

        for(int i =0; i<s.length(); i++){
            K2[t[i]]++;
            K1[s[i]]++;
        }

        for(auto i : K2){
            if(i.second != K1[i.first]){
                return false;
            }
        }
        return true;
    }
};
