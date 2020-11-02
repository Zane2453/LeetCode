//
//  SearchInsertPosition.cpp
//  Test
//
//  Created by Zane on 2020/11/2.
//  Copyright © 2020 Zane. All rights reserved.
//

#include <stdio.h>
#include <vector>

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(target<=nums[i]){
                if(i==0)
                    return 0;
                else
                    return i;
            }
        }
        return nums.size();
    }
};
