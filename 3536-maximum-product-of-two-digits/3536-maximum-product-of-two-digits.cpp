class Solution {
public:
    int maxProduct(int n) {
        int product = 1;
        vector<int> arr;
        int max_prod = 0;
        while(n > 0){
            int digit = n % 10;
            arr.push_back(digit);
            n = n / 10;
        }
        for(int i = 0; i < arr.size(); i++){
            for(int j = i+1; j < arr.size(); j++){
                product = arr[i] * arr[j];
                max_prod = max(product,max_prod);
            }
        }
        return max_prod;
    }

};