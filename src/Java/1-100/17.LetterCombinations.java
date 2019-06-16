
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;

class Solution {

    private String[] maps = new String[]{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    public List<String> letterCombinations(String digits) {
        if (digits.length() == 0)
            return new LinkedList<>();
        List<String> nowList = new LinkedList<>();
        nowList.add("");
        return recursive(digits, 0, nowList);
    }

    public List<String> recursive(String digits, int index, List<String> beforeList) {
        if (digits.length() == index)
            return beforeList;
        List<String> nowList = new LinkedList<>();
        for (char c : maps[digits.charAt(index) - '0'].toCharArray()){
            for (String str : beforeList){
                nowList.add(str + c);
            }
        }
        return recursive(digits, index + 1, nowList);
    }

}
