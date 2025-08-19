class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() -1 , best = 0,width, h, area;
        while (left < right){
            width = right - left;
            if (height[left] < height[right]){
                h = height[left];
            }else{
                h = height[right];
            }
            area = width *h;
            if (area > best){
                best = area;
            }
            if(height[left] < height[right]){
                left +=1;
            }else{
                right -=1;
            }
        }
        return best;
    }
};
