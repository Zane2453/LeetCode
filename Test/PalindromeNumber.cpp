//
//  PalindromeNumber.cpp
//  Test
//
//  Created by Zane on 2020/11/2.
//  Copyright © 2020 Zane. All rights reserved.
//

#include <stdio.h>
#include <vector>

class Solution {
public:
    bool isPalindrome(int x) {
        //負數不是迴文數字，0是迴文數字
        vector <int> digit;
        int temp,pos=0,end;
        if(x<0)
            return false;
        else if(x == 0)
            return true;
        while(x != 0){
            temp = x%10;
            digit.push_back(temp);
            x=x/10;
        }
        end = digit.size();
        
        while(pos <= end){
            if(digit[pos] == digit[end-1]){
                pos++;
                end--;
            }
            else
                return false;
        }
        return true;
    }
};
