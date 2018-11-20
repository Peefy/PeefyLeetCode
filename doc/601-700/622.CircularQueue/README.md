
# problem 622 : Circular Queue

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/622.CircularQueue/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class MyCircularQueue{
  private:
    int head;
    int tail;
    int count;
    int length;
    int* data;
  public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k){
        head = k - 1;
        tail = k - 1;
        count = 0;
        length = k;
        data = new int[k];
    }

    ~MyCircularQueue(){
        delete[] data;
    }

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value){
        if (isFull())
            return false;
        data[tail] = value;
        tail = (tail + 1) % length;
        count++;
        return true;
    }

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue(){
        if (isEmpty())
            return false;
        head = (head + 1) % length;
        count--;
        return true;
    }

    /** Get the front item from the queue. */
    int Front(){
        if (isEmpty())
            return -1;
        return data[head];
    }

    /** Get the last item from the queue. */
    int Rear(){
        if (isEmpty())
            return -1;
        return tail == 0 ? data[length - 1] : data[(tail - 1) % length];
    }

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty(){
        return count == 0;
    }

    /** Checks whether the circular queue is full or not. */
    bool isFull(){
        return count == length;
    }
};

```

## C# Solution

```csharp

public class MyCircularQueue {
    
    private int[] data;
    private int pHead;
    private int pTail;
    private int size;

    /** Initialize your data structure here. Set the size of the queue to be k. */
    public MyCircularQueue(int k) {
        data = new int[k];
        pHead = 0;
        pTail = k - 1;
        size = 0;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    public bool EnQueue(int value) {
        if (IsFull()) return false;
        data[nextTail()] = value;
        size++;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    public bool DeQueue() {
        if (IsEmpty()) return false;
        nextHead();
        size--;
        return true;
    }
    
    /** Get the front item from the queue. */
    public int Front() {
        if (IsEmpty()) return -1;
        return data[pHead];
    }
    
    /** Get the last item from the queue. */
    public int Rear() {
        if (IsEmpty()) return -1;
        return data[pTail];
    }
    
    /** Checks whether the circular queue is empty or not. */
    public bool IsEmpty() {
        return size == 0;
    }
    
    /** Checks whether the circular queue is full or not. */
    public bool IsFull() {
        return size == data.Length;
    }
    
    private int nextTail() {
        if (pTail == data.Length - 1) {
            pTail = 0;
        } else {
            pTail++;
        }
        return pTail;
    }
    
    private int nextHead() {
        if (pHead == data.Length - 1) {
            pHead = 0;
        } else {
            pHead++;
        }
        return pHead;
    }
}

```

## Java Solution

```java

class MyCircularQueue {

    private LinkedList<Integer> list;
    private int size;

    /** Initialize your data structure here. Set the size of the queue to be k. */
    public MyCircularQueue(int k) {
        size = k;
        list = new LinkedList<>();
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    public boolean enQueue(int value) {
        if (list.size() >= size) 
            return false;
        list.add(value);
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    public boolean deQueue() {
        if (list.size() <= 0) 
            return false;
        list.removeFirst();
        return true;
    }
    
    /** Get the front item from the queue. */
    public int Front() {
        if (list.size() <= 0) 
            return -1;
        return list.getFirst();
    }
    
    /** Get the last item from the queue. */
    public int Rear() {
        if (list.size() <= 0) 
            return -1;
        return list.getLast();
    }
    
    /** Checks whether the circular queue is empty or not. */
    public boolean isEmpty() {
        return list.size() <= 0;
    }
    
    /** Checks whether the circular queue is full or not. */
    public boolean isFull() {
        return list.size() >= size;
    }
}

```

## Python Solution

```python

class MyCircularQueue:

    def __init__(self, k):
        """
        Initialize your data structure here. Set the size of the queue to be k.
        :type k: int
        """
        self.k = k
        self.queue = []

    def enQueue(self, value):
        """
        Insert an element into the circular queue. Return true if the operation is successful.
        :type value: int
        :rtype: bool
        """
        if len(self.queue) >= self.k:
            return False
        self.queue.append(value)
        return True

    def deQueue(self):
        """
        Delete an element from the circular queue. Return true if the operation is successful.
        :rtype: bool
        """
        if len(self.queue) <= 0:
            return False
        self.queue.pop(0)
        return True

    def Front(self):
        """
        Get the front item from the queue.
        :rtype: int
        """
        if len(self.queue) <= 0:
            return -1
        return self.queue[0]

    def Rear(self):
        """
        Get the last item from the queue.
        :rtype: int
        """
        if len(self.queue) <= 0:
            return -1
        return self.queue[-1]

    def isEmpty(self):
        """
        Checks whether the circular queue is empty or not.
        :rtype: bool
        """
        return len(self.queue) <= 0
        
    def isFull(self):
        """
        Checks whether the circular queue is full or not.
        :rtype: bool
        """
        return len(self.queue) >= self.k

```





