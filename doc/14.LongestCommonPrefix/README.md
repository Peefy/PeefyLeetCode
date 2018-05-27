
# problem 14: Longest Common Prefix

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/14.LongestCommonPrefix/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    bool issame(vector<string> &strs, int index)
    {

        try
        {
            auto count = 0;
            for (auto i = 0; i < this->count(strs) - 1; ++i)
            {
                if (strs[i][index] == strs[i + 1][index])
                {
                    count += 1;
                }
            }
            if (count == this->count(strs) - 1)
            {
                return true;
            }
            return false;
        }
        catch (const std::exception &e)
        {
            return false;
        }
    }

    int count(vector<string> &strs){
        auto count = 0;
        for(auto str : strs)
        {
            count++;
        }
        return count;
    }

    string longestCommonPrefix(vector<string> &strs)
    {
        string return_str = "";
        auto min_str_len = 2147483647;
        auto n = this->count(strs);
        for (auto i = 0;i < n;++i)
        {
            auto now_str_len = strs[i].length();
            if (now_str_len < min_str_len)
            {
                min_str_len = now_str_len;
            }
        }
        for (auto i = 0; i < min_str_len; ++i)
        {
            if (this->issame(strs, i) == true)
            {
                return_str += strs[0][i];
            }
            else
            {
                break;
            }
        }
        return return_str;
    }
};

```

## C# Solution

```csharp
 public class Solution
    {

        public bool isSame(string[] strs, int index)
        {
            try
            {
                int count = 0;
                for (int i = 0; i < strs.Length - 1; ++i)
                {
                    if (strs[i][index] == strs[i + 1][index])
                    {
                        count += 1;
                    }
                }
                if (count == strs.Length - 1)
                {
                    return true;
                }
                return false;
            }
            catch
            {
                return false;
            }
        }

        public string LongestCommonPrefix(string[] strs)
        {
            var return_str = "";
            int min_str_len = int.MaxValue;
            int n = strs.Length;
            for (int i = 0; i < n; ++i)
            {
                int now_str_len = strs[i].Length;
                if (now_str_len <= min_str_len)
                {
                    min_str_len = now_str_len;
                }
            }
            for (int i = 0; i < min_str_len; ++i)
            {
                if (this.isSame(strs, i) == true)
                {
                    return_str += strs[0][i];
                }
                else
                {
                    break;
                }
            }
            return return_str;
        }

    }

```

## Java Solution

```java

public class Solution {

    public boolean isSame(String[] strs, int index){
        try {
            int count = 0;
            for(int i = 0;i < strs.length - 1;++i){
                if(strs[i].charAt(index) == strs[i + 1].charAt(index)){
                    count += 1;
                }
            }
            if(count == strs.length - 1){
                return true;
            }         
            return false;
        } catch (Exception e) {
            return false;
        }
    }

    public String longestCommonPrefix(String[] strs) {
        String return_str = "";
        int min_str_len = Integer.MAX_VALUE;
        int n = strs.length;
        for(int i = 0;i < n; ++i){
            int now_str_len = strs[i].length();
            if(now_str_len <= min_str_len){
                min_str_len = now_str_len;
            }               
        }
        for(int i = 0;i < min_str_len; ++i){
            if(this.isSame(strs, i) == true){
                return_str += strs[0].charAt(i);
            }
            else{
                break;
            }
        }
        return return_str;
    }
}

```

## Python Solution

```python

class Solution:
    def is_same(self, strs, index):
        try:
            count = 0
            for i in range(len(strs) - 1):
                if strs[i][index] == strs[i + 1][index]:
                    count += 1
            if count == len(strs) - 1:
                return True
            return False
        except Exception as err:
            return False
          
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        return_str = ""
        min_str_len = 4000000000
        n = len(strs)
        for i in range(n):
            now_str = strs[i]
            now_str_len = len(now_str)
            if now_str_len <= min_str_len:
                min_str_len = now_str_len
        for i in range(min_str_len):
            if self.is_same(strs, i) == True:
                return_str = return_str + str(strs[0][i])
            else:
                break
        return return_str

```


