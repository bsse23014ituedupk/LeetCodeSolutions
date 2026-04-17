#include <iostream>
#include <vector>
using namespace std;
// My Code 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector <int> v(2);
      v[0]=0;
      v[1]=0;
        int i=0;
        while(i<nums.size()-1){
         int j=i+1;
        while(j<nums.size()){
            if(nums[i]+nums[j]==target){
                v[0]=i;
                v[1]=j;
               return v;
            }
            j++;
        }
        i++;
        }
      return v;
       
    }
};
// Code I copy From The Leet Code 
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//      unordered_map <int,int>b;
//      for(int i=0;i<nums.size();i++){
//         int c=target-nums[i];
//         if(b.find(c)!=b.end()){
//             return {b[c],i};
//         }
//        b[ nums[i]]=i;
//      }
//      return {};
//     }
// };
int main(){
   Solution s;
    vector<int> nums = {2, 3, 1, 5};

    vector<int> result = s.twoSum(nums, 4);

    cout << result[0] << " " << result[1] << endl;

    return 0;
   
   
}