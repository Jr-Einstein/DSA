// //talking about UML, It is used to create Diagrams.

// //make a program tht would get maximum of two numbers and then do it using function.

// #include<iostream>
// using namespace std;

//     int maxnum(int a,int b){
//         if(a>b){
//             cout<<a<<" Is the greatest number"<<endl;
//         }else{
//             cout<<b<<" Is the greatest number."<<endl;
//         }
//         return 0;
//     }

// int main(){
//     int a,b;
//     cout<<"enter the value of a : ";
//     cin>>a;
//     cout<<"enter the value of b : ";
//     cin>>b;

//     cout<<maxnum(a,b);


// }

//write a C++ program to swap two numbers using functions.
#include<iostream>
using namespace std;

int swapnum(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

    return temp;
}

int main(){
    int a,b;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";
    cin>>b;

    cout<<swapnum(a,b);
}