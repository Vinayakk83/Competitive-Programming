class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> alpha{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(auto i: words) {
            string temp = "";
            for(auto j: i) {
                temp += alpha[j - 'a'];
            }
            s.insert(temp);
        }
        return s.size();
    }
};
