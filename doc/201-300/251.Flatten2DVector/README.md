
# problem 251 : Flatten2DVector

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/251.Flatten2DVector/problem.png"/>

## C++ Solution

```c++

class Vector2D {
public:
    Vector2D(vector<vector<int>>& vec2d){
        if (vec2d.size() == 0)
            return;
        it1 = vec2d.begin();
        itEnd = vec2d.end();
        it2 = (*it1).begin();
    }

    int next() {
        return *it2++;
    }

    bool hasNext() {
        while (it1 != itEnd && it2 == (*it1).end()) {
            it1++;
            it2 = (*it1).begin();
        }
        return it1 != itEnd;
    }
private:
    vector<vector<int>>::iterator it1, itEnd;
    vector<int>::iterator it2; 
};

```

## C# Solution

```csharp

public class Vector2D
{
    List<List<int>> listOfList;
    int listIndex;
    int elemIndex;
    public Vector2D(List<List<int>> vec2d)
    {
        listOfList = vec2d;
        listIndex = 0;
        elemIndex = 0;
    }

    public int Next()
    {
        return listOfList[listIndex][elemIndex++];
    }

    public bool HasNext()
    {
        while (listIndex < listOfList.Count)
        {
            if (elemIndex < listOfList[listIndex].Count)
            {
                return true;
            }
            else
            {
                listIndex++;
                elemIndex = 0;
            }
        }
        return false;
    }
}

```

## Java Solution

```java

public class Vector2D {
    List<List<Integer>> listOfList;
    int listIndex;
    int elemIndex;
    public Vector2D(List<List<Integer>> vec2d) {
        listOfList = vec2d;
        listIndex = 0;
        elemIndex = 0;
    }

    public int next() {
        return listOfList.get(listIndex).get(elemIndex++);
    }

    public boolean hasNext() {
        while(listIndex < listOfList.size()){
            if(elemIndex < listOfList.get(listIndex).size()){
                return true;
            }else{
                listIndex++;
                elemIndex = 0;
            }
        }
        return false;
    }
}

```

## Python Solution

```python

class Vector2D:
    def __init__(self, vec2d):
        self.listOfList = vec2d
        self.listIndex = 0
        self.elemIndex = 0


    def next(self):
        val = self.listOfList[self.listIndex][self.elemIndex]
        self.elemIndex += 1
        return val


    def hasNext(self):
        while self.listIndex < len(self.listOfList):
            if self.elemIndex < len(self.listOfList[self.listIndex]:
                return True
            else:
                self.listIndex += 1
                self.elemIndex = 0
            return False     

```




