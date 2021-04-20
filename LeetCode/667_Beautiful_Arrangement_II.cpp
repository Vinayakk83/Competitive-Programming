class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> arr(n);
        for(int i = 0, j = 0; i < n; i++) {
            if(i&1) {
                arr[i] = j;
            }
            else {
                arr[i] = n - j;
                j++;
            }
        }
        for(int i = k, j = arr[k - 1]; i < n; i++) {
            if(arr[k - 1] <= n / 2)
                j++;
            else
                j--;
            arr[i] = j;
        }
        return arr;
    }
};
