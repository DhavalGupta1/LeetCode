class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mpp;
        int l=0,r=0,res=0;
        while(r<fruits.size()){
            mpp[fruits[r]]++;
            if(mpp.size()>2){
                while(mpp.size()>2){
                    mpp[fruits[l]]--;
                    if(mpp[fruits[l]]==0) mpp.erase(fruits[l]);
                    l++;
                }
            }
            int temp=r-l+1;
            res=max(res,temp);
            r++;
        }
        return res;
    }
};