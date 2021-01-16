class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pt1 = 0, pt2 = 0, mCount = 0;
        while(pt1 < (m + n) && pt2 < n)
        {
            if(mCount >= m)
                break;
            if(nums1[pt1] > nums2[pt2]) {
                for(int i = (m + n) - 1; i > pt1; i--) {
                    nums1[i] = nums1[i - 1];
                }
                nums1[pt1] = nums2[pt2];
                pt1++;
                pt2++;
            }
            else
            {
                pt1++;
                mCount++;
            }
            
        }
        while(pt2 < n) {
            nums1[pt1] = nums2[pt2];
            pt1++;
            pt2++;
        }
    }
};
