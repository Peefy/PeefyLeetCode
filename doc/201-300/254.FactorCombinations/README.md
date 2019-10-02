
# problem 254 : FactorCombinations

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/254.FactorCombinations/problem.png"/>

## C++ Solution

```c++

class Solution {
private:
    void find(int from, int n, vector<int> & factors, int len, vector<vector<int> > & results) {
        for(int i = from; i * i <= n; i++) {
            if (n % i == 0) {
                factors[len] = i;
                find(i, n/i, factors, len+1, results);
            }
        }
        if (len > 0) {
            factors[len] = n;
            vector<int> f(len + 1, 0);
            for(int i = 0; i <= len; i++) 
                f[i] = factors[i];
            results.push_back(f);
        }
    }
public:
    vector<vector<int> > getFactors(int n) {
        int p = 0;
        for(int i = 1; i <= n; p++, i *= 2);
        vector<vector<int> > results;
        vector<int> factors(p, 0);
        find(2, n, factors, 0, results);
        return results;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        private void find(int from, int n, int[] factors, int len, List<List<int>> results)
        {
            for (int i = from; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    factors[len] = i;
                    find(i, n / i, factors, len + 1, results);
                }
            }
            if (len > 0)
            {
                factors[len] = n;
                int[] f = new int[len + 1];
                for (int i = 0; i <= len; i++) f[i] = factors[i];
                results.Add(f.ToList());
            }
        }
        public List<List<int>> GetFactors(int n)
        {
            int p = 0;
            for (int i = 1; i <= n; p++, i *= 2) ;
            List<List<int>> results = new List<List<int>>();
            find(2, n, new int[p], 0, results);
            return results;
        }
    }

```

## Java Solution

```java

public class Solution {
    private void find(int from, int n, int[] factors, int len, List<List<Integer>> results) {
        for (int i = from; i * i <= n; i++) {
            if (n % i == 0) {
                factors[len] = i;
                find(i, n / i, factors, len + 1, results);
            }
        }
        if (len > 0) {
            factors[len] = n;
            Integer[] f = new Integer[len + 1];
            for (int i = 0; i <= len; i++)
                f[i] = factors[i];
            results.add(Arrays.asList(f));
        }
    }

    public List<List<Integer>> getFactors(int n) {
        int p = 0;
        for (int i = 1; i <= n; p++, i *= 2)
            ;
        List<List<Integer>> results = new ArrayList<>();
        find(2, n, new int[p], 0, results);
        return results;
    }
}

```

## Python Solution

```python

class Solution:

    def find(self, fro, n, factors, len, results):
        i = fro
        while i * i <= n:
            if n % i == 0:
                factors[len] = i
                self.find(i, n // i, factors, len + 1, results)
            i += 1
        if len > 0:
            factors[len] = n
            f = [0] * (len + 1)
            for i in range(len):
                f[i] = factors[i]
            results.append(f)


    def getFactors(self, n):
        p = 0
        i = 1
        while i <= n:        
            i *= 2
            p += 1
        results = []
        self.find(2, n, [0] * p, results)
        return results     

```




