class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0;          // Window ka starting point
        int right = 0;         // Window ka ending point
        int max_len = 0;       // Maximum length store karega
        int n = s.length();

        // Hash array:
        // hash[ch] = character 'ch' last kis index par mila tha
        // -1 means abhi tak character nahi mila
        vector<int> hash(256, -1);

        while (right < n) {

            // Agar current character pehle mil chuka hai
            if (hash[s[right]] != -1) {

                // Aur agar wo current window ke andar hai,
                // to left ko us character ke next index par le jao
                // Taaki duplicate remove ho jaye
                if (hash[s[right]] >= left) {
                    left = hash[s[right]] + 1;
                }
            }

            // Current window ki length
            int len = right - left + 1;

            // Maximum length update karo
            max_len = max(max_len, len);

            // Current character ka latest index store karo
            hash[s[right]] = right;

            // Window ko aage badhao
            right++;
        }

        return max_len;
    }
};