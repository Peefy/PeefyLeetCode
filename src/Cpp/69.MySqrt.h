
#ifndef __MY_SQRT_H
#define __MY_SQRT_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
   double Sqrt(double a, double p) 
    {
        double x = 1.0;
        double cheak;
        do
        {
            x = (a / x + x) / 2.0;
            cheak = x * x - a;
        } while ((cheak >= 0 ? cheak : -cheak) > p);
        return x;
    }

    int mySqrt(int x)
    {
        return Sqrt(x, 0.01);
    }
};

#endif
