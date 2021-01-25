class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> letters(26), partition;
        for(int i = 0; i < S.length(); i++) {
            letters[S[i] - 'a'] = i;
        }
        for(int i = 0; i < S.length();) {
            int end = letters[S[i] - 'a'];
            int j = i;
            while(j != end) {
                end = max(end, letters[S[j++] - 'a']);
            }
            partition.push_back(j - i + 1);
            i = j + 1;
        }
        return partition;
    }
};
