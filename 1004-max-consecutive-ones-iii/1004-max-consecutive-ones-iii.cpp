class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int length = 0;
        int max_length = 0;
        int left = 0;
        int right = 0;
        int zeros = 0;

        while(right < nums.size()){

            if(nums[right] == 0){
                zeros++;
            }

            while(zeros > k){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }

            if(zeros <= k){
                length = right - left + 1;
                max_length = max(length, max_length);
            }
            right++;
        }
        return max_length;
    }
};



// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
        
//         int length = 0;
//         int max_len = 0;
//         for(int i = 0; i < nums.size(); i++){
//             int zeros = 0;
//             for(int j = i; j < nums.size(); j++){
//                 if(nums[j] == 0){
//                     zeros++;
//                 }
//                 if(zeros <= k){
//                     length = j - i + 1;
//                     max_len = max(length,max_len);
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         return max_len;
//     }
// };