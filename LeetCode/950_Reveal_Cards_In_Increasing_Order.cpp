class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> dq;
        for(int i = 0; i < deck.size(); i++)
            dq.push_back(i);
        sort(deck.begin(), deck.end());
        vector<int> ans(deck.size());
        for(auto card: deck) {
            ans[dq.front()] = card;
            dq.pop_front();
            if(!dq.empty()) {
                dq.push_back(dq.front());
                dq.pop_front();
            }   
        }
        return ans;
    }
};
