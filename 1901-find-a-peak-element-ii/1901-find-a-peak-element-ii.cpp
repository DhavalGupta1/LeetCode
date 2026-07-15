class Solution {
public:
    int find(vector<vector<int>> &mat,int col){
        int res=0;
        for(int i=0;i<mat.size();i++){
            if(mat[res][col]<mat[i][col]) res=i;
        }
        return res;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0;
        int high=mat[0].size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=find(mat,mid);
            int el=mat[row][mid];
            int left,right;
            int col=mid;

            if(col-1>=0) left=mat[row][col-1];
            else left=-1;

            if(col+1<mat[0].size()) right=mat[row][col+1];
            else right=-1;

            if(mat[row][col]>left&&mat[row][col]>right) return {row,col};
            else if(mat[row][col]<left) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};