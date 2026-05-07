class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> map;
        
        for (int num : nums){
            if (map.find(num) == map.end()){
                map[num] = true;
            }
            else return true;
        }

        return false;
    }
};