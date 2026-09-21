class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        long long res=0;
        int time=intervals[0][1];
        for(int i=0;i<intervals.size();i++){
            int j=i+1;
            while(j<intervals.size()&&intervals[j][0]<=intervals[i][1]){
                res++;
                j++;
            }
        }
        return res;
    }
};