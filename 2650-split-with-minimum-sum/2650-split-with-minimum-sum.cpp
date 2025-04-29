class Solution {
public:
    int splitNum(int num) {
        string m=to_string(num);
        sort(begin(m),end(m));
        int odd=0;
        int even=0;
        for(int i=0;i<m.size();i++){
            if(i%2!=0) odd=odd*10+m[i]-'0';
            else even=even*10+m[i]-'0';
        }
        return odd+even;
    }
};
