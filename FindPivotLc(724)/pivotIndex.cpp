#include <iostream>
#include <vector>
using namespace std;
     int pivotIndex(vector<int>& nums) {
        int totalSum=0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }
        int leftSum=0;
        for(int i=0;i<nums.size();i++){
            int rightSum=totalSum-leftSum-nums[i];
            if(leftSum==rightSum){
                return i;
            }
            leftSum+=nums[i];
        }
        return -1;
    }
    int main(){
        vector <int> v={2,3,2};
        int c=pivotIndex(v);
        cout<<"index of pivot is :"<<c<<endl;
    }