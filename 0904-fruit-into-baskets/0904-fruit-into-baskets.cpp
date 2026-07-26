class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int k = 2;
        int left = 0;
        int right = 0;
        int length = 0;
        int max_length = 0;
        unordered_map<int,int> mp;

        while(right < fruits.size()){

            mp[fruits[right]]++;

            if(mp.size() > k){

                while(mp.size() > k){
                    mp[fruits[left]]--;

                    if(mp[fruits[left]] == 0){
                        mp.erase(fruits[left]);
                    }
                    left++;
                }
            }

            if(mp.size() <= k){

                length = right - left + 1;
                max_length = max(length,max_length);
            }

            right++;
        }

        return max_length;

    }
};







// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int left = 0;
//         int right = 0;
//         int fruit1 = left;
//         int fruit2 = left;

//         while(right < fruits.size()){
            
//             if(fruits[right] == fruit1){
//                 length = right - left + 1;
//             }
//             if(fruits[right] != fruit1){
//                 fruit2 = fruits[right];
//                 length++
//             }
//             if(fruits[right] != fruit1 && fruits[right] != fruit2){
//                 fruit1 = fruits[right];
//                 left = right - 1;
//             }
//             right++;

//         }
//         return 

//     }
// };