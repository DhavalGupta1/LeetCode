class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s1;
        vector<int> res;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0){
                s1.push(asteroids[i]);
            }
            else{
                while(!s1.empty()&&s1.top()>0&&s1.top()<abs(asteroids[i])){
                    s1.pop();
                }
                if(!s1.empty()&&s1.top()==abs(asteroids[i])) s1.pop();
                else if(s1.empty()||s1.top()<0){
                    s1.push(asteroids[i]);
                }
            }
        }
        while(!s1.empty()){
            res.push_back(s1.top());
            s1.pop();
        }
        for(int i=0;i<res.size()/2;i++){
            int temp=res[i];
            res[i]=res[res.size()-i-1];
            res[res.size()-i-1]=temp;
        }
        return res;
    }
};