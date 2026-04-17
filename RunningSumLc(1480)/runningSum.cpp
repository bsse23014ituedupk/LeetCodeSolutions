#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size=nums.size();
        vector <int>v(size);
        int sum=0;
       for(int i=0;i<size;i++){
        v[i]=nums[i]+sum;
        sum+=nums[i];
       }
       return v;
    }
};