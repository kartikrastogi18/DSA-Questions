class Solution {
public:
    void allsubsets(vector<int>&nums,vector<int> &ans,int i,vector<vector<int>> &asubsets){
    if(i==nums.size()){
        asubsets.push_back({ans});
        return;
    }
    ans.push_back(nums[i]);
    allsubsets(nums,ans,i+1,asubsets);
    ans.pop_back();
    allsubsets(nums,ans,i+1,asubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> asubsets;
        vector<int> ans;
        allsubsets(nums,ans,0,asubsets);
        return asubsets;
    }
};