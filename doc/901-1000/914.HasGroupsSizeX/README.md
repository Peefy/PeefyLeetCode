
# problem 914 : HasGroupsSizeX

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/914.HasGroupsSizeX/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> dic;
        int minval = 10000;
        for (int d : deck){
            dic[d]++;
        }
        for (auto kv : dic){
            minval = min(minval, kv.second);
        }
        for (int i = 2; i <= minval; ++i){
            bool flag = true;
            for (auto kv : dic){
                if (kv.second % i != 0){
                    flag = false;
                    continue;
                }
            }
            if (flag == true)
                return true;
        }
        return false;
    }
};

```

## C# Solution

```csharp

public class Solution {
    int gcd(int a, int b)
	{
		if (a % b == 0)
			return b;
		return gcd(b, a % b);
	}

    public bool HasGroupsSizeX(int[] deck) {
        Dictionary<int, int> dic = new Dictionary<int, int>();
        foreach (int d in deck){
            if (dic.ContainsKey(d) == false)
                dic.Add(d, 0);
            else
                dic[d]++;
        }
        var arr = dic.Values.ToArray();
        var min = arr[0];
        if (min < 2)
			return false;
        for (int i = 1; i < arr.Length; ++i)
		{
			min = gcd(min, arr[i]);
			if (min < 2)
				return false;
		}
		return true;
    }
}

```

## Java Solution

```java

class Solution {
    private int gcd(int a, int b){
		if (a % b == 0)
			return b;
		return gcd(b, a % b);
    }
    
    public boolean hasGroupsSizeX(int[] deck) {
        HashMap<Integer, Integer> mi = new HashMap<>();
        int len = deck.length;
        for (int i = 0; i < len; i++) {
            mi.put(deck[i], mi.getOrDefault(deck[i], 0) + 1);
        }
        Iterator<Integer> it = mi.values().iterator();
        int min = it.next();
        if (min < 2)
            return false;
        while (it.hasNext()){
            min = gcd(min, it.next());
            if (min < 2)
                return false;
        }
        return true;
    }
}

```

## Python Solution

```python


from collections import Counter

class Solution:
    def hasGroupsSizeX(self, deck):
        """
        :type deck: List[int]
        :rtype: bool
        """
        if len(deck) < 2:
            return False
        counter = Counter(deck)
        for x in range(2, min(counter.values()) + 1):
            if all(map(lambda v : v % x == 0 ,counter.values())):
                return True
        return False

```





