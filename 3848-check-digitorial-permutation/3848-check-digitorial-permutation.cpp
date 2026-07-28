class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int> fac;
        int temp=1;
        fac.push_back(temp);
        for(int i=1;i<=9;i++){
            temp*=i;
            fac.push_back(temp);
        }
        int flag=0;
        int save=n;
        int hash[10]={0};
        while(n>0){
            int digit=n%10;
            hash[digit]++;
            flag+=fac[digit];
            n=n/10;
        }
        while(flag>0){
            int digit=flag%10;
            hash[digit]--;
            flag=flag/10;
        }
        for(int i=0;i<10;i++){
            if(hash[i]!=0) return 0;
        }
        return 1;
    }
};