#include<iostream>
#include<math.h>
using namespace std;

// int getMax(int num[],int n){
//     int max = INT32_MIN;
//     for( int i=0;i<n;i++){
//         if(num[i]>max){
//             max=num[i];
//         }
//     }
//     return max;
// }
// int getMin(int num[],int n){
//     int min = INT32_MAX;
//     for( int i=0;i<n;i++){
//         if(num[i]<min){
//             min=num[i];
//         }
//     }
//     return min;
// }


// int main(){
//     int size;
//     cin>>size;

//     int num[100];
// //taking arrays
//     for( int i=0;i<size;i++){
//         cin>>num[i];

//     }

//     cout<<"The Minimum Value is : "<<getMin(num,size)<<endl;
//     cout<<"The Maximum Value is : "<<getMax(num,size)<<endl;


//     return 0;
// }


int getMax(int num[],int n){

    int  maxi = INT32_MIN;
    for( int i=0;i<n;i++){
       maxi = max(maxi,num[i]);
    }
    return maxi;
}
int getMin(int num[],int n){
    int  mini = INT32_MAX;
    for( int i=0;i<n;i++){
         mini = min(mini,num[i]);
       
    }
    return mini;
}


int main(){
    int size;
    cin>>size;

    int num[100];
//taking arrays
    for( int i=0;i<size;i++){
        cin>>num[i];

    }

    cout<<"The Minimum Value is : "<<getMin(num,size)<<endl;
    cout<<"The Maximum Value is : "<<getMax(num,size)<<endl;


    return 0;}