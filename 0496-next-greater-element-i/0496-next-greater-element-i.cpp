class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s1;
        vector<int> res;
        unordered_map<int,int> store(nums2.size());
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s1.empty()&&s1.top()<=nums2[i]){
                s1.pop();
            }
            if(s1.empty()){
                store[nums2[i]]=-1;
            }
            else{
                store[nums2[i]]=s1.top();
            }
            s1.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            res.push_back(store[nums1[i]]);
        }
        return res;
    }
};