class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int next=customers[0][0]+customers[0][1];
        long long time=next-customers[0][0];
        for(int i=1;i<customers.size();i++){
            next=max(next,customers[i][0]);
            next+=customers[i][1];
            time+=next-customers[i][0];
        }
        return (double)time/customers.size();
    }
};