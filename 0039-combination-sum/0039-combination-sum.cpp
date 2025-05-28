class Solution {
public:

    void combiSum(vector<int>& candidates, int target, int start,vector<vector<int>>&result,vector<int>temp,int sum){

        if(sum==target) {
            result.push_back(temp);
            return;
        }
        if(sum>target) return;

        for(int i=start;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            sum+=candidates[i];
            combiSum(candidates,target,i,result,temp,sum);
            sum-=candidates[i];
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>result;
        vector<int>temp;            
        int sum=0;
        combiSum(candidates,target,0,result,temp,sum);
        return result;
    }
};