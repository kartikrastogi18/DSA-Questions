class Solution {
public:
    int findLHS(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int l=0,r=0;
      int maxl=0;
      while(r<nums.size()){
        while(nums[r]-nums[l]>1){
            l++;
        }
        if(nums[r]-nums[l]==1){
            maxl=max(maxl,r-l+1);
        }
            r++;

      }  
      return maxl;
    }
};