class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
         unordered_map<int, int> freq;
        int n = nums.size();

        for (auto& arr : nums) {
            for (int num : arr) {
                freq[num]++;
            }
        }

        vector<int> result;
        for (auto& [num, count] : freq) {
            if (count == n) {
                result.push_back(num);
            }
        }

        sort(result.begin(), result.end());
        return result;
    }
};