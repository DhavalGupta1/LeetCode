class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int res=-1;
        int min=999999;
        int x1=target[0],y1=target[1];
        for(int i=0;i<drones.size();i++){
            int x2=drones[i][0];
            int y2=drones[i][1];
            int dis=abs(x1-x2)+abs(y1-y2);
            if(dis<=drones[i][2]){
                if(dis<min){
                    res=i;
                    min=dis;
                }
            }
        }
        return res;   
    }
};