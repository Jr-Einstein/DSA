#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Your Printing from 1 to "<<n<<"is starting now..."<<endl;
    int i=1;
    for( ; ; ){
       if(i<=n){
        cout<<i<<endl;
       }else{
        break;
       }
    i++;
    }
}