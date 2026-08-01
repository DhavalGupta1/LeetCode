class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        long long first=0;
        long long second=0;
        long long res=0;
        if(pattern[0]==pattern[1]){
            for(int i=0;i<text.length();i++){
                if(text[i]==pattern[0]){
                    first++;
                }
            }
            first++;
            res=first*(first-1)/2;
        }
        else{
            for(int i=0;i<text.length();i++){
                if(text[i]==pattern[0]) first++;
                else if(text[i]==pattern[1]){
                    second++;
                    res+=first;
                }
            }
            res+=max(second,first);
        }
        return res;
    }
};