class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height)-1
        best = 0
        while left < right:
            width = right - left
            h = height[left] if height[left] < height[right] else height[right]

            area = width*h
            if area > best:
                best = area

            if height[left] < height[right]:
                left +=1
            else:
                right -=1
        return best
