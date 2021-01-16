class Solution {
public:
    int getMaximumGenerated(int n) {
        int arr[n + 1];
        if(n >= 0 )
            arr[0] = 0;
        if(n >= 1 )
            arr[1] = 1;
        int i = 1, j;
        while(true) {
            j = 2 * i;
            if(j < n + 1)
                arr[j] = arr[i];
            else
                break;
            if(j + 1 < n + 1)
                arr[j + 1] = arr[i] + arr[i + 1];
            else
                break;
            i++;
        }
        return *max_element(arr, arr + n + 1);
    }
};
