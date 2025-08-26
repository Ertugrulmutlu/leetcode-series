class MedianFinder {
private:
    priority_queue<int> low;
    priority_queue<int, vector<int>,greater<int>> high;
public:
    MedianFinder() {}

    void addNum(int num) {
        low.push(num);
        if (!high.empty() && low.top() > high.top()){
            int v = low.top(); low.pop();
            high.push(v);
        }
        if (low.size() > high.size()+1){
            int v = low.top(); low.pop();
            high.push(v);
        }else if (high.size() > low.size()){
            int v = high.top(); high.pop();
            low.push(v);
        }
    }

    double findMedian() {
        if (low.size() > high.size()){
            return (double)low.top();
        }
        return ((long long)low.top() + (long long)high.top()) / 2.0;
    }
};

/**
  * Your MedianFinder object will be instantiated and called as such:
  * MedianFinder* obj = new MedianFinder();
  * obj->addNum(num);
  * double param_2 = obj->findMedian();
 */
