class Solution {
public:
    int count;
    int slices(vector<int> &A, int i) {
        if(i < 2)
            return 0;
        int ap = 0;
        if(A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
            ap = slices(A, i - 1) + 1;
            count += ap;
        }
        else
            slices(A, i - 1);
        return ap;
            
    }
    
    int numberOfArithmeticSlices(vector<int>& A) {
        slices(A, A.size() - 1);
        return count;
    }
};
