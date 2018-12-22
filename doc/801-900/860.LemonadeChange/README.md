
# problem 860 : LemonadeChange

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/860.LemonadeChange/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int money5 = 0;
        int money10 = 0;
        for (auto bill : bills){
            if (bill == 5)
                money5 += 1;
            else if (bill == 10){
                if (money5 == 0)
                    return false;
                money5 -= 1;
                money10 += 1;
            }
            else{
                if (money5 >= 1 && money10 >= 1){
                    money5 -= 1;
                    money10 -= 1;
                }
                else if (money5 >= 3)
                    money5 -= 3;
                else
                    return false;
            }
        }
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool LemonadeChange(int[] bills) {
        int money5 = 0;
        int money10 = 0;
        foreach (var bill in bills){
            if (bill == 5)
                money5 += 1;
            else if (bill == 10){
                if (money5 == 0)
                    return false;
                money5 -= 1;
                money10 += 1;
            }
            else{
                if (money5 >= 1 && money10 >= 1){
                    money5 -= 1;
                    money10 -= 1;
                }
                else if (money5 >= 3)
                    money5 -= 3;
                else
                    return false;
            }
        }
        return true;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean lemonadeChange(int[] bills) {
        int money5 = 0;
        int money10 = 0;
        for (int bill : bills){
            if (bill == 5)
                money5 += 1;
            else if (bill == 10){
                if (money5 == 0)
                    return false;
                money5 -= 1;
                money10 += 1;
            }
            else{
                if (money5 >= 1 && money10 >= 1){
                    money5 -= 1;
                    money10 -= 1;
                }
                else if (money5 >= 3)
                    money5 -= 3;
                else
                    return false;
            }
        }
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def lemonadeChange(self, bills):
        """
        :type bills: List[int]
        :rtype: bool
        """
        money5 = 0
        money10 = 0
        for bill in bills:
            if bill == 5:
                money5 += 1
            elif bill == 10:
                if money5 == 0:
                    return False
                money5 -= 1
                money10 += 1
            elif bill == 20:
                if money5 >= 1 and money10 >= 1:
                    money5 -= 1
                    money10 -= 1
                elif money5 >= 3:
                    money5 -= 3
                else:
                    return False
        return True

```





