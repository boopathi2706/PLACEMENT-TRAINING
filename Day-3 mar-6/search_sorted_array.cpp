class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int s=-1;
            for(int i=0;i<(sizeof(nums)/sizeof(int));i++){
                 if(nums[i]==target){
                    s=i;
                    break;
                 }
            }
            return s;
        }
    };