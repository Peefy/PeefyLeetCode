
# problem 788 : RotatedDigits

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/788.RotatedDigits/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution{
  public:
    int rotatedDigits(int N){
        int res = 0;
        int* dp = new int[N + 1];
        memset(dp, 0, sizeof(int) * (N + 1));
        for (int i = 0; i <= N; i++){
            if (i < 10){
                if (i == 0 || i == 1 || i == 8){
                    dp[i] = 1;
                }
                else if (i == 2 || i == 5 || i == 6 || i == 9){
                    dp[i] = 2;
                    ++res;
                }
            }
            else{
                int a = dp[i / 10], b = dp[i % 10];
                if (a == 1 && b == 1){
                    dp[i] = 1;
                }
                else if (a >= 1 && b >= 1){
                    dp[i] = 2;
                    ++res;
                }
            }
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    int[] change = {0 , 0 , 1 , -1 , -1 , 1 , 1 , -1 , 0 , 1};
    
    bool ifGood(int n){
        bool result = false;
        while(n != 0){
            if(change[n%10] == -1)
                return false;
            else if(change[n%10] == 1){
                result = true;
            }
            n /= 10;
        }
        return result;
    }
    public int RotatedDigits(int N) {
        int cnt = 0;
        for(int i = 1 ; i <= N ; ++i){
           if(ifGood(i))
               ++cnt;
        }
        return cnt;
    }
}

```

## Java Solution

```java

class Solution {
    public int rotatedDigits(int N) {
        int res = 0;
        for (int num = 1;num <= N;++num){
            String numstr = String.valueOf(num);
            if ((numstr.contains("3") == false && numstr.contains("4") == false && numstr.contains("7") == false) && 
            (numstr.contains("2") == true || numstr.contains("5") == true || numstr.contains("6") == true || numstr.contains("9") == true)) {
                res++;
            }
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def rotatedDigits(self, N):
        """
        :type N: int
        :rtype: int
        """
        res = 0
        for num in range(N+1):
            s_num =  str(num)
            if ('3' not in s_num and '4' not in s_num and  '7' not in s_num) and ('2' in s_num or '5' in s_num or '6' in s_num or '9' in s_num):
                res += 1
        return res

```





