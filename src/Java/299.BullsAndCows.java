
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.HashMap;
import java.util.HashSet;

public class Solution {
    public String getHint(String secret, String guess) {
        StringBuilder sb = new StringBuilder();
		int a = 0, b = 0;
		int[] s = new int[10];
		int[] g = new int[10];
		for (int i = 0; i < secret.length(); i++) {
			s[secret.charAt(i) - '0']++;
			g[guess.charAt(i) - '0']++;
			a += secret.charAt(i) == guess.charAt(i) ? 1 : 0;
		}
		for (int i = 0; i < s.length; i++) 
			b += Math.min(s[i], g[i]);
		return sb.append(a).append("A").append(b - a).append("B").toString();
    }
}

