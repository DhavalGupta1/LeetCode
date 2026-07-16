class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                flag++;
                res=max(res,flag);
            }
            else if(s[i]==')'){
                flag--;
            }
        }
        return res;
    }
};