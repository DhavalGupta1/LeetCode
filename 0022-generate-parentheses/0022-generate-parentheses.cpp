class Solution {
public:
    vector<string> res;
    void recurse(int n,string str,int op,int cl){
        if(str.length()==2*n){
            res.push_back(str);
            return;
        }
        if(op<n){
            recurse(n,str+'(',op+1,cl);
        }
        if(cl<op){
            recurse(n,str+')',op,cl+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        string str;
        recurse(n,str,0,0);
        return res;
    }
};