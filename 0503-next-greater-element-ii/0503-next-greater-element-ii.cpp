class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s1;
        vector<int> res(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            while(!s1.empty()&&s1.top()<=nums[i]){
                s1.pop();
            }
            s1.push(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--){
            while(!s1.empty()&&s1.top()<=nums[i]){
                s1.pop();
            }
            if(s1.empty()){
                res[i]=-1;
            }
            else{
                res[i]=s1.top();
            }
            s1.push(nums[i]);
        }
        return res;
    }
};