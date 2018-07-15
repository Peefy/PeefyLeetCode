
# problem 21 : Merge Two Sorted Lists

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/21.MergeTwoSortedLists/problem.png"/>

## C++ Solution

```c++

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        ListNode* ans = NULL;
        if (l1->val < l2->val){
            ans = l1;
            ans->next = this->mergeTwoLists(l1->next, l2);
        }
        else{
            ans = l2;
            ans->next = this->mergeTwoLists(l1, l2->next);
        }
        return ans;
    }
};

```

## C# Solution

```csharp

    public class ListNode 
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }

    public class Solution 
    {
        public ListNode MergeTwoLists(ListNode l1, ListNode l2) {
            var r = new ListNode(-1);
            var head = r;
            while(l1 != null && l2 != null)
            {
                if(l1.val < l2.val)
                {
                    r.next = l1;
                    l1 = l1.next;
                }
                else
                {
                    r.next = l2;
                    l2 = l2.next;
                }
                r = r.next;
            }
            if(l1 == null)
            {
                r.next = l2;
            }
            else
            {
                r.next = l1;
            }
            return head.next;
        }
    }

```

## Java Solution

```java

public class ListNode {
        int val;
        ListNode next;
        ListNode(int x) { val = x; }
}

public class MergeTwoSortedLists {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode r = new ListNode(0);
        ListNode start = r;
        while (l1 != null && l2 != null ){
            if (l1.val < l2.val){
                r.next = l1;
                l1 = l1.next;
            }
            else{
                r.next = l2;
                l2 = l2.next;
            }
            r = r.next;
        }
        r.next = l1 == null ? l2 : l1;
        return start.next;
    }
}

```

## Python Solution

```python

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        r = ListNode(0)
        start = r
        while l1 is not None and l2 is not None:
            if l1.val < l2.val:
                r.next = ListNode(l1.val)
                l1 = l1.next
            else:
                r.next = ListNode(l2.val)
                l2 = l2.next
            r = r.next
        if l1 is None:
            r.next = l2
        else:
            r.next = l1
        return start.next

```


