class FreqStack {
public:
    
    map<int, int> freq;
    map<int, stack<int>> group;
    int max_freq;
    
    FreqStack(): max_freq(0) {}
    
    void push(int x) {
        freq[x]++;
        max_freq = max(max_freq, freq[x]);
        group[freq[x]].push(x);
    }
    
    int pop() {
        
        int x = group[max_freq].top();
        freq[x]--;
        group[max_freq].pop();
        
        if(group[max_freq].empty())
            max_freq--;
        
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
