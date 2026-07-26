class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int i=0,j=0;
        int len1=series1.size();
        int len2=series2.size();
        vector<vector<int>> res;
        while(i<len1||j<len2){
            vector<int> temp;
            int t=0;
            if(i<len1) t+=series1[i][1];
            if(j<len2) t+=series2[j][1];

            if(i>=len1){
                temp.push_back(series2[j][0]);
                j++;
            }
            else if(j>=len2){
                temp.push_back(series1[i][0]);
                i++;
            }
            else if(series1[i][0]<series2[j][0]){
                temp.push_back(series1[i][0]);
                i++;
            }
            else if(series1[i][0]>series2[j][0]){
                temp.push_back(series2[j][0]);
                j++;
            }
            else{
                temp.push_back(series2[j][0]);
                j++;i++;
            }
            temp.push_back(t);
            res.push_back(temp);
        }
        return res;
    }
};