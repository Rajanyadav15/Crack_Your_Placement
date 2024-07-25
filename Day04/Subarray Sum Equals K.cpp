class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> cumSumCount;
        cumSumCount[0] = 1;

        int cumSum = 0;
        int count = 0;

        for (int num : nums) {
            cumSum += num;
            if (cumSumCount.find(cumSum - k) != cumSumCount.end()) {
                count += cumSumCount[cumSum - k];
            }
            cumSumCount[cumSum]++;
        }

        return count;
    }
};
