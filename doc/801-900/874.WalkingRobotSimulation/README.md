
# problem 874 : WalkingRobotSimulation

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/874.WalkingRobotSimulation/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0;
        int y = 0;
        int xdelta = 0;
        int ydelta = 1;
        int dis = 0;
        set<pair<int, int> > s;
        for (auto obstacle : obstacles){
            s.insert(make_pair(obstacle[0], obstacle[1]));
        }
        for (auto command : commands){
            if (command == -2){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = -lastydelta;
                ydelta = lastxdelta;
            }
            else if (command == -1){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = lastydelta;
                ydelta = -lastxdelta;
            }
            else{
                for(size_t i = 0; i < command; i++){
                    x += xdelta;
                    y += ydelta;
                    if (s.find(make_pair(x, y)) != s.end()){
                        x -= xdelta;
                        y -= ydelta;
                    }
                    dis = max(dis, x * x + y * y);
                }
            }
        }
        return dis;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int RobotSim(int[] commands, int[][] obstacles) {
        int x = 0;
        int y = 0;
        int xdelta = 0;
        int ydelta = 1;
        int dis = 0;
        HashSet<KeyValuePair<int, int> > s = new HashSet<KeyValuePair<int, int>>();
        foreach (var obstacle in obstacles){
            s.Add(new KeyValuePair<int, int>(obstacle[0], obstacle[1])); 
        }
        foreach (int command in commands){
            if (command == -2){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = -lastydelta;
                ydelta = lastxdelta;
            }
            else if (command == -1){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = lastydelta;
                ydelta = -lastxdelta;
            }
            else{
                for(int i = 0; i < command; i++){
                    x += xdelta;
                    y += ydelta;
                    if (s.Contains(new KeyValuePair<int, int>(x, y)) == true){
                        x -= xdelta;
                        y -= ydelta;
                    }
                    dis = Math.Max(dis, x * x + y * y);
                }
            }
        }
        return dis;
    }
}

```

## Java Solution

```java


import javafx.util.Pair;

class Solution {
    public int robotSim(int[] commands, int[][] obstacles) {
        int x = 0;
        int y = 0;
        int xdelta = 0;
        int ydelta = 1;
        int dis = 0;
        HashSet<Pair<Integer, Integer>> s = new HashSet<>();
        for (int[] obstacle : obstacles){
            s.add(new Pair<Integer,Integer>(obstacle[0], obstacle[1]));
        }
        for (int command : commands){
            if (command == -2){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = -lastydelta;
                ydelta = lastxdelta;
            }
            else if (command == -1){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = lastydelta;
                ydelta = -lastxdelta;
            }
            else{
                for(int i = 0; i < command; i++){
                    x += xdelta;
                    y += ydelta;
                    if (s.contains(new Pair<Integer,Integer>(x, y)) == true){
                        x -= xdelta;
                        y -= ydelta;
                    }
                    dis = Math.max(dis, x * x + y * y);
                }
            }
        }
        return dis;
    }
}

```

## Python Solution

```python

class Solution:
    def robotSim(self, commands, obstacles):
        """
        :type commands: List[int]
        :type obstacles: List[List[int]]
        :rtype: int
        """
        x = 0
        y = 0
        xdelta = 0
        ydelta = 1
        dis = 0
        s = set()
        for obstacle in obstacles:
            s.add((obstacle[0], obstacle[1]))
        for command in commands:
            if command == -2:
                xdelta, ydelta = -ydelta, xdelta
            elif command == -1:
                xdelta, ydelta = ydelta, -xdelta
            else:
                for i in range(command):
                    x += xdelta
                    y += ydelta
                    if (x, y) in s:
                        x -= xdelta
                        y -= ydelta
                    dis = max(dis, x * x + y * y)
        return dis

```





