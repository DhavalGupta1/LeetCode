class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s1;
        vector<int> res,store(nums2.size());
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s1.empty()&&s1.top()<=nums2[i]){
                s1.pop();
            }
            if(s1.empty()){
                store[i]=-1;
            }
            else{
                store[i]=s1.top();
            }
            s1.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    res.push_back(store[j]);
                }
            }
        }
        return res;
    }
};