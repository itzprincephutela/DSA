#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
void print(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}
void transpose(int arr[][3],int row ,int col ){
    for(int i = 0 ; i < row ; i++ ){
        for( int j = i ; j < col ; j++){
            swap(arr[i][j],arr[j][i]);
            }
        }
}
int main (){
     int arr[3][3];
     int row =3;
     int col = 3;
     for(int i = 0 ; i < row ; i++ ){
        for( int j = 0 ; j < col ; j++){
            cin>>arr[i][j];
     }
}
cout<<"phele"<<endl;
print(arr,row,col);
cout<<"inzial"<<endl;
transpose(arr,row,col);
cout<<"transplose"<<endl;
print(arr,row,col);
}