
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

    ListNode(int x) {
        val = x;
    }
}

class Solution {
    public ListNode partition(ListNode head, int x) {
        ListNode node = head;
        ListNode smallstart = new ListNode(-1);
        ListNode bigstart = new ListNode(-1);
        ListNode smallnode = smallstart;
        ListNode bignode = bigstart;
        while (node != null){
            if (node.val < x){
                smallnode.next = node;
                smallnode = smallnode.next;
            }
            else{
                bignode.next = node;
                bignode = bignode.next;
            }
            node = node.next;
        }
        smallnode.next = bigstart.next;
        bignode.next = null;        
        return smallstart.next;
    }
}
