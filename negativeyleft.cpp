// // we have one array and left side we have only negative number and right side only positive

#include<iostream> 
using namespace std ;
void shiftnegative(int array[],int n){
    int j = 0;
    for(int index = 0 ; index< n ; index++){
        if(array[index]< 0 ){
            swap(array[index],array[j]);
            j++;
        }
    }

}
int main (){
    int array[]={1,-2,3,-4,5,-6,7,-8,9,-10};
    int n = 10;
        shiftnegative(array,n);
        // print 
        for(int i = 0 ; i < n ; i++){
            cout<<array[i]<<" ";
        }

    return 0;

}



// #include<iostream>
// using namespace std;
// int main (){
//     int array[10]={1,-2,3,-4,5,-6,7,-8,9,-10};
//     int j =0; 
//     for(int i = 0 ; i < 10 ; i++){
//         if(array[i]<0){
//             swap(array[i],array[j]);
//             j++;
//         }
    
//     }
//      for(int i = 0 ; i < 10 ; i++){
//         cout<<array[i]<<" ";
//      }

// }