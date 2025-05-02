class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        vector<int> finalans;
        for(int i=0;i<=rowIndex;i++){
            vector<int> rows;
            for(int j=0;j<i+1;j++){
                if(j==0||j==i){
                    rows.push_back(1);
                }
                else{
                    rows.push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
                ans.push_back(rows);
                finalans=rows;
            
            
        }
        return finalans;
    }
};