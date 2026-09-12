class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> frequency(nums.size()+1);
        for(auto it:nums) 
            count[it]++;

        for(auto it: count) {
            frequency[it.second].push_back(it.first);
        }
        vector<int> res;
        for(int i=nums.size(); i>0; i--) {
            for(auto it:frequency[i]) {
                res.push_back(it);
                if(res.size()==k) return res;
            }
            
        }
        return res;
        
    }
};
