 
#ifndef __REVERSE_VOWELS_STRING_H
#define __REVERSE_VOWELS_STRING_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s; 
        vector<int> r;
        for(size_t i = 0; i < nums1.size(); i++)
        {
            s.insert(nums1[i]);
        }
        for(size_t i = 0; i < nums2.size(); i++)
        {
            auto now = s.find(nums2[i]);
            if(now != s.end()){
                r.push_back(nums2[i]);
                s.erase(now);
            }
        }
        return r;
    }
};

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.empty()||nums2.empty())
            return {};
        vector<int> res;
        heapSort(nums1);
        heapSort(nums2);
        sort(nums2.begin(),nums2.end());
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    if(find(res.begin(),res.end(),nums1[i])==res.end())
                        res.push_back(nums1[i]);
                    break;   
                }
            }
        }
        return res;
    }
    //这里用sort函数，快排，复杂度也为O(logn)，自写堆排序
    void heapSort(vector<int> &nums)
    {
        int length=nums.size();
        for(int i=length/2-1;i>=0;i--)
            adjustHeap(nums,i,length);
        for(int j=length-1;j>0;j--)
        {
            int temp=nums[j];
            nums[j]=nums[0];
            nums[0]=temp;
            adjustHeap(nums,0,j);
        }
    }
    void adjustHeap(vector<int> &nums,int i,int length)
    {
        int temp=nums[i];
        for(int k=2*i+1;k<length;k=2*k+1)
        {
            if(k+1<length&&nums[k]<nums[k+1])
                k++;
            if(nums[k]>nums[i])
            {
                nums[i]=nums[k];
                i=k;
            }
            else
                break;
        }
        nums[i]=temp;
    }
};


#endif
