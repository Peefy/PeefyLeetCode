
import java.lang.*;

class IntergerReverse {
    public int reverse(int x) {
        String xstr = new Integer(x).toString();
        char[] arr = xstr.toCharArray();
        int n = arr.length;
        char[] rearr = new char[n];
        if (arr[0] != '-') {
            for (int i = 0; i < n; ++i) {
                int j = n - i - 1;
                rearr[i] = arr[j];
            }
            try {
                return new Integer(new String(rearr));
            } catch (Exception e) {
                return 0;
            }
        } else {
            rearr[0] = '-';
            for (int i = 0; i < n - 1; ++i) {
                int j = n - i - 1;
                rearr[i + 1] = arr[j];
            }
            try {
                return new Integer(new String(rearr));
            } catch (Exception e) {
                return 0;
            }

        }
    }
}
