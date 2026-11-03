class Solution {
public:
    bool op(char check){
        if(check=='+'||check=='-'||check=='*'||check=='/') return 1;
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        long long res=0;
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            string num=tokens[i];
            int n=num.length()-1,k=0;
            int temp=0,sign=1;
            if(n==0&&op(num[0])){
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                int result=0;
                if(num[0]=='+') result=t2+t1;
                else if(num[0]=='-') result=t2-t1;
                else if(num[0]=='*') result=t2*t1;
                else if(num[0]=='/') result=t2/t1;
                st.push(result);
            }
            else{
                // for(int j=n;j>=0;j--){
                //     if(num[j]=='-') sign=-1;
                //     else temp=temp*10+(num[j]-'0');
                // }
                // st.push(temp*sign);
                st.push(stoi(num));
            }
        }
        res=st.top();
        return res;
    }
};