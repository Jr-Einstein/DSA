#include<iostream>
using namespace std;

void printarray( int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapalt(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int even[8]={5,6,2,7,8,3,4,3};
    int odd[5]={11,2,3,2,67};

    swapalt(even,8);
    swapalt(odd,5);

    printarray(even,8);
    printarray(odd,5);


    return 0;
}