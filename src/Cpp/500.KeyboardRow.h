
#ifndef _KEY_BOARD_ROW_H
#define _KEY_BOARD_ROW_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string firstLineLower = "qwertyuiop";
        string firstLineUpper = "QWERTYUIOP";
        string secondLineLower = "asdfghjkl";
        string secondLineUpper = "ASDFGHJKL";
        string thirdLineLower = "zxcvbnm";
        string thirdLineUpper = "ZXCVBNM";
        vector<string> r;
        for(auto word : words){
            auto count = 0;
            int flag[3] = {0 ,0 ,0};
            auto length = word.length();
            for(auto letter : word){
                if ((firstLineLower.find(letter) != -1) || 
                    (firstLineUpper.find(letter) != -1)){
                        if (flag[1] + flag[2] >= 1)
                            break;
                        flag[0] = 1;
                        count += 1;
                    }
                if ((secondLineLower.find(letter) != -1) || 
                    (secondLineUpper.find(letter) != -1)){
                        if (flag[0] + flag[2] >= 1)
                            break;
                        flag[1] = 1;
                        count += 1;
                    }
                if ((thirdLineLower.find(letter) != -1) || 
                    (thirdLineUpper.find(letter) != -1)){
                        if (flag[0] + flag[1] >= 1)
                            break;
                        flag[2] = 1;
                        count += 1;
                    }
            }
            if (count == length)
                r.push_back(word);
        }
        return r;
    }
};

#endif

