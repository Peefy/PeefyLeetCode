
# Problem 60 : PermutationSequence

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/60.PermutationSequence/problem.png"/>

## C++ Solution

```c++

class Solution
{
public:
    set<int> usedSet; 
    int iFinalResult=0;
    int fac(int n)
    {
        if (n < 0 || n == 1)
        {
            return n;
        }
        int result = 1;
        for (int i = n; i >= 1; i--)
        {

            result = result * i;
            //cout<<"i:"<<i<<" result:"<<result<<endl;
        }
        return result;
    }

    string getPermutation(int n, int k)
    {
        int iCurPosFac;
        int iCurPosResult = k - 1;
        int iCurPosRemain;
        for (int i = n; i >= 1; i--)
        {
            //根据康拓展开逆运算进行计算
            iCurPosFac = fac(i - 1);
            //cout<<"iCurPosResult:"<<iCurPosResult<<" iCurPosFac:"<<iCurPosFac<<endl;
            //先取余再取结果，否则iCurPosResult变了会导致计算错误
            iCurPosRemain = iCurPosResult % (iCurPosFac);
            iCurPosResult = iCurPosResult / (iCurPosFac);

            //cout<<"i-1 :"<<i-1<<" iCurPosFac:"<<iCurPosFac<<" iCurPosResult:"<<iCurPosResult<<" iCurPosRemain:"<<iCurPosRemain<<endl;

            //根据计算结果，寻找符合条件的对应位数字
            int iCurPosResultAdjust;
            int iLoop = 0;
            for (int j = 1; j <= n; j++)
            {
                if (usedSet.find(j) == usedSet.end())
                {
                    iLoop++;
                }
                if (iLoop == (iCurPosResult + 1))
                {
                    iCurPosResultAdjust = j;
                    break;
                }
            }

            //debug
            //cout<<"iCurPosResultAdjust:"<<iCurPosResultAdjust<<endl;
            //记录结果，用于最终的返回
            iFinalResult = iFinalResult + (iCurPosResultAdjust * pow(10, i - 1));

            //更新进行下一轮计算(最后做)
            usedSet.insert(iCurPosResultAdjust);
            iCurPosResult = iCurPosRemain;
        }
        return to_string(iFinalResult);
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int Factorial(int n){
        if(n == 0 || n == 1){
            return 1;
        }else{
            return n * Factorial(n-1);
        }
    }
    public string GetPermutation(int n, int k) {
        List<int> nums = new List<int>();
        for(int i = 0; i < n; i++){
            nums.Add(i + 1);
        }

        int fac_i = Factorial(n-1);
        k--;
        StringBuilder ret = new StringBuilder();
        for(int i = 1; i < n; i++){
            int index = k / fac_i;
            ret.Append(nums[index]);
            k = k % fac_i;
            nums.RemoveAt(index);
            fac_i = fac_i / (n-i);
        }
        ret.Append(nums[0]);
        return ret.ToString();
    }
}

```

## Java Solution

```java

class Solution {

    HashSet<Integer> usedSet = new HashSet<>(); 
    int iFinalResult = 0;

    public int fac(int n){
        if (n < 0 || n == 1){
            return n;
        }
        int result = 1;
        for (int i = n; i >= 1; i--){
            result = result * i;
        }
        return result;
    }

    public String getPermutation(int n, int k) {
        int iCurPosFac;
        int iCurPosResult = k - 1;
        int iCurPosRemain;
        for (int i = n; i >= 1; i--){
            iCurPosFac = fac(i - 1);
            iCurPosRemain = iCurPosResult % (iCurPosFac);
            iCurPosResult = iCurPosResult / (iCurPosFac);
            int iCurPosResultAdjust = 0;
            int iLoop = 0;
            for (int j = 1; j <= n; j++)
            {
                if (usedSet.contains(j) == false){
                    iLoop++;
                }
                if (iLoop == (iCurPosResult + 1)){
                    iCurPosResultAdjust = j;
                    break;
                }
            }
            iFinalResult = (int)(iFinalResult + (iCurPosResultAdjust * Math.pow(10, i - 1)));
            usedSet.add(iCurPosResultAdjust);
            iCurPosResult = iCurPosRemain;
        }
        return String.valueOf(iFinalResult);
    }
}

```

## Python Solution

```python

import math

class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        num = [str(i) for i in range(1, n + 1)]
        res = ""
        n -= 1
        while n > -1:
            t = math.factorial(n)
            loc = math.ceil(k / t) - 1
            res += num[loc]
            num.pop(loc)
            k %= t
            n -= 1
        return res

```


