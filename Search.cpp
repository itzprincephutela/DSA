#include<iostream>
#include<limits.h>
using namespace std ;
void print(int arr[][3],int row , int col ){
    for(int i = 0 ; i < row ; i++ ){
        for( int j = 0 ; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
    
}

bool targett(int arr[3][3],int row , int col , int target){
    for(int i = 0 ; i < row ; i++ ){
        for( int j = 0 ; j < col ; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
     }
     return false;

}
void maxx(int arr[][3],int row,int col){
    int temp = INT32_MIN;
    for(int i = 0 ; i < row ; i++ ){
        for( int j = 0 ; j < col ; j++){
             if(arr[i][j]>temp){
                temp=arr[i][j];
             }
            }
        }
        cout<<temp;
}
int main
(){
     int arr[3][3];
     int row=3;
     int col=3;
     int target = 1;
     for(int i = 0 ; i < row ; i++ ){
        for( int j = 0 ; j < col ; j++){
            cin>>arr[i][j];
        }
     }
     maxx(arr,row,col);
    //  print(arr,row,col);
     //cout<<"Found or not :" <<targett(arr,row,col,target);
}