class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x == 1){
            return x;
        }
        for(long long int i=2;i<x;i++){
            if(i*i==x){
                return i;
            }
             if(i*i>x){
                return i-1;
            }
        }
        return 1;
    }
};