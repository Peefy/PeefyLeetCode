
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Stack;


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



