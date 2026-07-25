class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int left = 0;
        int right = 0; 
        int max_len = 0;
        int n = s.length();
        vector<int> hash(256,-1);

        while(right < n){
            
            if(hash[s[right]] != -1){
                if(hash[s[right]] >= left){
                    left = hash[s[right]] + 1; 
                }
            }
            int len = right - left + 1;
            max_len = max(len,max_len);
            hash[s[right]] = right;

            right++;

        }
        return max_len;
    }
};