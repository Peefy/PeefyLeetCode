
# Problem 11 : ContainerWithMostWater

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/11.ContainerWithMostWater/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int water = 0;
        int area = 0;
        int mh = 0;
        for(int i = 0; i <= right; i++){
            if (height[i] > mh)
                mh = height[i];
        }     
        while (left != right){
            int distance = right - left;
            if (distance * mh < water)
                break;
            if (height[left] >= height[right]){
                area = height[right] * distance;
                right -= 1;
            }
            else{
                area = height[left] * distance;
                left += 1;
            }
            if (area > water)
                water = area;
        }
        return water;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int MaxArea(int[] height) {
        int left = 0;
        int right = height.Length - 1;
        int water = 0;
        int area = 0;
        int mh = 0;
        for(int i = 0; i <= right; i++){
            if (height[i] > mh)
                mh = height[i];
        }     
        while (left != right){
            int distance = right - left;
            if (distance * mh < water)
                break;
            if (height[left] >= height[right]){
                area = height[right] * distance;
                right -= 1;
            }
            else{
                area = height[left] * distance;
                left += 1;
            }
            if (area > water)
                water = area;
        }
        return water;
    }
}

```

## Java Solution

```java

class Solution {
    public int maxArea(int[] height) {
        int left = 0;
        int right = height.length - 1;
        int water = 0;
        int area = 0;
        int mh = 0;
        for(int i = 0; i <= right; i++){
            if (height[i] > mh)
                mh = height[i];
        }     
        while (left != right){
            int distance = right - left;
            if (distance * mh < water)
                break;
            if (height[left] >= height[right]){
                area = height[right] * distance;
                right -= 1;
            }
            else{
                area = height[left] * distance;
                left += 1;
            }
            if (area > water)
                water = area;
        }
        return water;
    }
}

```

## Python Solution

```python

class Solution:
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left = 0
        right = len(height) - 1
        most = 0
        while left < right:
            most = max(most, min(height[left], height[right]) * (right - left))
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return most

```


