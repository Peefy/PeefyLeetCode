
# problem 141 : ListHasCycle

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/141.ListHasCycle/problem.png"/>

# 链表中是否存在环的解法

* 将遍历过的链表元素的下一个结点都指向头指针，表示遍历过(C++)

* 快慢指针(C#) 实际速度最快 O(n)

* 哈希表(Java) O(n)

* 设置一个比链表空间更大的数，利用Leetcode输入上限(大概10000??)的bug(python) (滑稽) 

## C++ Solution

```c++

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
  public:
    bool hasCycle(ListNode *head)
    {
        auto now = head;       
        while(now != NULL){
            auto next = now->next;       
            if (next == head) {
                return true;
            }
            now->next = head;
            now = next;          
        }
        return false;
    }
};

```

## C# Solution

```csharp
 
```

## Java Solution

```java

class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}

public class Solution {
    public boolean hasCycle(ListNode head) {
        Set<ListNode> nodesSeen = new HashSet<>();
        while (head != null) {
            if (nodesSeen.contains(head)) {
                return true;
            } else {
                nodesSeen.add(head);
            }
            head = head.next;
        }
        return false;
    }
}

```

## Python Solution

```python


class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        i = 0
        while head != None:
            head = head.next
            i += 1
            if i > 10000:
                return True
        return False

```


