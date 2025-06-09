class Solution {
public:
    unordered_map<int,int> m;
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        if(m.find(n)!=m.end()){
            return m[n];
        }
        int result= climbStairs(n-1) + climbStairs(n-2);
        m[n]=result;
        return m[n];
    }
};