
# problem 447 : NumberOfBoomerangs

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/447.NumberOfBoomerangs/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int booms = 0;
        for (auto &p : points) {
        unordered_map<int, int> ctr(points.size());
        for (auto &q : points)
            booms += 2 * ctr[pow((p.first - q.first),2) + 
                pow((p.second - q.second),2)]++;
        }
        return booms;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int Distance(int[,] points, int index1, int index2){
        int dx = points[index1, 0] - points[index2, 0];
        int dy = points[index1, 1] - points[index2, 1];
        return dx * dx + dy * dy;
    }
    public int NumberOfBoomerangs(int[,] points) {
        int count = 0;
        int n = points.Length;
        Dictionary<int, int> hash = new Dictionary<int, int>();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                int dis = Distance(points, i, j);
                if (hash.ContainsKey(dis) == false) {
                    hash.Add(dis, 1);
                }
                else{
                    int val = hash[dis];
                    hash.Remove(dis);
                    hash.Add(dis, val + 1);
                }
                foreach (var c in hash.Values) {
                    count += c * (c - 1);
                }
                hash.Clear();
            }
        }
        return count;
    }
}

```

## Java Solution

```java

class Solution {
    public int getdistance(int[][] points, int index1, int index2){
        int dx = points[index1][0] - points[index2][0];
        int dy = points[index1][1] - points[index2][1];
        return dx * dx + dy * dy;
    }

    public int numberOfBoomerangs(int[][] points) {
        int count = 0;
        int n = points.length;
        HashMap<Integer, Integer> hash = new HashMap<>();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                int dis = getdistance(points, i, j);
                if (hash.containsKey(dis) == false) {
                    hash.put(dis, 1);
                }
                else{
                    int val = hash.get(dis);
                    hash.remove(dis);
                    hash.put(dis, val + 1);
                }
                for (Integer c : hash.values()) {
                    count += c * (c - 1);
                }
                hash.clear();
            }
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def gettwopointsdis(self, point1, point2):
        return (point1[0] - point2[0]) ** 2 + (point1[1] - point2[1]) ** 2

    def numberOfBoomerangs(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        count = 0
        n = len(points)
        d = {}
        for i in range(n):
            for j in range(n):
                if i == j:
                    continue
                dis = self.gettwopointsdis(points[i], points[j])
                if dis not in d.keys():
                    d[dis] = 1
                else:
                    d[dis] += 1
            for val in d.values():
                count += val * (val - 1)
            d.clear()
        return count

```





