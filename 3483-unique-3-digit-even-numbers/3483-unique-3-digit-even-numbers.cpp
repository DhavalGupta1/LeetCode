class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> res;
        for(int i=0;i<digits.size();i++){
            if(digits[i]%2==0){
                for(int j=0;j<digits.size();j++){
                    if(j!=i&&digits[j]!=0){
                        for(int k=0;k<digits.size();k++){
                            if(j!=k&&k!=i)
                                res.insert(digits[j]+digits[k]*10+digits[i]*100);
                        }
                    }
                }
            }
        }
        return res.size();
        // int ev=0,ze=0;
        // int hash[10]={0};
        // int fact[10]={1},pointer=1;
        // for(int i=1;i<10;i++){
        //     fact[i]=fact[i-1]*i;
        // }
        // for(int i=0;i<digits.size();i++){
        //     if(digits[i]==0) ze++;
        //     else if(digits[i]%2==0) ev++;
        //     hash[digits[i]]++;
        // }
        // if(ev+ze==0) return 0;
        // long long res=0;
        // long long ones=ev+ze;
        // long long ten=digits.size()-2;
        // long long hund=digits.size()-ze-1;
        // res=ones*ten*hund;
        // for(int i=0;i<10;i++){
        //     res/=fact[hash[i]];
        // }
        // return res;
    }
};