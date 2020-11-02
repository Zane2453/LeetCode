//
//  ValidParentheses.cpp
//  Test
//
//  Created by Zane on 2020/11/2.
//  Copyright © 2020 Zane. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <stack>

class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 > 0)
            return false;
        
        stack <char> brackets;
        for (int i=0; i<s.length(); i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                brackets.push(s[i]);
            else{
                // if the stack is empty, there are no opening brackets left to compare
                if (brackets.empty())
                    return false;
                
                if (abs(s[i] - brackets.top()) > 2)
                    return false;
                else
                    brackets.pop();
            }
        }
        return brackets.empty();
    }
};
