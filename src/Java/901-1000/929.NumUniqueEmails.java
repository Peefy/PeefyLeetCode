
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

class Solution {
    public int numUniqueEmails(String[] emails) {
        HashSet<String> email_set = new HashSet<>();
        for (String email : emails) {
            String tmp_str = "";

            boolean after_plus = false;
            boolean after_at = false;
            for (char c : email.toCharArray()) {
                if (c == '@') {
                    after_at = true;
                }
                if (c == '+') {
                    after_plus = true;
                }

                if (!after_at && (c == '.' || after_plus)) {
                    continue;
                }
                tmp_str += c;
            }
            email_set.add(tmp_str);
        }
        return email_set.size();
    }
}
