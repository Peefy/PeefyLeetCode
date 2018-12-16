using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.MyLinkedList
{

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
}
