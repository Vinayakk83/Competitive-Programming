class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        
        auto increase = [&](double pass, double total) {
            return (pass + 1) / (total + 1) - pass / total;
        };
        
        double sum = 0;
        priority_queue<pair<double, array<int, 2>>> pq;
        
        for(auto &c: classes) {
            sum += (double) c[0] / c[1];
            pq.push({increase(c[0], c[1]), {c[0], c[1]}});
        }
        
        while(extraStudents--) {
            auto [inc, c] = pq.top();
            pq.pop();
            sum += inc;
            pq.push({increase(c[0] + 1, c[1] + 1), {c[0] + 1, c[1] + 1}});
        }
        
        return sum / classes.size();
    }
};
