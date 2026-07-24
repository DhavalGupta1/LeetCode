class Solution {
public:
    int minAddToMakeValid(string s) {
        int res=0;
        int stack1=0,stack2=0;
        if(s.length()==0) return 0;
        if(s.length()==1) return 1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                stack1++;
            }
            else{
                if(stack1>0) stack1--;
                else res++;
            }
        }
        res+=stack1;
        return abs(res);
    }
};