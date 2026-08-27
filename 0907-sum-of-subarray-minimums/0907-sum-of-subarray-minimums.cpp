class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> next(arr.size());
        stack<int> s1;
        for(int i=arr.size()-1;i>=0;i--){
            while(!s1.empty()&&arr[s1.top()]>=arr[i]){
                s1.pop();
            }
            if(s1.empty()){
                next[i]=arr.size();
            }
            else{
                next[i]=s1.top();
            }
            s1.push(i);
        }
        vector<int> pre(arr.size());
        stack<int> s2;
        for(int i=0;i<arr.size();i++){
            while(!s2.empty()&&arr[s2.top()]>arr[i]){
                s2.pop();
            }
            if(s2.empty()){
                pre[i]=-1;
            }
            else{
                pre[i]=s2.top();
            }
            s2.push(i);
        }
        long long res=0;
        int flag=1e9+7;
        for(int i=0;i<arr.size();i++){
            long long left=i-pre[i];
            long long right=next[i]-i;
            res = (res+(((left*right)*arr[i]*1LL)%flag))%flag;
        }
        return res%flag;
    }
};