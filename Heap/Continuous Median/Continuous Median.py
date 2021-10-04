# O(log(n)) time | O(n) space
class ContiMedian:
    def __init__(self):
        self.lower = Heap(MAX_HEAP_FUNC, [])
        self.great = Heap(MIN_HEAP_FUNC, [])
        self.median = None

    def insert(self, value):
        if not self.lower.length or value < self.lower.peak():
            self.lower.insert(value)
        else:
            self.great.insert(value)
        self._rebalance()
        self._updateMedian()

    def _rebalance(self):
        if self.lower.length - self.great.length == 2:
            self.great.insert(self.lower.remove())
        elif self.great.length - self.lower.length == 2:
            self.lower.insert(self.great.remove())
    
    def _updateMedian(self):
        if self.lower.length == self.great.length:
            self.median = (self.lower.peak() + self.great.peak()) / 2
        elif self.lower.length > self.great.length:
            self.median = self.lower.peak()
        else:
            self.median = self.great.peak()

    def getMedian(self):
        return self.median

class Heap:
    def __init__(self, comparisonFunc, array):
        self.heap = array
        self.comparisonFunc = comparisonFunc
        self.length = len(self.heap)

    def _siftUp(self, curentIdx, heap):
        parentIdx = (curentIdx - 1) // 2
        while curentIdx > 0 and self.comparisonFunc(heap[curentIdx], heap[parentIdx]):
            self._swap(curentIdx, parentIdx, heap)
            curentIdx = parentIdx
            parentIdx = (curentIdx - 1) // 2

    def _siftDown(self, curentIdx, endIdx, heap):
        childOneIdx = curentIdx * 2 + 1
        while childOneIdx <= endIdx:
            childTwoIdx = curentIdx * 2 + 2 if curentIdx * 2 + 2 <= endIdx else -1
            if childTwoIdx != -1 and self.comparisonFunc(heap[childTwoIdx], heap[childOneIdx]):
                idxToSwap = childTwoIdx
            else:
                idxToSwap = childOneIdx
            if self.comparisonFunc(heap[idxToSwap], heap[curentIdx]):
                self._swap(curentIdx, idxToSwap, heap)
                curentIdx = idxToSwap
                childOneIdx = curentIdx * 2 + 1
            else:
                break
    
    def peak(self):
        return self.heap[0]

    def insert(self, value):
        self.heap.append(value)
        self.length += 1
        self._siftUp(self.length - 1, self.heap)

    def remove(self):
        value = self.heap.pop(0)
        self.length -= 1
        self._siftDown(0, self.length - 1, self.heap)
        return value

    def _swap(self, i, j, heap):
        heap[i], heap[j] = heap[j], heap[i]

def MIN_HEAP_FUNC(a, b):
    return a < b

def MAX_HEAP_FUNC(a, b):
    return a > b

if __name__ == "__main__":
    s = ContiMedian()
    array = [5, 10, 100, 200, 6, 13, 14]
    for num in array:
        s.insert(num)
        print(s.getMedian())