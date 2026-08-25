class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        int i = 1;

        while(true){

            int num = k * i;
            auto it = find(nums.begin(),nums.end(),num);

            if(it == nums.end()){
                return k*i;
            }
            i++;
        }
        return 0;
    }
};