
# Problem 2 : Add Two Numbers

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/2.AddTwoNumbers/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto* ptr = l1;
        int carry = 0;
        while (true){
            l1->val = l1->val + l2->val + carry;
            carry = l1->val / 10;
            l1->val = l1->val % 10;
            if (l1->next != nullptr || l2->next != nullptr || carry){
                if(l1->next == nullptr)
                    l1->next = new ListNode(0);
                l1 = l1->next;
                if(l2->next == nullptr)
                    l2->next = new ListNode(0);
                l2 = l2->next;
            }
            else
                break;
        }
        return ptr;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public ListNode AddTwoNumbers(ListNode l1, ListNode l2)
        {
            ListNode dummyHead = new ListNode(0);
            ListNode p = l1, q = l2, curr = dummyHead;
            int carry = 0;
            while (p != null || q != null)
            {
                int x = (p != null) ? p.val : 0;
                int y = (q != null) ? q.val : 0;
                int sum = carry + x + y;
                carry = sum / 10;
                curr.next = new ListNode(sum % 10);
                curr = curr.next;
                if (p != null) p = p.next;
                if (q != null) q = q.next;
            }
            if (carry > 0)
            {
                curr.next = new ListNode(carry);
            }
            return dummyHead.next;
        }
    }

```

## Java Solution

```java

class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode p = new ListNode(0);
        ListNode q = p;
        int c = 0;
        while(l1 != null || l2 != null){
            int x = (l1 != null) ? l1.val : 0;
            int y = (l2 != null) ? l2.val : 0;
            int sum = x + y + c;
            c = sum / 10;
            p.next = new ListNode(sum % 10);
            p = p.next;
            if(l1 != null) l1 = l1.next;
            if(l2 != null) l2 = l2.next;
        }
        
        if(c > 0){
            p.next = new ListNode(1);
        }   
        return q.next;
    }
}

```

## Python Solution

```python

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        l1node = l1
        l2node = l2
        prenode = None
        r = 0
        flag = 0
        while l1node is not None or l2node is not None:
            if l1node is None:
                l2node.val += r
                r = l2node.val // 10
                l2node.val %= 10
                prenode = l2node
                l2node = l2node.next 
                flag = 1
            elif l2node is None:
                l1node.val += r
                r = l1node.val // 10
                l1node.val %= 10
                prenode = l1node
                l1node = l1node.next
                flag = 2
            else:
                l1node.val += (l2node.val + r)
                r = l1node.val // 10
                l1node.val %= 10
                l2node.val = l1node.val
                prenode = l1node
                l1node = l1node.next
                l2node = l2node.next 
        if r > 0:
            node = ListNode(r)
            prenode.next = node
        return l2 if flag == 1 else l1

```


