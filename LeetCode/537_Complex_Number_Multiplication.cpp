class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        vector<int> A;
        vector<int> B;
        string s = "";
        for(auto i: a) {
            if(i == '+' || i == 'i') {
                A.emplace_back(stoi(s));
                s = "";
                continue;
            }
            s += i;
        }
        s = "";
        for(auto i: b) {
            if(i == '+' || i == 'i') {
                B.emplace_back(stoi(s));
                s = "";
                continue;
            }
            s += i;
        }
        string ans = to_string((A[0] * B[0]) - (A[1] * B[1])) + '+' + to_string((A[0] * B[1]) + (A[1] * B[0])) + "i";
        return ans;
    }
};
