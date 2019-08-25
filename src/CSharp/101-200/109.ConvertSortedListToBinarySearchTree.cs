
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.ConvertSortedListToBinarySearchTree
{

public class ListNode {
    public int val;
    public ListNode next;
    public ListNode(int x) { val = x; }
}


public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}

public class Solution {
    public TreeNode SortedListToBST(ListNode head) {
        if (head == null)
            return null;
        if (head.next == null)
            return new TreeNode(head.val);
        // 双指针法找到链表中点
        ListNode slow = head;
        ListNode fast = head.next.next;
        while (fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        ListNode tmp = slow.next;
        slow.next = null;
        TreeNode root = new TreeNode(tmp.val);
        root.left = SortedListToBST(head);
        root.right = SortedListToBST(tmp.next);
        return root;
    }
}
}