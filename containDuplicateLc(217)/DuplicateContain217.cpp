#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
 bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int>b;
        for(int i=0;i<nums.size();i++){
                if(b.find(nums[i])!=b.end()){
                    return true;
            }
            b[nums[i]]=i;
        }
        return false;
    }
    int main(){
        vector <int> v={1,3,4,2,1};
        bool isPresent=containsDuplicate(v);
        if(isPresent){
            cout<<"duplicate"<<endl;
        }else{
            cout<<"not duplicate"<<endl;
        }

    }