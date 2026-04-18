class MinStack {
public:
    int i = -1;
    vector<int> stk;
    MinStack() {
    }
    
    void push(int val) {
        stk.push_back(val);
        i++;
    }
    
    void pop() {
        stk.pop_back();
        i--;
    }
    
    int top() {
        return stk[i];
    }
    
    int getMin() {  
        int max = INT_MAX;
        for(int i : stk){
            if(max > i){
                max = i;
            }
        }
        return max;
    }
};
