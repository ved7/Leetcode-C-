class Solution {
    void dfs(vector<vector<char>>& matrix,int i,int j,int row,int col)
    {
        if(i<0 || j<0 || i>= row || j>=col || matrix[i][j]!='1')
            return ;
        
        matrix[i][j] = 2;
        dfs( matrix, i-1, j, row, col);
        dfs( matrix, i+1, j, row, col);
        dfs( matrix, i,j-1, row, col);
        dfs( matrix, i,j+1, row, col);
        
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int row = grid.size();
        if( row == 0)
            return 0;
        int col = grid[0].size();
        int count = 0;
        for( int i = 0;i < grid.size(); i++) {
            for( int j = 0;j < grid[0].size(); j++)
            {
                if(grid[i][j] == '1')
                {
                    dfs(grid,i,j,row,col);
                    count++;
                }
            }
        }
      return count;  
    }
};
