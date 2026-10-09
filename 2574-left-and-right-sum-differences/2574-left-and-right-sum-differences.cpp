class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        int temp=0;
        left.push_back(temp);
        for(int i=1;i<nums.size();i++){
            temp+=nums[i-1];
            left.push_back(temp);
        }
        temp=0;
        right.push_back(temp);
        for(int i=nums.size()-2;i>=0;i--){
            temp+=nums[i+1];
            right.push_back(temp);
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int dig=abs(left[i]-right[nums.size()-1-i]);
            res.push_back(dig);
        }
        return res;
    }
};