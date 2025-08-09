class Solution {
public:
    int findKRotation(vector<int> &nums) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[high]) {
                // Minimum is in the right part
                low = mid + 1;
            } else {
                
                high = mid;
            }
        }
        // At the end, low == high and points to the minimum
        return low;
    }
};
