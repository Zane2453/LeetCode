//
//  RemoveElement.cpp
//  Test
//
//  Created by Zane on 2020/11/2.
//  Copyright © 2020 Zane. All rights reserved.
//

#include <stdio.h>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0; i<nums.size(); i++){
            if (nums[i]==val){
                 nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};
