class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = (int)height.size() - 1;
        int left_max = 0, right_max = 0;
        int water = 0;
        while ( l <= r){
            if (height[l] <= height[r]){
                if(height[l]>= left_max){
                    left_max = height[l];
                }else{
                    water += left_max - height[l];
                }
                l +=1;
            }else{
                if(height[r] >= right_max){
                    right_max = height[r];
                }else{
                    water += right_max - height[r];
                }
                r -= 1;
            }
        }
        return water;
        }
};
