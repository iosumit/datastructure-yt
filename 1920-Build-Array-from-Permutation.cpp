class Solution {
    public:
    vector<int> buildArray(vector<int>& nums) {

        int n = nums.size();
        for (int i=0; i<n; i++){
            nums[i] += (nums[nums[i]] % 1000) * 1000;
        }

        for (int i=0; i<n; i++){
            nums[i] = nums[i]/1000;
        }
        return nums;


        // vector<int> ans;
        // int n = nums.size();
        // for (int i=0; i<n; i++){
        //     ans.push_back(nums[nums[i]]);
        // }
        // return ans;
    }
};