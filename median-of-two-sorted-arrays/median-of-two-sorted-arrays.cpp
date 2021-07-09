/**
 * @brief 
 * Given two ascending sorted array, and find the median of their merge array
 * 
 * @idea
 *  Using #88 merge-sorted-array algo the Time will be O(M+N).
 *  Get a better time complexity?
 *  By observation, the problem turn into we have to find k = (M+N)/2 smallest number in two array.
 *  And we can easily get the median by this k numbers, since the two array is sorted.
 *  Now, we define k1 + k2 = k, which k1 is the numbers in nums1, k2 is the numbers in num2
 *  
 *  For example, num1 = [1,2,2], num2 = [4,5]
 *  --> [1, 2, 2, 4, 5] the median split is k = 3, 3 numbers less equal to median split
 * 
 * @algo 1 two pointer
 *  1. We use two pointer start from each array. 
 *  2. Compare two pointers and move the pointers backward which the value is smaller
 * 
 *  Easily get k numbers and we can get the medium
 * 
 *  Time O((M+N)/2)
 *  Space O(1)
 * 
 * @algo 2 iterate over min(m, n)
 *  1. We first choose all numbers in the shorter array as the split k2, then we easily get k1.
 *  2. Then we adjust the k1 and k2 to make them a proper split.
 *     - The last number of k1 and k2 must be smaller to both numbers in the left of the splits.
 *     - If k2 contains invalid large numbers, drop them and make k1 pick more numbers from num1
 *       (adjust the split location)
 *  
 *  Time O(min(M, N))
 *  Space O(1)
 * 
 * @algo 3 binary search over min(M, N)
 *  Improve algo 2, we use binany search to find the split.
 *  1. We first choose the middle point of the shorter array as the split k2.
 *  2. Then we get the k1, and start to adjust the k2 split left or right as in algo2
 * 
 *  Time O(log(min(M, N)))
 *  Space O(1)
 */
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() < nums2.size()) return findMedianSortedArrays(nums2, nums1);

        /**
         * 1. Get the value, k which is the number less than median
         */
        int totalNumber = nums1.size() + nums2.size();
        int k = (totalNumber / 2);
        /** 
         * 2. Binary search nums2, find the proper split to get k2.
         *      Seaching the middle index as the split in num2, we'll take the number before the split as k2
         *      (k1 + k2 = k, k is the number less than the median)
         */

        int left = 0, right = nums2.size()-1;
        int k1, k2; // k = k1 + k2
        int firstLeft, firstRight, secondLeft, secondRight;

        while(1) {
            k2 = (right + left + 1) / 2;
            k1 = k - k2;
            /**
             * 3. Check if k2 is a "proper split", which we find the split by binary search strategy
             * proper split means a & b is true, and consider the situation c, d
             *  a. nums1[k1-1](firstLeft) <= nums2[k2](secondRight) (the number after the k2 split)
             *  b. nums2[k2-1](secondLeft) <= nums1[k1](firstRight) (the number after the k1 split)
             *     - firstLeft = the closest number in right of the first array's split
             *  c. if k1 = array size or k2 = 0, the specific split in k2 cannot shift to left any more.
             *     Set the value to the to avoid.
             *  d. if k1 = 0 or k2 = array size, the specific split in k2 cannot shift to right and more.
             *     Set the value to the to avoid.
             */
            
            firstLeft = k1 == 0 ? INT_MIN : nums1[k1-1];
            firstRight = k1 == nums1.size() ? INT_MAX : nums1[k1];
            secondLeft = k2 == 0 ? INT_MIN : nums2[k2-1];
            secondRight = k2 == nums2.size() ? INT_MAX : nums2[k2];

            if(firstRight >= secondLeft && secondRight >= firstLeft) {
                // the split is done! return the answer
                if(totalNumber%2) {
                    // total number is odd 
                    return (double)min(firstRight, secondRight);
                }
                else {
                    // total number is even
                    return (double)(max(firstLeft, secondLeft) + min(firstRight, secondRight))/2;
                }
            }
            /**
             * 4. 
             * k2 is not a proper split, now decide how to adjust the split
             */
            if (firstLeft > secondRight){
                // k2 proper split must be in the right. Continually, drop more numbers in k2.
                left = k2+1;
            }
            else if(secondLeft > firstRight) {
                // k2 proper split must be in the left. Continually, drop more numbers in k2.
                right = k2-1;
            }
        }
    }
};