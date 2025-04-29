class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int c=0;
    for(int i=0;i<nums.size();i+=2){
        c=c+nums[i];
    }  
    return c;  
    }
};