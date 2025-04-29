class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto& row: grid)  
            sort(row.begin(), row.end());

        int rows = grid.size();
        int cols = grid[0].size();
        int sum_deleted_values = 0;
        for (int c=cols-1; c>=0; --c) {
            int max_val = -1;
            for (int r=0; r<rows; ++r)      max_val =max(max_val, grid[r][c]);
            sum_deleted_values += max_val;
        }

        return sum_deleted_values;
    }
};