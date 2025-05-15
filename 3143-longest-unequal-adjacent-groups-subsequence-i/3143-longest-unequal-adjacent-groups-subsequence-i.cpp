class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        if(words.size()==1){
            return words;
        }
     for(int i=0;i<groups.size()-1;i++){
        if(groups[i]!=groups[i+1]){
            ans.push_back(words[i]);
        }
     } 
     ans.push_back(words[words.size()-1]) ;
     return ans; 
    }
};