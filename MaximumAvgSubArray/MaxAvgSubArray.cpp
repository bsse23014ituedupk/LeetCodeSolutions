#include <iostream>
using namespace std;
int main(){
    int size=8;
     int arr1[8]={1,2,3,4,5,6,7,8};
    int arr2[8]={1,2,3,4,5,6,7,8};
   
    //  for(int i=0;i<5;i++){
    //     cout<<"enter thwe element :"<<i<<endl;
    //     cin>>arr2[i];
    // }
  int k;
  cout<<"enter the k"<<endl;
  cin>>k;
   double maxAvg=0.00;
    int lastElement=k;
     int firstElement=0;
    for(int i=0;i<size;i++){
        double average=0.00;
        int sum=0;
         if(k+i<=size){
                return -1;
            }
        while(i>k+i){
            sum+=arr1[i];
        }
       
        average=sum/k;
         if(i==0){
            maxAvg=average;
        }
        if(average>maxAvg){
           maxAvg=average;
           firstElement=i;
        }

  }
  for(int i=0;i<k;i++){
    arr2[i]=arr1[i+firstElement];
  }
  cout<<"MaxSubAverageArray{"; 
  for(int i=0;i<k;i++){
   cout<<"" <<arr2[i]<<endl;
  }
  cout<<"}" ;
  cout<<"wirh average"<<maxAvg<<endl;
}