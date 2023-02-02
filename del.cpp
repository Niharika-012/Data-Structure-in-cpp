#include<bits/stdc++.h>
using namespace std;

void input(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
}

void display(int arr[] , int n){
    for(int i = 0 ;i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Delete(int arr[] , int n , int idx ){

    for(int i = idx ; i<n ; i++){
        arr[i] = arr[i+1];
    }
   
    n--;
}

int main(){

   int n , val , idx;
   cout<<"Enter the size of the array : ";
   cin>>n;

   int arr[n];

   input(arr , n);
   display(arr , n);

   cout<<"Enter the index where the value has to be deleted : ";
   cin>>idx;
   
   Delete(arr , n ,idx );
   display(arr , n-1);
   
       return 0;
}