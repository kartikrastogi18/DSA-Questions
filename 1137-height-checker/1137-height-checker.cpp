class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int c=0;
      vector<int>h=heights;
      sort(heights.begin(),heights.end());
      for(int i=0;i<h.size();i++){
        if(heights[i]!=h[i]){
            c++;
        }
      } 
      return c; 
    }
};