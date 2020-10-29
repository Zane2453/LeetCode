//
//  ReverseInteger.cpp
//  Test
//
//  Created by Zane on 2020/10/29.
//  Copyright © 2020 Zane. All rights reserved.
//

#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int reverse(int x) {
        int temp=0,range;
        bool sign=0;
        range = pow(2,31)/10;
        cout<<range<<endl;
        if(x == -2147483648)
            return 0;
        if(x < 0){
            sign = 1;
            x = -x;
        }
        while(x!=0){
            if(temp>range)
                return 0;
            else
                temp = temp *10 + (x%10);
            cout<<temp<<endl;
            x =x /10;
        }
        if(sign == 1)
            temp = -temp;
        return temp;
    }
};
