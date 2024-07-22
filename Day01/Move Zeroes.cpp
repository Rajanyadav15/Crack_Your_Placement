class Solution {
public:
    void moveZeroes(vector<int>& nums) {
                int n = nums.size();
        int left = 0, right = 0;
        
        while (left < n) {
            if (nums[left] != 0) {
                swap(nums[left], nums[right]);
                right++;
            }
            left++;
        }
    }
};
