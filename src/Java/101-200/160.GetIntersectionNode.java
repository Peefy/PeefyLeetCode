
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.LinkedList;

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


