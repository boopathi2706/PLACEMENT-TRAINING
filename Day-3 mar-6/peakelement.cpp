class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            auto max=std::max_element(nums.begin(),nums.end());
            int val=std::distance(nums.begin(),max);
            return val;
        }
    };