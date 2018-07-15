
# problem 151 : MinStack

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/151.MinStack/problem.png"/>

## C++ Solution

```c++

class MinStack
{
  public:
    int min = 2147483647; 
    stack<int> s;
    MinStack()
    {
    }

    void push(int x)
    {
        if (x <= min)
            s.push(min);
            min = x;
        s.push(x);
    }

    void pop()
    {
        auto top = s.top();
        s.pop(); 
        if (top == min)
            min = s.top();
            s.pop();
    }

    int top()
    {
        return s.top();
    }

    int getMin()
    {
        return min;
    }
};

```

## C# Solution

```csharp
 
    public class MinStack
    {
        int min = int.MaxValue;
        Stack<int> arr = new Stack<int>();
        public MinStack()
        {

        }

        public void Push(int x)
        {
            if (x <= min)
            {
                arr.Push(min);
                min = x;
            }
            arr.Push(x);
        }

        public void Pop()
        {
            var x = arr.Pop();
            if (x == min)
                min = arr.Pop();
        }

        public int Top()
        {
            return arr.Peek();
        }

        public int GetMin()
        {
            return min;
        }
    }

```

## Java Solution

```java

class MinStack {

    int min = Integer.MAX_VALUE;
    LinkedList<Integer> arr = new LinkedList<>();
    public MinStack() {
        
    }
    
    public void push(int x) {
        if (x < min) {
            arr.add(min);
            min = x;
        }
        arr.add(x);
    }
    
    public void pop() {
        int element = arr.getLast();
        arr.removeLast();
        if (element == min) {
            min = arr.getLast();
            arr.removeLast();
        }
    }
    
    public int top() {
        return arr.getLast();
    }
    
    public int getMin() {
        return min;
    }
}

```

## Python Solution

```python

class MinStack:
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.arr = []
        self.__sort = []

    def push(self, x):
        """
        :type x: int
        :rtype: void
        """
        self.arr.append(x)
        self.__sort.append(x)
        self.__sort.sort()

    def pop(self):
        """
        :rtype: void
        """
        self.__sort.remove(self.arr[len(self.arr) - 1])
        self.arr.pop(len(self.arr) - 1)
        
    def top(self):
        """
        :rtype: int
        """
        return self.arr[len(self.arr) - 1]

    def getMin(self):
        """
        :rtype: int
        """
        return self.__sort[0]

```


