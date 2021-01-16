class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count = 0;
        sort(people.begin(), people.end());
        int l = 0, r = people.size() - 1;
        while(l <= r) {
            if(people[r] + people[l] <= limit) {
                r--;
                l++;
            }
            else {
                r--;
            }
            count++;
        }
        return count;
    }
};
