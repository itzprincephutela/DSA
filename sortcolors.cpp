#include<iostream>
#include<vector>
using namespace std;
int main (){
     vector<int>arr= {0,2, 1, 0, 2,1 };
     int n= arr.size();
     int start =0 ;
     int end = n-1;
     int index = 0;
     while(index < end){
        
        if(arr[index]==0){
            swap(arr[index],arr[start]);
            index++;
            start++;
        }
        else if (arr[index]==2){
            swap(arr[index],arr[end]);
            end--;

        }
        else {
            index++;
        }
     
     }
     for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<< " ";
     }


} 