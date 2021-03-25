class Solution {
public:
    long long int sum(long long int n) {
        return n * (n + 1) / 2;
    }
    
    int maxValue(int n, int index, int maxSum) {
        
        int l = 1, r = maxSum;
        int left_length = index + 1, right_length = n - index;
        
        while(l < r) {
            int mid = l + (r - l + 1) / 2;
            
            long long int left_offset = 0;
            long long int right_offset = 0;
            
            if(left_length < mid)
                left_offset = -sum(mid - left_length);
            else 
                left_offset = left_length - mid;
            
            if(right_length < mid)
                right_offset = -sum(mid - right_length);
            else 
                right_offset = right_length - mid;
            
            long long int total = 2 * sum(mid) - mid + left_offset + right_offset;
            
            if(total <= maxSum)
                l = mid;
            else
                r = mid - 1;
        }
        
        return l;
    }
};
