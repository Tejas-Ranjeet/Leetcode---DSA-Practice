#include<bits/stdc++.h>
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        //worst try:
        
        // vector<int> brr = arr;
        // sort(brr.begin(),brr.end());
        // unordered_map<int,int> mp;
        // for(int i =0 ; i < brr.size(); i++){
        //     mp[brr[i]] = i+1;
        // }
        // for(int i =0 ; i < brr.size(); i++){
        //     if(mp[brr[i]] == mp[brr[i+1]]){
        //         mp[brr[i+1]] = mp[brr[i]];
        //     }
        // }
        // vector<int> ans;
        // for(int i =0 ; i < arr.size(); i++){
        //     for(int j = 0; j < arr.size(); j++){
        //         if(arr[i] == arr[j]){
        //             ans.push_back(mp[brr[j]]);
        //         }
        //     }
        // }
        // return ans;

        //retry

        /*
        APPROACH:
        STEP1: COPY THE ARRAY
        STEP2: SORT THE COPIED  ARRAY
        STEP3: Assign ranks only when you encounter a new element.
        STEP4: Replace every original element with its rank
        */
        vector<int> brr = arr;
        sort(brr.begin(),brr.end());

        unordered_map<int,int> mp;
        
        int rank = 1;

        for(int x : brr){
            if(mp.find(x) == mp.end()){
                mp[x] = rank;
                rank++;
            }
        }

        vector<int> ans;

        for(int x : arr){
            ans.push_back(mp[x]);
        }

        return ans;

    }
};