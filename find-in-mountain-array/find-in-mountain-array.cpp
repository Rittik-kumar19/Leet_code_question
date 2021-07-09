/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:

// To find the peak Index -->

    int findPeak(int low, int high, MountainArray mArr) {
      while (low <= high) {
        int mid = (low + high)/2;
        
        if (mArr.get(mid) > mArr.get(mid - 1) && mArr.get(mid) > mArr.get(mid + 1)) {
          return mid;
        } else if (mArr.get(mid) > mArr.get(mid - 1) && mArr.get(mid) < mArr.get(mid + 1)) {
          low = mid + 1;
        } else {
          high = mid;
        };
      };
      
      return -1;
    };
  
  // To find the target value within the left part of the peak value -->
  
    int leftSearch(int low, int high, int target, MountainArray mArr) {
      while (low <= high) {
        int mid = (low + high)/2;
        
        if (mArr.get(mid) == target)
          return mid;
        else if (mArr.get(mid) > target)
          high = mid - 1;
        else
          low = mid + 1;
      };
      
      return -1;
    };
	
	// To find the target value within the right part of the peak value -->
  
    int rightSearch(int low, int high, int target, MountainArray mArr) {
      while (low <= high) {
        int mid = (low + high)/2;
        
        if (mArr.get(mid) == target)
          return mid;
        else if (mArr.get(mid) > target)
          low = mid + 1;
        else
          high = mid - 1;
      };
      
      return -1;
    };
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
      int n = mountainArr.length();
      
      int peakIndex = findPeak(0, n-1, mountainArr);
      if (peakIndex == -1)
        return -1;
      
      int leftOccuranceIndex = leftSearch(0, peakIndex, target, mountainArr);
      if (leftOccuranceIndex != -1)
        return leftOccuranceIndex;
      else return rightSearch(peakIndex, n-1, target, mountainArr);
    }
};