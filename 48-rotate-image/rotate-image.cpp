class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<vector<int>> ans(row, vector<int>(col));

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                ans[j][i] = matrix[i][j];
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                matrix[i][j] = ans[i][j];
            }
        }

        for(int i=0;i<row;i++)
        {
            int s = 0;
            int e = row-1;
            while(s<e)
            {
                swap(matrix[i][s],matrix[i][e]);
                s++;
                e--;
            }
        }
        
      
    }
};