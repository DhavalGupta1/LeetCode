class Solution {
public:
    int kam(int a,int b,int c){
        if(a<b&&a<c) return a;
        else if(b<a&&b<c) return b;
        else if(c<a&&c<b) return c;
        else return a;
    }
    int numberOfSubstrings(string s) {
        int arr[3]={-1,-1,-1};
        int res=0;
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']=i;
            if(arr[0]!=-1&&arr[1]!=-1&&arr[2]!=-1){
                res+=kam(arr[0],arr[1],arr[2])+1;
            }
        }
        return res;
    }
};