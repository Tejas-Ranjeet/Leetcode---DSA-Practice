class Solution {
public:
    int numberOfSubstrings(string s) {

        int last_seen[3] = {-1,-1,-1};
        int count = 0;

        for(int i = 0; i < s.length(); i++){

            last_seen[s[i] - 'a'] = i;

            if(last_seen[0] != -1 && last_seen[1] != -1 && last_seen[2] != -1){

                count = count + (1 + min(last_seen[0], min(last_seen[1], last_seen[2])));
            }
        }
        return count;

    }
};








/**********************************************/
/***☠️☠️☠️☠️☠️☠️ TLE ☠️☠️☠️☠️☠️☠️☠️****/
/*********************************************/


// class Solution {
// public:
//     int numberOfSubstrings(string s) {

//         int count = 0;

//         for(int i = 0; i < s.length(); i++){
//             int hash[3] = {0};
//             for(int j = i; j < s.length(); j++){
//                 hash[s[j] - 'a'] = 1;

//                 if(hash[0] + hash[1] + hash[2] == 3){
//                     count = count + 1;
//                 }
//             }
//         }
//         return count;

//     }
// };




/**********************************************/
/*☠️☠️☠️☠️☠️☠️AGAIN TLE☠️☠️☠️☠️☠️☠️☠️**/
/*********************************************/



// class Solution {
// public:
//     int numberOfSubstrings(string s) {

//         vector<string> vt;
//         string st = "abc";
//         int count = 0;

//         for (int i = 0; i < s.length(); i++) {
//             string ans = "";
//             for (int j = i; j < s.length(); j++) {
//                 ans.push_back(s[j]);
//                 vt.push_back(ans);
//             }
//         }

//         for (int i = 0; i < vt.size(); i++) {

//             bool a = false;
//             bool b = false;
//             bool c = false;

//             for (auto ch : vt[i]) {

//                 if (ch == 'a')
//                     a = true;
//                 if (ch == 'b')
//                     b = true;
//                 if (ch == 'c')
//                     c = true;
//             }

//             if (a & b & c) {
//                 count++;
//             }
//         }
//         return count;
//     }
// };