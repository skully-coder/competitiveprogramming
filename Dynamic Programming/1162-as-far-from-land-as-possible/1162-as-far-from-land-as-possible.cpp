
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid){
        int n=grid.size(),m=grid[0].size();
        queue<pair<int,int>> q;
        for(int i = 0; i < n; i++)
        {
            for(int j=0; j < m; j++)
            {
                if(grid[i][j] == 1) q.push({i,j});
            }
        }
        
        int res = 0;

        while(!q.empty())
        {
            int temp_i = q.front().first;
            int temp_j = q.front().second;
            q.pop();
          
            vector<pair<int,int>>dir = {{0,1},{0,-1},{1,0},{-1,0}};
           
            for(auto &it : dir)
            {
                int new_i= it.first + temp_i;
                int new_j= it.second + temp_j;
                if(new_i>=0 && new_i<n && new_j>=0 && new_j<m && grid[new_i][new_j]==0)
                {
                    q.push({new_i,new_j});
                    grid[new_i][new_j]=grid[temp_i][temp_j]+1;
                    res = max(res, grid[new_i][new_j]);
                }
            }
        }
    
        return res - 1;
    }
};
