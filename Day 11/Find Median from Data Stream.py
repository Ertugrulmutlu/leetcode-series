class MedianFinder:

    def __init__(self):
        self.low = []
        heapq.heapify(self.low)
        self.high = []
        heapq.heapify(self.high)

    def addNum(self, num: int) -> None:
        heapq.heappush(self.low, -num)
        if self.high and (-self.low[0] > self.high[0]):
            heapq.heappush(self.high,-heapq.heappop(self.low))

        if len(self.low) > len(self.high) +1:
            heapq.heappush(self.high, -heapq.heappop(self.low))
        elif len(self.high) > len(self.low):
                heapq.heappush(self.low, -heapq.heappop(self.high))

    def findMedian(self) -> float:

        if len(self.low) > len(self.high):
            return float(-self.low[0])
        return (-self.low[0] + self.high[0]) / 2.0


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()
