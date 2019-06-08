
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public String simplifyPath(String path) {
        LinkedList<String> temp = new LinkedList<>();
        String[] pathlist = path.split("/");
        for (String pa : pathlist) {
            if (pa.equals("..")){
                if (temp.size() > 0) {
                    temp.removeLast();
                }    
            }
            else if (pa.equals(".") == false && pa.equals("") == false){
                temp.add(pa);
            }
        }
        return "/" + String.join("/", temp);
    }
}

