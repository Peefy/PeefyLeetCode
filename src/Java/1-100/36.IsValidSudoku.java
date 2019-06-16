
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public boolean isValidSudoku(char[][] board) {
        boolean flag=true;
        for(int i=0;i<9;i++){
            int[] a = new int[]{0,0,0,0,0,0,0,0,0,0};
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(a[board[i][j]-'0']==0)
                        a[board[i][j]-'0']=1;
                    else
                        flag=false; 
                }
            }
            if(flag==false)
               return flag;
        }   
        for(int i=0;i<9;i++){
            int[] a = new int[]{0,0,0,0,0,0,0,0,0,0};
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    if(a[board[j][i]-'0']==0)
                        a[board[j][i]-'0']=1;
                    else
                        flag=false; 
                }
            }
            if(flag==false)
               return flag;
        }     
        for(int i=0;i<7;i+=3){
            for(int j=0;j<7;j+=3){
                int[] a = new int[]{0,0,0,0,0,0,0,0,0,0};
                for(int p=i;p<i+3;p++){
                    for(int q=j;q<j+3;q++){
                        if(board[p][q]!='.'){
                    if(a[board[p][q]-'0']==0)
                        a[board[p][q]-'0']=1;
                    else
                        flag=false; 
                }
                    }
                }
            if(flag==false)
               return flag;
            }
        }      
        return flag; 
    }
}