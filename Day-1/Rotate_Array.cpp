// Given an array, rotate the array to the right by k steps, where k is non-negative.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size());
        for(int i=0; i<nums.size(); i++){
            ans[(i+k)%nums.size()] = nums[i];
        }
        nums = ans;
    }
};

int main(){
    return 0;
}