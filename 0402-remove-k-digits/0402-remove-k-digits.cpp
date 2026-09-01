class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s1;
        for(int i=0;i<num.length();i++){
            while(!s1.empty()&&k>0&&((s1.top()-'0')>(num[i]-'0'))){
                s1.pop();
                k--;
            }
            s1.push(num[i]);
        }
        while(k>0){
            s1.pop();
            k--;
        }
        if(s1.empty()) return "0";
        string res="";
        while(!s1.empty()){
            res+=s1.top();
            s1.pop();
        }
        while(res.size()>0&&res.back()=='0'){
            res.pop_back();
        }
        reverse(res.begin(),res.end());
        if(res.empty()) return "0";
        return res;
    }
};