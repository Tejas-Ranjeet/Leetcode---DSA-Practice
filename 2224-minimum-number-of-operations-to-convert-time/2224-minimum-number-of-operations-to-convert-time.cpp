#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int convertTime(string current, string correct) {

        int cur =
            stoi(current.substr(0,2))*60 +
            stoi(current.substr(3,2));

        int cor =
            stoi(correct.substr(0,2))*60 +
            stoi(correct.substr(3,2));

        int diff = cor - cur;

        int operation = 0;

        operation += diff / 60;
        diff %= 60;

        operation += diff / 15;
        diff %= 15;

        operation += diff / 5;
        diff %= 5;

        operation += diff;

        return operation;
    }
};