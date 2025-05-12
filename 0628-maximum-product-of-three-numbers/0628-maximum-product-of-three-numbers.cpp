class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans2=1;
        for(int i=0;i<2;i++){
            ans2*=nums[i];
        }
        reverse(nums.begin(),nums.end());
        int ans=1;
      for(int i=0;i<3;i++){
        ans*=nums[i];
      } 
      return max(ans,ans2*nums[0]);
      
      
    }
};