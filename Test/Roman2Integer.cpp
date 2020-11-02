//
//  Roman2Integer.cpp
//  Test
//
//  Created by Zane on 2020/11/2.
//  Copyright © 2020 Zane. All rights reserved.
//

#include <stdio.h>
#include <string>

class Solution {
public:
    int romanToInt(string s) {
        int ans=0,temp=0;
        for(int i=0; i<s.length(); i++){
            switch(s[i]){
                case 'I':
                    if(temp<1){
                        ans=ans+1-2*temp;
                        temp=1;
                    }
                    else{
                        ans+=1;
                        temp=1;
                    }
                    break;
                case 'V':
                    if(temp<5){
                        ans=ans+5-2*temp;
                        temp=5;
                    }
                    else{
                        ans+=5;
                        temp=5;
                    }
                    break;
                case 'X':
                    if(temp<10){
                        ans=ans+10-2*temp;
                        temp=10;
                    }
                    else{
                        ans+=10;
                        temp=10;
                    }
                    break;
                case 'L':
                    if(temp<50){
                        ans=ans+50-2*temp;
                        temp=50;
                    }
                    else{
                        ans+=50;
                        temp=50;
                    }
                    break;
                case 'C':
                    if(temp<100){
                        ans=ans+100-2*temp;
                        temp=100;
                    }
                    else{
                        ans+=100;
                        temp=100;
                    }
                    break;
                case 'D':
                    if(temp<500){
                        ans=ans+500-2*temp;
                        temp=500;
                    }
                    else{
                        ans=ans+500;
                        temp=500;
                    }
                    break;
                case 'M':
                    if(temp<1000){
                        ans=ans+1000-2*temp;
                        temp=1000;
                    }
                    else{
                        ans=ans+1000;
                        temp=1000;
                    }
                    break;
            }
        }
        return ans;
    }
};
