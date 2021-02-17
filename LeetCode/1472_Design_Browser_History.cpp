class BrowserHistory {
public:
    int idx;
    vector<string> history;
    
    BrowserHistory(string homepage) {
        history.emplace_back(homepage);
        idx = 0;
    }
    
    void visit(string url) {
        while(idx != history.size() - 1)
            history.pop_back();
        history.emplace_back(url);
        idx = history.size() - 1;
    }
    
    string back(int steps) {
        idx = max(0, idx - steps);
        return history[idx];
    }
    
    string forward(int steps) {
        idx = min((int)history.size() - 1, idx + steps);
        return history[idx];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
