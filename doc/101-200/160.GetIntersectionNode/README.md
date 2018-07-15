
# problem 160 : GetIntersectionNode

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/160.GetIntersectionNode/problem.png"/>

## C++ Solution

```c++

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution
{
  public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        auto nodeA = headA;
        auto nodeB = headB;    
        while(nodeA != nodeB){
            nodeA = nodeA == NULL ? headB : nodeA->next;
            nodeB = nodeB == NULL ? headA : nodeB->next;
        }
        return nodeA;      
    }
};

```

## C# Solution

```csharp

    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x)
        {
            val = x;
            next = null;
        }
    }
    public class Solution
    {
        public ListNode GetIntersectionNode(ListNode headA, ListNode headB)
        {
            var tailA = headA;
            var tailB = headB;
            var tailALength = 0;
            var tailBLength = 0;
            while (tailA != null)
            {
                tailA = tailA.next;
                ++tailALength;
            }
            while (tailB != null)
            {
                tailB = tailB.next;
                ++tailBLength;
            }
            if (tailA != tailB)
                return null;
            var nodeA = headA;
            var nodeB = headB;
            if (tailALength > tailBLength)
            {
                var sub = tailALength - tailBLength;
                for (var i = 0;i < sub;++i)
                {
                    nodeA = nodeA.next;
                }
            }
            else if (tailALength < tailBLength)
            {
                var sub = tailBLength - tailALength;
                for (var i = 0; i < sub; ++i)
                {
                    nodeB = nodeB.next;
                }
            }
            while (nodeA != null)
            {
                if (nodeA == nodeB)
                    return nodeA;
                nodeA = nodeA.next;
                nodeB = nodeB.next;
            }
            return null;
        }
    }

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
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        Set<ListNode> nodesSeen = new HashSet<>();
        while (headA != null) {
            nodesSeen.add(headA);
            headA = headA.next;
        }
        while (headB != null){
            if (nodesSeen.contains(headB)) {
                return headB;
            }
            headB = headB.next;
        }
        return null;
    }
}

```

## Python Solution

```python

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        tailA = headA
        tailALength = 0
        tailB = headB
        tailBLength = 0
        while tailA is not None:
            tailA = tailA.next
            tailALength += 1
        while tailB is not None:
            tailB = tailB.next
            tailBLength += 1
        if tailA != tailB:
            return None
        nodeA = headA
        nodeB = headB
        if tailALength > tailBLength:
            sub = tailALength - tailBLength
            for i in range(sub):
                nodeA = nodeA.next
        else:
            sub = tailBLength - tailALength
            for i in range(sub):
                nodeB = nodeB.next
        while nodeA is not None:
            if nodeA == nodeB:
                return nodeA
            nodeA = nodeA.next
            nodeB = nodeB.next

```


