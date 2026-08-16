class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> mp;

        for(char ch : s){
            mp[ch]++;
        }
        for(char ch : t){
            mp[ch]--;
        }
        for(auto m : mp){
            if(m.second != 0){
                return false;
            }
        }
        return true;
    }
};