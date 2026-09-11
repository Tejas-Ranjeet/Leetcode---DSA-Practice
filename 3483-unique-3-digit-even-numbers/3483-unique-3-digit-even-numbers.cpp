class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        int freq[10] = {0};

        // Count frequency of each digit
        for (int d : digits) {
            freq[d]++;
        }

        int count = 0;

        // Choose hundreds digit
        for (int h = 1; h <= 9; h++) {

            if (freq[h] == 0)
                continue;

            freq[h]--;

            // Choose tens digit
            for (int t = 0; t <= 9; t++) {

                if (freq[t] == 0)
                    continue;

                freq[t]--;

                // Choose units digit
                for (int u = 0; u <= 8; u += 2) {

                    if (freq[u] > 0) {
                        count++;
                    }
                }

                freq[t]++;
            }

            freq[h]++;
        }

        return count;
    }
};