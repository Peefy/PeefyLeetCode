
# problem 707 : DesignLinkedList

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/707.DesignLinkedList/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class DoublyListNode {
public:
    int val;
    DoublyListNode* pre;
    DoublyListNode* next;

    DoublyListNode(int _val) {
        val = _val;
        pre = nullptr;
        next = nullptr;
    }

    ~DoublyListNode(){
        pre = nullptr;
        next = nullptr;
        delete pre;
        delete next;
    }

};

class MyLinkedList {
private:
    DoublyListNode* head;
    DoublyListNode* tail;
    DoublyListNode* getNodeAtIndex(int index) {
            if (index < 0) return nullptr;
            auto temp = head;
            for (int i = 0; i <= index; i++) {
                temp = temp->next;
                if (temp == nullptr) return nullptr;
            }
            return temp;
        }
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = new DoublyListNode(0);
        tail = new DoublyListNode(0);
        head->next = tail;
        tail->pre = head;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        auto node = getNodeAtIndex(index);
        return (node == nullptr || node == tail) ? -1 : node->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        auto* node = new DoublyListNode(val);
        head->next->pre = node;
        node->next = head->next;
        head->next = node;
        node->pre = head;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        auto* node = new DoublyListNode(val);
        tail->pre->next = node;
        node->pre = tail->pre;
        node->next = tail;
        tail->pre = node;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        auto* node = getNodeAtIndex(index);
        if (node == nullptr) return;
        if (node == tail) {
            addAtTail(val);
            return;
        }
        auto* newNode = new DoublyListNode(val);
        node->pre->next = newNode;
        newNode->pre = node->pre;
        newNode->next = node;
        node->pre = newNode;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        auto* node = getNodeAtIndex(index);
        if (node == nullptr || node == tail) return;
        node->pre->next = node->next;
        node->next->pre = node->pre;
    }
};

```

## C# Solution

```csharp

    public class DoublyListNode
    {
        public int val;
        public DoublyListNode pre;
        public DoublyListNode next;

        public DoublyListNode(int val)
        {
            this.val = val;
        }
    }

    public class MyLinkedList
    {

        DoublyListNode head;
        DoublyListNode tail;

        /**
         * Initialize your data structure here.
         */
        public MyLinkedList()
        {
            head = new DoublyListNode(0);
            tail = new DoublyListNode(0);
            head.next = tail;
            tail.pre = head;
        }

        /**
         * Get the value of the index-th node in the linked list. If the index is invalid, return -1.
         */
        public int Get(int index)
        {
            DoublyListNode node = GetNodeAtIndex(index);
            return (node == null || node == tail) ? -1 : node.val;
        }

        /**
         * 自定义一个辅助方法：很重要
         */
        public DoublyListNode GetNodeAtIndex(int index)
        {
            if (index < 0) return null;
            DoublyListNode temp = head;
            for (int i = 0; i <= index; i++)
            {
                temp = temp.next;
                if (temp == null) return null;
            }
            return temp;//包括了len+1对应tail
        }

        /**
         * Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
         */
        public void AddAtHead(int val)
        {
            DoublyListNode node = new DoublyListNode(val);
            head.next.pre = node;
            node.next = head.next;
            head.next = node;
            node.pre = head;
        }

        /**
         * Append a node of value val to the last element of the linked list.
         */
        public void AddAtTail(int val)
        {
            DoublyListNode node = new DoublyListNode(val);
            tail.pre.next = node;
            node.pre = tail.pre;
            node.next = tail;
            tail.pre = node;
        }

        /**
         * Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted.
         */
        public void AddAtIndex(int index, int val)
        {
            DoublyListNode node = GetNodeAtIndex(index);
            if (node == null) return;
            if (node == tail)
            {
                AddAtTail(val);
                return;
            }
            DoublyListNode newNode = new DoublyListNode(val);
            node.pre.next = newNode;
            newNode.pre = node.pre;
            newNode.next = node;
            node.pre = newNode;
        }

        /**
         * Delete the index-th node in the linked list, if the index is valid.
         */
        public void DeleteAtIndex(int index)
        {
            DoublyListNode node = GetNodeAtIndex(index);
            if (node == null || node == tail) return;
            node.pre.next = node.next;
            node.next.pre = node.pre;
        }

    }

```

## Java Solution

```java

class MyLinkedList {
    LinkedList<Integer> l;
    /** Initialize your data structure here. */
    public MyLinkedList() {
        l = new LinkedList<>();
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    public int get(int index) {
        if (index < 0 || index >= l.size())
            return -1;
        return l.get(index);
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    public void addAtHead(int val) {
        l.addFirst(val);
    }
    
    /** Append a node of value val to the last element of the linked list. */
    public void addAtTail(int val) {
        l.addLast(val);
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    public void addAtIndex(int index, int val) {
        if (index < 0 || index > l.size())
            return;
        l.add(index, val);
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    public void deleteAtIndex(int index) {
        if (index < 0 || index >= l.size())
            return;
        l.remove(index);
    }
}

```

## Python Solution

```python

class MyLinkedList:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.l = []

    def get(self, index):
        """
        Get the value of the index-th node in the linked list. If the index is invalid, return -1.
        :type index: int
        :rtype: int
        """
        if index < 0 or index >= len(self.l):
            return -1
        return self.l[index]

    def addAtHead(self, val):
        """
        Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
        :type val: int
        :rtype: void
        """
        self.l.insert(0, val)

    def addAtTail(self, val):
        """
        Append a node of value val to the last element of the linked list.
        :type val: int
        :rtype: void
        """
        self.l.append(val)

    def addAtIndex(self, index, val):
        """
        Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted.
        :type index: int
        :type val: int
        :rtype: void
        """
        if index < 0 or index > len(self.l):
            return
        self.l.insert(index, val)

    def deleteAtIndex(self, index):
        """
        Delete the index-th node in the linked list, if the index is valid.
        :type index: int
        :rtype: void
        """
        if index < 0 or index >= len(self.l):
            return
        self.l.pop(index)

```





