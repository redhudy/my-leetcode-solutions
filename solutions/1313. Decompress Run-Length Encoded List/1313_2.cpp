// Time complexity: O(n*m)
// Space complexity: O(1)
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i += 2) {
            for (int j = 1; j <= nums[i]; j++) {
                result.push_back(nums[i + 1]);
            }
        } return result;
    }
};