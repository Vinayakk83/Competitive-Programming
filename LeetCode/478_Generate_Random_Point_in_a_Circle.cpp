class Solution {
public:
    double x_center, y_center, radius;
    
    Solution(double radius, double x_center, double y_center) {
        this -> radius = radius;
        this -> x_center = x_center;
        this -> y_center = y_center;
    }
    
    vector<double> randPoint() {
        double theta = (double) rand() / RAND_MAX * 2 * M_PI;
        double R = sqrt((double) rand() / RAND_MAX) * radius;
        
        double x = R * cos(theta);
        double y = R * sin(theta);
        
        return {x_center + x, y_center + y};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
