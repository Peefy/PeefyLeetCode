
using System;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.PalindromePartitioning
{
    public class Solution
    {
        List<IList<string>> list = new List<IList<string>>();
        string s;
        public void dfs(List<string> ll, int index)
        {
            if (index == s.Length)
            {
                list.Add(new List<string>(ll));
                return;
            }
            for (int i = index; i < s.Length; i++)
            {
                if (isPalindrome(index, i))
                {
                    ll.Add(s.Substring(index, i + 1 - index));
                    dfs(ll, i + 1);
                    ll.RemoveAt(ll.Count - 1);
                }

            }
        }

        public bool isPalindrome(int start, int end)
        {
            while (start < end)
            {
                if (s[start] != s[end])
                    return false;
                start++;
                end--;
            }
            return true;
        }
        public IList<IList<string>> Partition(string s)
        {
            this.s = s;
            List<string> ll = new List<string>();
            dfs(ll, 0);
            return list;
        }
    }
}