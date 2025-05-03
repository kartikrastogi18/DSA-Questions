class Solution {
public:
    int calPoints(vector<string>& oper) {
        vector<int> nums;
        int j=0,ans=0;
        for(int i=0;i<oper.size();i++){
            if(oper[i]=="+"){
                nums.push_back(nums[j-1]+nums[j-2]);
                j++;
            }
            else if(oper[i]=="D"){
                nums.push_back(2*nums[j-1]);
                j++;
            }
            else if(oper[i]=="C"){
                nums.pop_back();
                j--;
            }else{
                nums.push_back(stoi(oper[i]));
                j++;
            }
        }
        for(int k=0;k<nums.size();k++){
            ans+=nums[k];
        }
        return ans;
    }
};