class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> arr(numRows);
        int ptr=0;
        int pos = 1;
        for(char i:s){
            arr[ptr]+=i;
            if(pos){
                ptr++;
            }else{
                ptr--;
            }
            if(ptr==numRows-1) pos = 0;
            if(ptr==0) pos = 1;
        }
        string res;
        for(string i: arr){
            res += i;
        }
        return res;
    }
};