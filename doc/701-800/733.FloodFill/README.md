
# problem 733 : FloodFill

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/733.FloodFill/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    queue<pair<int,int>> site;
    int val = image[sr][sc];
    image[sr][sc] = newColor;
    site.push(pair<int,int>(sr,sc));
    while(!site.empty()){
        int x = site.front().first, y = site.front().second;
        site.pop();
        if(x > 0 && image[x-1][y] == val && image[x-1][y] != newColor){
            site.push(pair<int, int>(x - 1, y));
            image[x-1][y] = newColor;
        }
        if(x < image.size() - 1 && image[x+1][y] == val && image[x+1][y] != newColor){
            site.push(pair<int, int>(x + 1, y));
            image[x+1][y] = newColor;
        }
        if(y > 0 && image[x][y-1] == val && image[x][y-1] != newColor){
            site.push(pair<int, int>(x, y - 1));
            image[x][y-1] = newColor;
        }
        if(y < image[0].size() - 1 && image[x][y+1] == val && image[x][y+1] != newColor){
            site.push(pair<int, int>(x, y + 1));
            image[x][y+1] = newColor;
        }
    }
    return image;
}
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int[,] FloodFill(int[,] image, int sr, int sc, int newColor)
        {
            int oldColor = image[sr, sc];
            if (newColor == oldColor)
                return image;
            image[sr, sc] = newColor;
            if (sr - 1 >= 0 && image[sr - 1, sc] == oldColor)
            {
                image = FloodFill(image, sr - 1, sc, newColor);
            }
            if (sr + 1 < image.GetLength(0) && image[sr + 1, sc] == oldColor)
            {
                image = FloodFill(image, sr + 1, sc, newColor);
            }
            if (sc - 1 >= 0 && image[sr, sc - 1] == oldColor)
            {
                image = FloodFill(image, sr, sc - 1, newColor);
            }
            if (sc + 1 < image.GetLength(1) && image[sr, sc + 1] == oldColor)
            {
                image = FloodFill(image, sr, sc + 1, newColor);
            }
            return image;
        }
    }

```

## Java Solution

```java

class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        LinkedList<Integer[]> site = new LinkedList<>();
        int val = image[sr][sc];
        image[sr][sc] = newColor;
        site.add(new Integer[]{sr, sc});
        while(!site.isEmpty()){
            int x = site.getFirst()[0];
            int y = site.getFirst()[1];
            site.removeFirst();
            if(x > 0 && image[x - 1][y] == val && image[x - 1][y] != newColor){
                site.add(new Integer[]{x - 1, y});
                image[x - 1][y] = newColor;
            }
            if(x < image.length - 1 && image[x+1][y] == val && image[x+1][y] != newColor){
                site.add(new Integer[]{x + 1, y});
                image[x + 1][y] = newColor;
            }
            if(y > 0 && image[x][y-1] == val && image[x][y-1] != newColor){
                site.add(new Integer[]{x, y - 1});
                image[x][y - 1] = newColor;
            }
            if(y < image[0].length - 1 && image[x][y+1] == val && image[x][y+1] != newColor){
                site.add(new Integer[]{x, y + 1});
                image[x][y + 1] = newColor;
            }
        }
        return image;
    }
}

```

## Python Solution

```python

class Solution:
    def floodFill(self, image, sr, sc, newColor):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type newColor: int
        :rtype: List[List[int]]
        """
        init = image[sr][sc]
        if init == newColor:
            return image
        image[sr][sc] = newColor
        if sr > 0 and image[sr - 1][sc] == init:
            image = self.floodFill(image , sr - 1 , sc , newColor)
        if sr < len(image) - 1 and image[sr + 1][sc] == init:
            image = self.floodFill(image , sr + 1 , sc , newColor)
        if sc > 0 and image[sr][sc-1] == init:
            image = self.floodFill(image , sr , sc - 1 , newColor)
        if sc < len(image[0]) - 1 and image[sr][sc + 1] == init:
            image = self.floodFill(image , sr , sc + 1 , newColor)
        return image

```





