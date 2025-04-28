class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> names1;
        vector<int> nums=heights;
        sort(heights.begin(),heights.end());
        reverse(heights.begin(),heights.end());
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<names.size();j++){
                if(heights[i]==nums[j]){
                    names1.push_back(names[j]);
                }
            }
        }
        
        return names1;

        
    }
};