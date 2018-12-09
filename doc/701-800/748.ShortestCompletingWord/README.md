
# problem 748 : ShortestCompletingWord

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/748.ShortestCompletingWord/problem.png"/>

> 统计字符串字母个数的4种方法
> * 26 * 数组 
> * 素数计数法 
> * HashTable 
> * python Counter 


## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    long primes[27] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103};
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        long pro = getProduct(licensePlate);
        string res = "aaaaaaaaaaaaaaaaaaaaaaaaa";
        for (string word : words){
            if(word.length() < res.length() && (getProduct(word) % pro == 0)){
                res = word;
            }
        }
        return res;
    }

    long getProduct(string str){
        long res = 1L;
        for (char ch : str){
            int index = ch - 'a';

            if(index >=0 && index <= 25){
                res *= primes[index];
            }
            else if(index >= -32 && index <= -7){
                res *= primes[32 + index];
            }
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string ShortestCompletingWord(string licensePlate, string[] words) {
        licensePlate = licensePlate.ToLower();
        int[] cnt = new int[26];
        foreach (char c in licensePlate){
            if(c >='a' && c <= 'z') cnt[c - 'a']++;
        }
        string ans = "";
        foreach (string w in words){
            int[] cnt2 = new int[26];
            foreach (char c in w){
                if(c>='a' && c<='z') cnt2[c - 'a']++;
            }
            int p = 0;
            while(p < 26){
                if(cnt2[p] < cnt[p]) break;
                p++;
            }
            if(p == 26){
                if(ans == "" || ans.Length > w.Length) 
                    ans = w;
            }
        }
        return ans;
    }
}

```

## Java Solution

```java



```

## Python Solution

```python



```





