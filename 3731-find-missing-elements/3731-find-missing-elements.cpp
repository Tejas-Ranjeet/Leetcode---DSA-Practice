class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int low = nums[0];
        int high = nums.back();

        for(int x : nums){
            mp[x]++;
        }
        for(int i = low; i < high; i++){

            if(mp.find(i) == mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};