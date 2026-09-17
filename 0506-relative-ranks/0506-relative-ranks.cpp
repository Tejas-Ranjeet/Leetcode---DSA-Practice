class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sorted = score;
        sort(sorted.rbegin(), sorted.rend());

        unordered_map<int, string> mp;

        for (int i = 0; i < sorted.size(); i++) {
            if (i == 0)
                mp[sorted[i]] = "Gold Medal";
            else if (i == 1)
                mp[sorted[i]] = "Silver Medal";
            else if (i == 2)
                mp[sorted[i]] = "Bronze Medal";
            else
                mp[sorted[i]] = to_string(i + 1);
        }

        vector<string> ans;

        for (int x : score) {
            ans.push_back(mp[x]);
        }

        return ans;
    }
};