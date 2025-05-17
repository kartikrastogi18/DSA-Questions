class Solution {
public:
    void sortColors(vector<int>& nums) {
    vector<int>ans;
    for(int i=0;i<3;i++){
        for(int j=0;j<nums.size();j++){
            if(i==nums[j]){
               ans.push_back(i);
            }
        }
    }
   nums.clear();
   nums=ans;
   
    }
};