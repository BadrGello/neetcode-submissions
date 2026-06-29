class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;

        for (int num : nums){
            mp[num]++;
        }

        int maxNum = nums[0];
        int maxOcc = mp[nums[0]];
        for (auto p : mp){
            if (p.second > maxOcc){
                maxNum = p.first;
                maxOcc = p.second;
            }
        }

        return maxNum;
    }
};