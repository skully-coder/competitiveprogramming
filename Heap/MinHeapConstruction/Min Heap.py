# O(n + log(n)) time | O(1) space
class MinHeap:
    def __init__(self, array):
        self.heap = self._buildHeap(array)

    # O(n)
    def _buildHeap(self, array):
        firstParentIdx = (len(array) - 2) // 2
        for currentIdx in reversed(range(firstParentIdx + 1)):
            self._siftDown(currentIdx, len(array) - 1, array)
        return array

    # O(log(n))
    def _siftUp(self, currentIdx, heap):
        parentIdx = (currentIdx - 1) // 2
        while currentIdx > 0 and heap[parentIdx] > heap[currentIdx]:
            self._swap(parentIdx, currentIdx, heap)
            currentIdx = parentIdx
            parentIdx = (currentIdx - 1) // 2 

    # O(log(n))
    def _siftDown(self, currentIdx, endIdx, heap):
        childOneIdx = currentIdx * 2 + 1
        while childOneIdx <= endIdx:
            childTwoIdx = currentIdx * 2 + 2 if currentIdx * 2 + 2 <= endIdx else -1
            if childTwoIdx != -1 and heap[childOneIdx] > heap[childTwoIdx]:
                idxToSwap = childTwoIdx
            else:
                idxToSwap = childOneIdx
            if heap[currentIdx] > heap[idxToSwap]:
                self._swap(currentIdx, idxToSwap, heap)
                currentIdx = idxToSwap
                childOneIdx = currentIdx * 2 + 1
            else:
                break

    def peak(self):
        return self.heap[0]

    def insert(self, ele):
        self.heap.append(ele)
        self._siftUp(len(self.heap) - 1, self.heap)

    def remove(self):
        self._swap(0, len(self.heap) - 1, self.heap)
        value = self.heap.pop()
        self._siftDown(0, len(self.heap) - 1, self.heap)
        return value

    def _swap(self, i, j, heap):
        heap[i], heap[j] = heap[j], heap[i]

if __name__ == "__main__":
    minHeap = MinHeap([19, 3, 5, 23, 90, 34])
    print(minHeap.peak())
    minHeap.insert(1)
    print(minHeap.peak())
    minHeap.remove()
    minHeap.remove()
    print(minHeap.peak())