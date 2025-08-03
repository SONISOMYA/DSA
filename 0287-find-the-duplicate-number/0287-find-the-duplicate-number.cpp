class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

//we can use do while loop as well
slow = nums[slow];
fast = nums[nums[fast]];

while (slow != fast) {
    slow = nums[slow];
    fast = nums[nums[fast]];
}

// Phase 2: Find entrance of cycle
slow = nums[0];
while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
}

return slow;


    }

};