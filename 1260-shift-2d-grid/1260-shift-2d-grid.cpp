class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r=grid.size();
        int c=grid[0].size();
        k=k%(r*c);
        while(k--){
            vector<vector<int>> res(r,vector<int>(c)); 
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    if(i==r-1&&j==c-1){
                        res[0][0] = grid[i][j];
                    }
                    else if(j==c-1){
                        res[i+1][0] = grid[i][j];
                    }
                    else{
                        res[i][j+1] = grid[i][j];
                    }
                }
            }
            grid=res;
        }
        return grid;
    }
};