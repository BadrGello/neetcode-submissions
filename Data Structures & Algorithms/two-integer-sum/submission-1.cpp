class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> ans(2);

        for (int i=0; i<nums.size(); i++){
            map[nums[i]] = i;
        }

        for (int i=0; i<nums.size(); i++){
            if (map.find(target-nums[i]) !=  map.end() && map[target-nums[i]] != i){
                ans[0]=i;
                ans[1]=map[target-nums[i]];
                return ans;
            }
        }

        return ans;
    }
};
