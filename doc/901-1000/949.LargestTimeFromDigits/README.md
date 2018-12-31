
# problem 949 : LargestTimeFromDigits

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/949.LargestTimeFromDigits/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        char maxtime[6] = ""; 
        char timechar[6] = "";
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                for(int k = 0; k < 4; k++){
                    if (i == j || i == k || k == j)
                        continue;
                    int h = A[i] * 10 + A[j];
                    int m = A[k] * 10 + A[6 - i - j - k];
                    if (0 <= h && h < 24 && 0 <= m && m < 60){     
                        sprintf(timechar, "%02d:%02d", h, m);
                        if (strcmp(timechar, maxtime) > 0){
                            memcpy(maxtime, timechar, sizeof(char) * 6);
                        }
                    }
                }
            }
        }
        return string(maxtime);
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string LargestTimeFromDigits(int[] A) {
        string maxtime = ""; 
        string timechar = "";
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                for(int k = 0; k < 4; k++){
                    if (i == j || i == k || k == j)
                        continue;
                    int h = A[i] * 10 + A[j];
                    int m = A[k] * 10 + A[6 - i - j - k];
                    if (0 <= h && h < 24 && 0 <= m && m < 60){     
                        timechar = string.Format("{0:D2}:{1:D2}", h, m);
                        if (timechar.CompareTo(maxtime) > 0){
                            maxtime = timechar;
                        }
                    }
                }
            }
        }
        return maxtime;
    }
}

```

## Java Solution

```java

class Solution {
    public String largestTimeFromDigits(int[] A) {
        Arrays.sort(A); 
		int[] ind = {0, 1, 2, 3,
					 0, 1, 3, 2,
					 0, 2, 1, 3,
					 0, 2, 3, 1,
					 0, 3, 1, 2,
					 0, 3, 2, 1,
					 1, 0, 2, 3,
					 1, 0, 3, 2,
					 1, 2, 0, 3,
					 1, 2, 3, 0,
					 1, 3, 0, 2,
					 1, 3, 2, 0,
					 2, 0, 1, 3,
					 2, 0, 3, 1,
					 2, 1, 0, 3,
					 2, 1, 3, 0,
					 2, 3, 0, 1,
					 2, 3, 1, 0,
					 3, 0, 1, 2,
					 3, 0, 2, 1,
					 3, 1, 0, 2,
					 3, 1, 2, 0,
					 3, 2, 0, 1,
					 3, 2, 1, 0					 
					 };
		int i = 24 * 4 - 1 - 3; 
		while(i >= 0){
			int a = A[ind[i]], b = A[ind[i+1]], c = A[ind[i+2]], d = A[ind[i+3]];
			if(a * 10 + b <= 23 && c * 10 + d <= 59){
				return "" + a + b + ":" + c + d;
			}
			i -= 4;
		}
		return "";
    }
}

```

## Python Solution

```python

class Solution:
    def largestTimeFromDigits(self, A):
        """
        :type A: List[int]
        :rtype: str
        """
        maxtime = ""
        for i in range(4):
            for j in range(4):
                for k in range(4):
                    if i == j or i == k or k == j:
                        continue
                    h = A[i] * 10 + A[j]
                    m = A[k] * 10 + A[6 - i - j - k]
                    if 0 <= h < 24 and 0 <= m < 60:
                        time = "%02d:%02d" % (h, m)
                        if time > maxtime:
                            maxtime = time
        return maxtime

```





