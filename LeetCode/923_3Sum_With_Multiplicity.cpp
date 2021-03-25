class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int MOD = 1e9 + 7;
        int ans = 0;
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < arr.size(); i++) {
            
            int T = target - arr[i];
            int l = i + 1, r = arr.size() - 1;
            
            while(l < r) {
                if(arr[l] + arr[r] > T)
                    r--;
                else if(arr[l] + arr[r] < T)
                    l++;
                else if(arr[l] != arr[r]) {
                    int left = 1, right = 1;
                    while(l + 1 < r && arr[l] == arr[l + 1]) {
                        left++;
                        l++;
                    }
                    while(r - 1 > l && arr[r] == arr[r - 1]) {
                        right++;
                        r--;
                    }
                    
                    ans += left * right;
                    ans = ans % MOD;
                    l++;
                    r--;
                }
                else {
                    ans += (r - l + 1) * (r - l) / 2;
                    ans = ans % MOD;
                    break;
                }
            }
            
        }
        
        return ans;
    }
};
