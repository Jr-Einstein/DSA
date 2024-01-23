#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start =0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start=start+1;
        end=end-1;

    }
}


void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}





int  main(){
    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {1,2,3,4,5};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);


}