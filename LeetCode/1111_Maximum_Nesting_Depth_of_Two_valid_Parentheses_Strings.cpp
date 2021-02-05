class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> answer(seq.length(), 0);
        int Ac = 0, Bc = 0;
        for(int i = 0; i < seq.length(); i++) {
            if(seq[i] == '(') {
                if(Ac < Bc) {
                    answer[i] = 1;
                    Ac++;
                }
                else
                    Bc++;
            }
            else {
                if(Ac < Bc)
                    Bc--;
                else {
                    answer[i] = 1;
                    Ac--;
                }
            }
        }
        
        return answer;
    }
};
