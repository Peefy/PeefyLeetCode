using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.SimplifyPath
{
public class Solution {
    public string SimplifyPath(string path) {
        var temp = new Stack<string>();
        var pathlist = path.Split("/");
        foreach (var pa in pathlist) {
            if (pa.Equals("..")){
                if (temp.Count > 0) {
                    temp.Pop();
                }    
            }
            else if (pa.Equals(".") == false && pa.Equals("") == false){
                temp.Push(pa);
            }
        }
        return "/" + String.Join("/", temp.Reverse());
    }
}
}