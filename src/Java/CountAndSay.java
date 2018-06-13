import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class CountAndSay {
    public String countAndSay(int n) {
        if (n <= 1){
            return "1";
        }          
        String s = countAndSay(n - 1);
        if (s == "1"){
            return "11";
        }
        char[] arr = s.toCharArray();
        char prev = arr[0];
        Integer count = 0;
        String temp = "";
        for (int i = 1;i < arr.length;++i){
            if (prev != arr[i]){
                temp = temp + count.toString() + prev;
                prev = arr[i];
                count = 1;
            }
            else
                count += 1;
        }
        temp = temp + count.toString() + prev;
        return temp;
    }  
}
