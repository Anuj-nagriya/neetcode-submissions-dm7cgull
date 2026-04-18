class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char,char> mp;

        mp[')'] = '(';
        mp[']'] = '[';
        mp['}'] = '{';

        for(char i : s){
            if(i == '(' || i == '{' || i == '['){
                stk.push(i);
            }else{

                if(stk.empty() == true) return false;

                char top = stk.top();
                if((top == '(' && i == ')') ||
                   (top == '[' && i == ']') ||
                   (top == '{' && i == '}')){
                        stk.pop();
                    }else{
                        return false;
                    }
            }
        }
        return stk.empty();
    }
};
