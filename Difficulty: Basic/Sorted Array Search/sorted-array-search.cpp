class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        int start = 0;
        int end = arr.size() - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (arr[mid] == k) {
                return true;
            }
            else if (k > arr[mid]) {
                start = mid + 1;  // go right
            }
            else {
                end = mid - 1;    // go left
            }
        }
        
        return false; // not found
    }
};