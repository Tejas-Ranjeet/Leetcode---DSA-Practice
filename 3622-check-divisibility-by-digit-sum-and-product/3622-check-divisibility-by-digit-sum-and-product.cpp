class Solution {
public:
    bool checkDivisibility(int n) {
        

        int original = n;

        vector<int> arr;
        while(n > 0){
            int digit = n % 10;
            arr.push_back(digit);
            n = n / 10;
        }

        int sum = 0;
        int product = 1;

        for(auto x : arr){
            product = product * x;
            sum = sum + x;
        }

        int final_sum = sum + product;

        if(original % final_sum == 0){
            return true;
        }
        return false;
    }
};