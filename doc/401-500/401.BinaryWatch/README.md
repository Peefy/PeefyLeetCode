
# problem 401 : BinaryWatch

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/401.BinaryWatch/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<string> readBinaryWatch(int num) {//bitset STL模板
        vector<string> times;
        for (int i = 0; i < 12; i++) {
            bitset<4> h(i);//4位的二进制数
            for (int j = 0; j < 60; j++) {
                bitset<6> m(j);//6位的二进制数
                if (h.count() + m.count() == num)//h.count()函数判断h中1的个数
                    times.push_back(to_string(i) + (j < 10? ":0": ":") + to_string(j));
            }
        }
        return times;
    }
};

```

## C# Solution

```csharp

    public class Solution {
        public static int[] time = new int[] { 8, 4, 2, 1, 32, 16, 8, 4, 2, 1 };
        public static int n = 0;
        public IList<string> ReadBinaryWatch(int num) {
            List<String> res = new List<String> ();
            bool[] temp = new bool[10];
            n = num;
            dfs (res, temp, 0, 0);
            return res;
        }
        private static void dfs (List<String> res, bool[] temp, int count, int p) {
            if (count == n) {
                String str = getBinaryValue (temp);
                if (!"".Equals (str))
                    res.Add (str);
                return;
            } else {
                while (p < 10) {
                    temp[p] = true;
                    dfs (res, temp, count + 1, p + 1);
                    temp[p] = false;
                    p++;
                }
            }
        }
        private static String getBinaryValue (bool[] temp) {
            int h = 0;
            int m = 0;
            for (int i = 0; i < 4; i++)
                if (temp[i])
                    h += time[i];
            for (int i = 4; i < 10; i++)
                if (temp[i])
                    m += time[i];
            if (h > 11 || m > 59)
                return "";
            if (m < 10)
                return "" + h + ":" + "0" + m;
            return "" + h + ":" + m;

        }
    }

```

## Java Solution

```java

class Solution {
    public int bit1count(String s){
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '1')
                ++count;
        }
        return count;
    }

    public List<String> readBinaryWatch(int num) {
        LinkedList<String> times = new LinkedList<>();
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 60; j++) {
                int h_count = bit1count(Integer.toBinaryString(i));
                int m_count = bit1count(Integer.toBinaryString(j));
                if (h_count + m_count == num)
                    times.add(String.format("%d:%02d", i, j));
            }
        }
        return times;
    }
}

```

## Python Solution

```python

class Solution:
    def readBinaryWatch(self, num):
        """
        :type num: int
        :rtype: List[str]
        """
        times = []
        for i in range(12):
            for j in range(60):
                if bin(i).count('1') + bin(j).count('1') == num:         
                    times.append('{:d}:{:02d}'.format(i, j))
        return times

```





