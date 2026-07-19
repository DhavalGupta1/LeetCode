class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        // bool bl1=0,bl2=0;
        // if((start[0]+start[1])%2==0) bl1=1;
        // if((target[0]+target[1])%2==0) bl2=1;

        // if(bl1==bl2) return 1;
        // return 0;

        return (start[0]+start[1])%2 == (target[0]+target[1])%2;
    }
};