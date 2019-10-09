
import java.util.List;
import java.util.TreeSet;
import java.util.Map.Entry;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;
import java.util.Stack;

public class Solution {
    public boolean validTree(int n, List<Entry<Integer, Integer>> edges) {
        if (n != edges.size() + 1)
            return false;
        int[] par = new int[n];
        for (int i = 0; i < par.length; i++) {
            par[i] = i;
        }
        for (Entry<Integer, Integer> edge : edges) {
            int par1 = edge.getKey();
            int par2 = edge.getValue();
            while (par[par1] != par1) 
                par1 = par[par1];
            while (par[par2] != par2) 
                par2 = par[par2];
            if (par1 != par2) {
                par[par2] = par1;
                n--;
            } 
        }
        return n == 1;
    }
}
