class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      vector<int> ans;
      int a,b;
      int n=grid.size();
      int acsum=0;
      int exsum=(n*n)*(n*n +1)/2;
      unordered_set<int> s;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            acsum=acsum+grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                a=grid[i][j];
                ans.push_back(a);
            }
        s.insert(grid[i][j]);
        }
      }
      b=exsum+a-acsum;
      ans.push_back(b);
      return ans;
    }
};