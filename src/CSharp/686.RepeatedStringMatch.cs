
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.RepeatedStringMatch
{
public class Solution {
    public int RepeatedStringMatch(string A, string B) {
        int lenA = A.Length;
        int lenB = B.Length;
        int indexA = 0;
        int indexB = 0; 
        while(indexB < lenB) { 
            if(lenA < lenB && indexA >= 2 * lenB) {
                return -1;
            }
            
            if(lenA >= lenB && indexA >= 2 * lenA) {
                return -1;
            }
            
            if(A[indexA % lenA] == B[indexB]) {
                indexA++;
                indexB++;
            } else if(indexB == 0){
                indexA++; 
            } else {
                int i = indexA + 1;
                for(; i < indexA + 1 + lenB; i++) {
                    if(A[i % lenA] == B[indexB]) {
                        break;
                    }
                }
                if(i == indexA +1 + lenB) return -1; 
                indexA = i - indexB;
                indexB = 0;
            } 
        }
        return (indexA - 1) / lenA + 1;
    }
}
}

