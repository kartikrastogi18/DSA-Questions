class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";
        
        for (int i = 0; i < s.size(); i++) {
            temp += to_string(int(s[i]) - 96);
        }

        int sum = 0;
        while (k > 0) {
            for (int i = 0; i < temp.size(); i++) {
                sum += int(temp[i]) - 48; 
            }
            temp = to_string(sum);
            sum = 0;
            k--;
        }

        for (int i = 0; i < temp.size(); i++) {
            sum = sum * 10 + int(temp[i]) - 48;
        }

        return sum;
    }
};