class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            mpp[nums[i]] += 1;
        }

        vector<pair<int,int>> v;          // (number, count)
        for (auto& x : mpp) {
            v.push_back({x.first, x.second});
        }

        sort(v.begin(), v.end(), [](auto& a, auto& b) {
            return a.second > b.second;   // bigger count goes first
        });

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);    // the number, not its count
        }
        return ans;
    }
};