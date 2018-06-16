
#ifndef __58LengthOfLastWord_H
#define __58LengthOfLastWord_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
    string addBinary(string a, string b)
    {
        int jinzhi = 2;
        int n1 = a.length();
        int n2 = b.length();
        int i = 0;
        string sum = "";
        int n = n1 > n2 ? n1 : n2;
        int c = 0;
        while (i < n - n1)
        {
            a = "0" + a;
            i += 1;
        }
        while (i < n - n2)
        {
            b = "0" + b;
            i += 1;
        }
        i = n - 1;
        while (i >= 0)
        {
            int r = (a[i] - '0') + (b[i] - '0') + c;
            c = r / jinzhi;
            r = r % jinzhi;
            sum = (char)(r + '0') + sum;
            i -= 1;
        }
        if (c == 1)
            sum = "1" + sum;
        return sum;
    }
};

#endif
