class Solution {
  public:
    int First(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int first = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return first;
    }

    int Last(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return last;
    }

    int countFreq(vector<int>& arr, int target) {
        int f = First(arr, target);
        int l = Last(arr, target);
        if (f == -1 || l == -1) return 0;  // Handle not-found case
        return l - f + 1;
    }
};
