class Solution {
public:
    int minFlips(string target) {
        int count = 0;
        char x = '0';
        for(int i = 0; i < target.length(); i++) {
            if(target[i] == x) 
                continue;
            else {
                x = target[i];
                count++;
            }
        }
        return count;
    } 
};
