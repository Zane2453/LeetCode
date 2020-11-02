//
//  LongestCommonPrefix.cpp
//  Test
//
//  Created by Zane on 2020/11/2.
//  Copyright © 2020 Zane. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string in1,in2;
        int l1, l2;
        if(strs.size()!=0){
            in1 = strs[0];
            for(int i=1; i<strs.size(); i++){
                in2 = strs[i];
                l1 = l2 = 0;
                while(l1 < in1.length() && l2 < in2.length()){
                    if(in1[l1] == in2[l2]){
                        l1++;
                        l2++;
                    }
                    else
                        break;
                }
                in1 = in1.substr(0, l1);
                in2.clear();
            }
            return in1;
        }
        else
            return "";
    }
};
