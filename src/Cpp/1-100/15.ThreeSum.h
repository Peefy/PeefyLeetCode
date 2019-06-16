
#ifndef __THREE_SUM_H
#define __THREE_SUM_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > list;
        for(int i=0;i<nums.size()-2;i++){
            if(i!=0&&(nums[i]==nums[i-1]))continue;
             int j=i+1;
             int k=nums.size()-1;
            while(j<k){
                 int sum=nums[j]+nums[k]+nums[i];
                  if(sum<0){
                      j++;
                  }
                  else if(sum>0){
                      k--;
                  }
                  else{
                    while(j<k&&nums[j]==nums[j+1])j++;   
                    while(j<k&&nums[k]==nums[k-1])k--;
                     vector<int> temp;
                     temp.push_back(nums[i]);
                     temp.push_back(nums[j]);
                     temp.push_back(nums[k]);
                     list.push_back(temp);
                     j++;
                     k--; 
                  }
                }     
        }
        return list;  
    }
};

#endif
