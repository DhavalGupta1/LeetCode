class Solution {
public:
    int minimumPushes(string word) {
        int hash[26]={0};
        for(int i=0;i<word.length();i++){
            hash[(int)word[i]-'a']++;
        }
        int add=1,count=1,res=0;
        for(int i=0;i<26;i++){
            int max=-1,ind=-1;
            for(int j=0;j<26;j++){
                if(max<hash[j]){
                    max=hash[j];
                    ind=j;
                }
            }
            hash[ind]=0;
            res+=(add*max);
            if(count%8==0)add++;
            count++;
        }
        return res;
    }
};