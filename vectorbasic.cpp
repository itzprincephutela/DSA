#include<iostream>
#include<vector>
using namespace std ;


void print(vector<int>v)
{
    //  size 
    int size = v.size();
    cout<<"Print"<<endl;
    for(int i = 0 ;i < size ; i ++ ){
    cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
// in vector hme usme space nahi batana hota  hai 
//just keep insrting 
// vector<int>v;//array hi hai or iska size btane ki jarurt nhqi h
// insert
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// // fuction calling 
// print(v);
// // pop-> delete
// v.pop_back();
// print(v);
// // insert
int n ; 
vector<int>v;
cin >> n;
for(int i = 0 ; i  < n ;++i){
    int d;
    cin>>d;
    v.push_back(d);
}
print(v);
}