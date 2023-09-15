class MedianFinder {
public:
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int>> minheap;
    void addNum(int num) {
        if(maxheap.empty() || num<maxheap.top()){
            maxheap.push(num);
        }
        else{
            minheap.push(num);
        }
        if(maxheap.size()>minheap.size()+1){
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        else if(maxheap.size()+1<minheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }

    }
    
    double findMedian() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(maxheap.size()==minheap.size()){
            return (double)(maxheap.top()+ minheap.top())/2.0;
        }
        else if(maxheap.size()>minheap.size()){
            return (double)maxheap.top();
        }
        else{
            return (double)minheap.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
