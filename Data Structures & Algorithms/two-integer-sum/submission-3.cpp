class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums2 = nums;
        sort(nums2.begin() , nums2.end());
        int n = nums2.size();
        int i=0 , j=n-1;
        int first = 0 , second = 0;
        while(i<j) {
            if(nums2[i]+nums2[j]==target) {
                first = nums2[i] , second = nums2[j]; 
                break;
                }
            else if(nums2[i]+nums2[j] < target)
                i++;
            else 
                j--;
        }
        vector<int> real;
        int mark=0;
        for(int i=0;i<n;i++) {
            if(nums[i]==first) {
                real.push_back(i);
                mark=i;
                break;
            }
        }
        for(int j=0;j<n;j++) {
            if(nums[j]==second && j!=mark) {
                real.push_back(j);
                break;
            }
        }
        sort(real.begin(),real.end());
        return real;
    
    }
};
