class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            seen[nums[i]]++;
        }

        vector<pair<int, int>> freq;

        for (auto x : seen) {
            freq.push_back({x.second, x.first});
        }

        sort(freq.rbegin(), freq.rend());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};