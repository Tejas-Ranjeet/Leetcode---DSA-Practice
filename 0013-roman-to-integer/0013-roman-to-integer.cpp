class Solution {
public:
    int romanToInt(string s) {
        
        // int x = stoi(s);

        // int thousand = x / 1000;
        // x % 1000;

        // int five_Hundred = x / 500;
        // x % 500;

        // int hundred = x / 100;
        // x % 100;

        // int fifty = x / 50;
        // x % 50;

        // int ten = x / 10;
        // x % 10

        // int one = x;

    unordered_map<char,int> mp;

    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int sum = 0;

    for(int i = 0; i < s.length(); i++){

        if(s[i] == 'I' && s[i+1] == 'V'){
            sum = sum + 4;
            i+= 1;
        }
        else if(s[i] == 'I' && s[i+1] == 'X'){
            sum = sum + 9;
            i+= 1;
        }
        else if(s[i] == 'X' && s[i+1] == 'L'){
            sum = sum + 40;
            i+= 1;
        }
        else if(s[i] == 'X' && s[i+1] == 'C'){
            sum = sum + 90;
            i+= 1;
        }
        else if(s[i] == 'C' && s[i+1] == 'D'){
            sum = sum + 400;
            i+= 1;
        }
        else if(s[i] == 'C' && s[i+1] == 'M'){
            sum = sum + 900;
            i+= 1;
        }
        else{
            sum = sum + mp[s[i]];
        }


    }
    return sum;


    }
};