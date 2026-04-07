class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        if(strs.size() == 0) return result;
        for(auto i : strs){
            string k = to_string(i.length());
            result += k;
            result += '#';
            result += i; 
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        
        while(i < s.length()){
            string P,K;
            while(s[i] != '#'){
                P += s[i];
                i++;
            }
            i++;
            int count = stoi(P);
            
            for(int j = 0; j<count;j++){
                K =K + s[i];
                i++;
            }
            result.push_back(K);
        }
        return result;
    }
};
