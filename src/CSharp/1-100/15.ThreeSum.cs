
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ThreeSum
{
public class Solution {
    public IList<IList<int>> ThreeSum(int[] nums) {
        Array.Sort(nums);
        List<IList<int>> list = new List<IList<int>>();
        for(int i=0;i<nums.Length-2;i++){
            if(i!=0&&(nums[i]==nums[i-1]))continue;
             int j=i+1;
             int k=nums.Length-1;
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
                     List<int> temp = new List<int>();
                     temp.Add(nums[i]);
                     temp.Add(nums[j]);
                     temp.Add(nums[k]);
                     list.Add(temp);
                     j++;
                     k--; 
                  }
                }     
        }
        return list;  
    }
}
}
