class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      vector<int> ans;
      ans.push_back(nums[0]);
      int n=nums.size();
      int c=0;
      for(int i=1;i<n;i++){
        if (nums[i-1]==nums[i]){
            c++;
        }else{
            c=0;
        }
        if(c<2){
            ans.push_back(nums[i]);
        }
      }
      nums.clear();
      nums=ans;
      return ans.size();  
    }
};