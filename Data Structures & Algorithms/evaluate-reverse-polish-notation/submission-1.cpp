class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int number = 0;

        for(string s : tokens){
            if(s == "/" || s == "*" || s == "+" || s == "-"){
                int second = stk.top();
                stk.pop();
                int first = stk.top();
                stk.pop();

                if(s == "+"){
                    stk.push(first + second);
                }
                if(s == "-"){
                    stk.push(first - second);
                }
                if(s == "*"){
                    stk.push(first * second);
                }
                if(s == "/"){
                    stk.push(first / second);
                }

            }else{
                int s_length = s.length();
                string num;

                for(int i = 0; i<s_length; i++){
                    num = num + s[i];
                }

                int k = stoi(num);
                stk.push(k);
            }
        }

        return stk.top();

    }
};
