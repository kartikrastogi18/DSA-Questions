class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>nya=score;
        vector<string> ans;
        sort(score.begin(),score.end());
        reverse(score.begin(),score.end());
        for(int i=0;i<score.size();i++){
            for(int j=0;j<score.size();j++){
            if(nya[i]==score[j]){
                if(j==0){
                    ans.push_back("Gold Medal");
                }
                else if(j==1){
                    ans.push_back("Silver Medal");
                }
                else if(j==2){
                    ans.push_back("Bronze Medal");
                }
                else{
                    string p=to_string(j+1);
                    ans.push_back(p);
                }
            }
            }
        }
        return ans;
        
    }
};