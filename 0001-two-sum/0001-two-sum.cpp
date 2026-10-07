class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      	int n = nums.size();
		int start = 0;
		int end = 0;
        int sum = 0;

        for(int start=0;start<n;start++){
            for(int end=0;end<n;end++){
                int sum = nums[start]+nums[end];
                if(sum == target && start != end){
                    return {start,end};
                }
            }
        }
        return {-1,-1};
    }
};