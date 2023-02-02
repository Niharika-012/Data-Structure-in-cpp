#include<bits/stdc++.h>
using namespace std;

void read(int arr[] , int n){

    cout<<"Enter the elements: ";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
}

void singleMissElement(int arr[] , int n){

    int low = arr[0];
   
    int diff = low - 0;

    for(int i = 0 ; i<n ; i++){
        
        if(arr[i] - i !=  diff){
            cout<<"Missing element : "<<i+diff<<endl;
            return;
        }
   
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    read(arr , n);

    singleMissElement(arr, n);

}