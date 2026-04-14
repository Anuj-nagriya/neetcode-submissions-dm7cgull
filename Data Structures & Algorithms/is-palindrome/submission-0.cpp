class Solution {
public:
    bool isPalindrome(string s) {
        char* F = &s[0];
        char* L = &s[s.length()-1];

        while(F < L){

            while(F < L && !(isalnum(*F))) F++;
            while(L > F && !(isalnum(*L))) L--; 

            if(tolower(*F) != tolower(*L)){
                return false;
            }

            F++;
            L--;
        }

        return true;
    }
};