
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.WordSearch
{

    public class Solution
    {
        public bool Exist(char[][] board, string word)
        {
            int row = board.Length;
            int column = board[0].Length;
            char[] str = word.ToCharArray();
            bool[,] flag = new bool[row, column];
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    if (judge(board, i, j, row, column, flag, str, 0))
                        return true;
                }
            }
            return false;
        }

        public bool judge(char[][] board, int i, int j, int row, int column, bool[,] flag, char[] str, int k)
        {
            if (i < 0 || j < 0 || i >= row || j >= column || board[i][j] != str[k] || flag[i, j] == true)
                return false;
            if (k == str.Length - 1)
                return true;
            flag[i, j] = true;
            if (judge(board, i + 1, j, row, column, flag, str, k + 1) ||
              judge(board, i, j + 1, row, column, flag, str, k + 1) ||
              judge(board, i - 1, j, row, column, flag, str, k + 1) ||
              judge(board, i, j - 1, row, column, flag, str, k + 1))
            {
                return true;
            }
            flag[i, j] = false;
            return false;
        }
    }
}