
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.HashMap;
import java.util.HashSet;

public class Solution {
    public boolean canWin(String s) {
        for ( int i = 0; i < s.length() - 1; i ++ ){
            if ( s.charAt ( i ) == '+' && s.charAt( i + 1 ) == '+' ){
                StringBuilder sb = new StringBuilder ( s );
                sb.setCharAt ( i , '-');
                sb.setCharAt ( i + 1 ,'-');
                if ( !canWin ( sb.toString() ) )
                    return true;
            }
        }
        return false;
    }
}

