class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size(),m=capital.size();int i=0;
        vector<pair<int,int>>pairs(n);
        for(int j=0;j<n;j++){
            pairs[j]={capital[j],profits[j]};
        }
        sort(pairs.begin(),pairs.end());
        priority_queue<int>pq;
        while(k--){
            while(i<n&&pairs[i].first<=w){
                pq.push(pairs[i].second);
                i++;
            }
            if(pq.empty()) break;
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
};