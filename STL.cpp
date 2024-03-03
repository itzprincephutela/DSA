#include<iostream>
using namespace std ;
int main (){
    //static allocation
    //   int arr[5]={1,2,3,4,5};
    //      cout<<"Staic allocation"<<endl;
    //  for(int i = 0 ; i < 5 ; i++){
    
    //      cout<<arr[i]<<" "<<endl; 
    //  }
   int n ;
   cin >> n ;
   int *arr=new int[n];
   for(int i =0;i<n;i++){
    int temp;
    cin>>temp;
    arr[i]=temp;
    }
      for(int i = 0 ; i < n ; i++){
         cout<<arr[i]<<" "<<endl;
         }
}
