class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        if(nums.size()<=2)
        {
            return nums;
        }
        vector<int> odd;
        vector<int> even;
        vector<int> neww(nums.size());       
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.rbegin(), odd.rend());
        for(int i=0;i<even.size();i++)
        {
            neww[i*2]=even[i];
        }
        for(int i=0;i<odd.size();i++)
        {
            neww[i*2+1]=odd[i];
        }
        return neww;
    }

};