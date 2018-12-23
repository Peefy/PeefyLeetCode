
# problem 876 : MiddleOfTtheLinkedList

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/876.MiddleOfTtheLinkedList/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;  
        }
        return slow;
    }
};

```

## C# Solution

```csharp

public class Solution
{
    public ListNode MiddleNode(ListNode head)
    {
        ListNode slow = head;
        ListNode fast = head;
        while (fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
}

```

## Java Solution

```java

class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        while (fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
}

```

## Python Solution

```python

class Solution:
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        count = 0
        tmp = head
        while tmp is not None:
            tmp = tmp.next
            count += 1
        for i in range(count // 2):
            head = head.next
        return head

```





