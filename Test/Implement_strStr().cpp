//
//  Implement_strStr().cpp
//  Test
//
//  Created by Zane on 2020/11/2.
//  Copyright © 2020 Zane. All rights reserved.
//

#include <stdio.h>
#include <string>

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()==0 && needle.length()==0)
            return 0;
        else if(haystack.length() < needle.length())
            return -1;
        for(int i=0; i<=haystack.length()-needle.length(); i++){
            string sub = "";
            for(int j=0; j<needle.length(); j++){
                sub+=haystack[i+j];
            }
            if(sub.compare(needle)==0){
                return i;
            }
        }
        return -1;
    }
};
