class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int dis1=1,dis2=1;
        int n=words.size();
        int n1=n;
        int i=startIndex,j=startIndex;
        if(words[i]==target) return 0;
        while(n1!=0){
            i=(i+1)%n;
            if(words[i]==target) return dis1;
            else dis1++;
            j=(j-1+n)%n;
            if(words[j]==target) return dis2;
            else dis2++;
            n1--;
        }
        return -1;
    }
};