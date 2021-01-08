class Solution {
public:
    int superEggDrop(int K, int N) {
        int l = 1, r = N;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (check(mid, K, N) < N)
                l = mid + 1;
            else
                r = mid;
        }
        return l;
    }

    int check(int x, int K, int N) {
        int answer = 0, r = 1;
        for (int i = 1; i <= K; i++) {
            r *= x - i + 1;
            r /= i;
            answer += r;
            if (answer >= N) break;
        }
        return answer;
    }
    
    
};
