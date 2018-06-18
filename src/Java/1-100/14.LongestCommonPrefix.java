
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class LongestCommonPrefix {

    public boolean isSame(String[] strs, int index){
        try {
            int count = 0;
            for(int i = 0;i < strs.length - 1;++i){
                if(strs[i].charAt(index) == strs[i + 1].charAt(index)){
                    count += 1;
                }
            }
            if(count == strs.length - 1){
                return true;
            }         
            return false;
        } catch (Exception e) {
            return false;
        }
    }

    public String longestCommonPrefix(String[] strs) {
        String return_str = "";
        int min_str_len = Integer.MAX_VALUE;
        int n = strs.length;
        for(int i = 0;i < n; ++i){
            int now_str_len = strs[i].length();
            if(now_str_len <= min_str_len){
                min_str_len = now_str_len;
            }               
        }
        for(int i = 0;i < min_str_len; ++i){
            if(this.isSame(strs, i) == true){
                return_str += strs[0].charAt(i);
            }
            else{
                break;
            }
        }
        return return_str;
    }
}