
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;

class Solution {
    public ArrayList<Integer> generateNext(ArrayList<Integer> arr)
    {
        int n = arr.size();
        ArrayList<Integer> r = new ArrayList<Integer>();
        r.add(1);     
        for(int i = 0; i < n - 1; i++)
        {
            r.add(arr.get(i) + arr.get(i + 1));
        } 
        r.add(1);
        return r;
    }
    public List<List<Integer>> generate(int numRows) {
        ArrayList<List<Integer>> none = new ArrayList<ArrayList<Integer>>();
        ArrayList<Integer> one = new ArrayList<>();
        one.add(1);
        ArrayList<Integer> two = new ArrayList<>();
        two.add(1);
        two.add(1);
        if (numRows == 0)
            return none;
        if (numRows == 1) {
            none.add(one);
            return none;
        }
        if (numRows == 2) {
            none.add(one);
            none.add(two);
            return none;
        }
        none.add(one);
        none.add(two);
        ArrayList<Integer> arr = two;
        for(int i = 0; i < numRows - 2; i++)
        {
            arr = generateNext(arr);
            none.add(arr);
        }
        return none;
    }
}
