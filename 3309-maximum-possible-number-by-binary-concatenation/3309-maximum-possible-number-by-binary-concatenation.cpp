class Solution {
public:
    int maxGoodNumber(vector<int>& nums) {
        vector<string> arr;

        for(int i=0;i<nums.size();i++){
            string add="";
            int temp=nums[i];
            while(temp>0){
                add+=to_string(temp%2);
                temp/=2;
            }
            reverse(add.begin(),add.end());
            arr.push_back(add);
        }

        sort(arr.begin(),arr.end(),[](string a,string b){
            return a+b>b+a;
        });

        string bin="";
        for(int i=0;i<arr.size();i++){
            bin+=arr[i];
        }
        cout<<bin;
        long long res=0;
        long long c=1;
        for(int i=bin.length()-1;i>=0;i--){
            res+=((bin[i]-'0')*c);
            c*=2;
        }
        return res;
    }
};