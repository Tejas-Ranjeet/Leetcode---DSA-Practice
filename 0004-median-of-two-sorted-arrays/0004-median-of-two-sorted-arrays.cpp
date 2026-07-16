class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // Always perform binary search on the smaller array
        if(nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int m = nums1.size();
        int n = nums2.size();

        int low = 0;
        int high = m;

        while(low <= high) {

            // Partition index in nums1
            int cut1 = (low + high) / 2;

            // Corresponding partition in nums2
            int cut2 = (m + n + 1) / 2 - cut1;

            // Left and Right elements around the partition
            int L1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
            int R1 = (cut1 == m) ? INT_MAX : nums1[cut1];

            int L2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
            int R2 = (cut2 == n) ? INT_MAX : nums2[cut2];

            // Correct partition found
            if(L1 <= R2 && L2 <= R1) {

                // Even number of elements
                if((m + n) % 2 == 0)
                    return (max(L1, L2) + min(R1, R2)) / 2.0;

                // Odd number of elements
                else
                    return max(L1, L2);
            }

            // Move towards left
            else if(L1 > R2) {
                high = cut1 - 1;
            }

            // Move towards right
            else {
                low = cut1 + 1;
            }
        }

        return 0;
    }
};