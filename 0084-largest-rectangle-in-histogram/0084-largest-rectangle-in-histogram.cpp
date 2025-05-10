class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
       int n=height.size();
       vector<int> right(n,0); 
       vector<int> left(n,0); 
       stack<int>s;
       for(int i=n-1;i>=0;i--){
       while(s.size()>0&&height[s.top()]>=height[i]){
            s.pop();
        }
        right[i] = s.empty() ? n:s.top();
        s.push(i); 
       }
       while(!s.empty()){
        s.pop();
       }
        for(int i=0;i<n;i++){
        while(s.size()>0&&height[s.top()]>=height[i]){
            s.pop();
        }
       left[i] = s.empty() ? -1:s.top();
        s.push(i); 
       }
       int ans=0;
       for(int i=0;i<n;i++){
        int width=right[i]-left[i]-1;
        int car=height[i]*width;
        ans=max(ans,car);
       }
       return ans;
    }
};