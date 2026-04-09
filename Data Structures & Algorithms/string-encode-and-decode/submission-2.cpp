class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(auto i : strs){
            string K = to_string(i.length());
            result = result + K;
            result = result + '#';
            result = result + i;
        }
        return result;
    }

    vector<string> decode(string s) {
       int i = 0;
        vector<string> result;
       while(i<s.length()){
        string K,P;
        int count;
        while (s[i] != '#'){
            K = K+s[i];
            i++;
        }
        count = stoi(K);
        i++;
        for(int j = 0; j<count;j++){
            P = P+s[i];
            i++;
        }
        result.push_back(P);
       }

        return result;
    }
};
