
#ifndef __PERMUTATION_SEQUENCE_H
#define __PERMUTATION_SEQUENCE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution
{
public:
    set<int> usedSet; 
    int iFinalResult=0;
    int fac(int n)
    {
        if (n < 0 || n == 1)
        {
            return n;
        }
        int result = 1;
        for (int i = n; i >= 1; i--)
        {

            result = result * i;
            //cout<<"i:"<<i<<" result:"<<result<<endl;
        }
        return result;
    }

    string getPermutation(int n, int k)
    {
        int iCurPosFac;
        int iCurPosResult = k - 1;
        int iCurPosRemain;
        for (int i = n; i >= 1; i--)
        {
            //根据康拓展开逆运算进行计算
            iCurPosFac = fac(i - 1);
            //cout<<"iCurPosResult:"<<iCurPosResult<<" iCurPosFac:"<<iCurPosFac<<endl;
            //先取余再取结果，否则iCurPosResult变了会导致计算错误
            iCurPosRemain = iCurPosResult % (iCurPosFac);
            iCurPosResult = iCurPosResult / (iCurPosFac);

            //cout<<"i-1 :"<<i-1<<" iCurPosFac:"<<iCurPosFac<<" iCurPosResult:"<<iCurPosResult<<" iCurPosRemain:"<<iCurPosRemain<<endl;

            //根据计算结果，寻找符合条件的对应位数字
            int iCurPosResultAdjust;
            int iLoop = 0;
            for (int j = 1; j <= n; j++)
            {
                if (usedSet.find(j) == usedSet.end())
                {
                    iLoop++;
                }
                if (iLoop == (iCurPosResult + 1))
                {
                    iCurPosResultAdjust = j;
                    break;
                }
            }

            //debug
            //cout<<"iCurPosResultAdjust:"<<iCurPosResultAdjust<<endl;
            //记录结果，用于最终的返回
            iFinalResult = iFinalResult + (iCurPosResultAdjust * pow(10, i - 1));

            //更新进行下一轮计算(最后做)
            usedSet.insert(iCurPosResultAdjust);
            iCurPosResult = iCurPosRemain;
        }
        return to_string(iFinalResult);
    }
};

#endif
