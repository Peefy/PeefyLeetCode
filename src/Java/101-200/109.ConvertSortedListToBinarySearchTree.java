
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;


public class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}

public class TreeNode {     
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

class Solution {
    public TreeNode sortedListToBST(ListNode head) {
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
        root.left = sortedListToBST(head);
        root.right = sortedListToBST(tmp.next);
        return root;
    }
}
