class Solution {
public:

    // Encode: list of strings → single string
    string encode(vector<string>& strs) {
        string result;

        for (auto &s : strs) {
            result += to_string(s.length()) + '#' + s;
        }

        return result;
    }

    // Decode: single string → list of strings
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            // Step 1: read length
            int j = i;
            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            // Step 2: move past '#'
            j++;

            // Step 3: extract string of length len
            string word = s.substr(j, len);
            result.push_back(word);

            // Step 4: move i to next position
            i = j + len;
        }

        return result;
    }
};