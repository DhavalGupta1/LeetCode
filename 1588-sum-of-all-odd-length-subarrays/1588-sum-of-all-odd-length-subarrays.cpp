class Solution {
public:
    // int res=0;
    // void sub(vector<int> arr,int len,int sum,int og,int ind){
    //     if(ind==og){
    //         if(len%2!=0){
    //             res+=sum;
    //         }
    //         return;
    //     }
    //     sub(arr,len+1,sum+arr[ind],og,ind+1);
    //     sub(arr,len,sum,og,ind+1);
        
    // }
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res=0,sum=0;
        vector<int> pre;
        for(int i=0;i<arr.size();i++){
            pre.push_back(sum);
            sum+=arr[i];
        }
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                int temp=j-i+1;
                if(temp%2!=0){
                    res+=pre[j]-pre[i]+arr[j];
                }
            }
        }
        return res;
    }
};