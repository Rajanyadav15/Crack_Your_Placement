class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
                int n = cardPoints.size();
        int totalPoints = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        
        if (k >= n) {
            return totalPoints;
        }

        int windowSize = n - k;
        int minSubarraySum = accumulate(cardPoints.begin(), cardPoints.begin() + windowSize, 0);
        int currentSubarraySum = minSubarraySum;

        for (int i = windowSize; i < n; ++i) {
            currentSubarraySum += cardPoints[i] - cardPoints[i - windowSize];
            minSubarraySum = min(minSubarraySum, currentSubarraySum);
        }

        return totalPoints - minSubarraySum;
    }
};
