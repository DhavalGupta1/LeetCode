class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int pt=-1;
        if(arr[0]>=0){
            for(int i=0;i<arr.size();i++) arr[i]*=arr[i];
            return arr;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                pt=i;
                break;
            }
        }
        if(pt==-1){
            for(int i=0;i<arr.size();i++) arr[i]*=arr[i];
            reverse(arr.begin(),arr.end());
            return arr;
        }
        for(int i=0;i<arr.size();i++) arr[i]*=arr[i];
        vector<int> res;
        int j=pt-1;
        while(j!=-1&&pt<arr.size()){
            if(arr[pt]<arr[j]){
                res.push_back(arr[pt]);
                pt++;
            }
            else{
                res.push_back(arr[j]);
                j--;
            }
        }
        while(j!=-1) res.push_back(arr[j--]);
        while(pt<arr.size()) res.push_back(arr[pt++]);
        return res;
    }
};