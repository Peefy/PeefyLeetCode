
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

    HashSet<Integer> usedSet = new HashSet<>(); 
    int iFinalResult = 0;

    public int fac(int n){
        if (n < 0 || n == 1){
            return n;
        }
        int result = 1;
        for (int i = n; i >= 1; i--){
            result = result * i;
        }
        return result;
    }

    public String getPermutation(int n, int k) {
        int iCurPosFac;
        int iCurPosResult = k - 1;
        int iCurPosRemain;
        for (int i = n; i >= 1; i--){
            iCurPosFac = fac(i - 1);
            iCurPosRemain = iCurPosResult % (iCurPosFac);
            iCurPosResult = iCurPosResult / (iCurPosFac);
            int iCurPosResultAdjust = 0;
            int iLoop = 0;
            for (int j = 1; j <= n; j++)
            {
                if (usedSet.contains(j) == false){
                    iLoop++;
                }
                if (iLoop == (iCurPosResult + 1)){
                    iCurPosResultAdjust = j;
                    break;
                }
            }
            iFinalResult = (int)(iFinalResult + (iCurPosResultAdjust * Math.pow(10, i - 1)));
            usedSet.add(iCurPosResultAdjust);
            iCurPosResult = iCurPosRemain;
        }
        return String.valueOf(iFinalResult);
    }
}
