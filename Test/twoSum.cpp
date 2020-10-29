//
//  main.cpp
//  Test
//
//  Created by Zane on 2019/9/15.
//  Copyright © 2019 Zane. All rights reserved.
//

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start,end,temp;
        start = 0;
        end = nums.size()-1;
        pair <int, int> t[50000];
        for(int i=0;i<=end;i++){
            t[i].first = nums[i];
            t[i].second = i;
        }
        
        sort(t, t + (end+1));
        vector<int> indix;
        while(end>=start){
            if(t[start].first + t[end].first > target)
                end--;
            else if(t[start].first + t[end].first < target)
                start++;
            else
                break;
            
        }
        indix.push_back(t[start].second);
        indix.push_back(t[end].second);
        return indix;
    }
};
