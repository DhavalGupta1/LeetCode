class Solution {
public:
    int check(vector<int> &weights,int cap){
        int temp=0;
        int da=1;
        for(int i=0;i<weights.size();i++){
            if(temp+weights[i]>cap){
                da++;
                temp=weights[i];
            }
            else{
                temp+=weights[i];
            }
        }
        return da;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int min=weights[0],high=0;
        for(int i=0;i<weights.size();i++){
            high+=weights[i];
            if(weights[i]>min){
                min=weights[i];
            }
        }
        int res=high;
        while(min<=high){
            int mid=(min+high)/2;
            int curr=check(weights,mid);
            if(curr<=days){
                high=mid-1;
                if(res>mid) res=mid;
            }
            else{
                min=mid+1;
            }
        }
        return res;
    }
};