class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start= 0, end = nums.size()-1;
        while (start < end){
            if (nums[start] == 0){
                nums.push_back(nums[start]);
                nums.erase(nums.begin() + start);
                end--;
            }else{
                start++;
            }
        }
    }
};
