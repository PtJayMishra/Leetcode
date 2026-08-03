class FreqStack {
public:
unordered_map<int, int>freq;
unordered_map<int , stack<int>> m;

int maxi = 0;
    FreqStack() {
        
    }
    
    void push(int x) {
        maxi = max(maxi , ++freq[x]);
        m[freq[x]].push (x);
    }
    
    int pop() {
        int x = m[maxi].top();
        m[maxi].pop();
        if(!m[freq[x]--].size())maxi--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */