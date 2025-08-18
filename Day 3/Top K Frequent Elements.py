class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        result = []
        freq = Counter(nums)
        for i,count in freq.most_common(k):
            result.append(i)
        return result
