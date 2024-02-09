// write c++ program to evaluate an expression using function
//swap
//max of three number

#include<iostream>
using namespace std;


// int sum(int x,int y,int z){
//     int exp = x+y+z;
//     return exp;
// }

// int main(){
//     // int x,y,z;
//     // cout<<"Enter The Value of x,y,z,n :";
//     // cin>>x;
//     // cin>>y;
//     // cin>>z;
//     cout<<sum(1,2,3);
//     return 0;
// }

//Teaching Inline Functions...

//write a C++ program to illustrate inline function or find out the result of the expression (x+y)^3 using inline function with respect 

// inline int cube(int s){
//     return s*s*s;
// }

// int main(){
//     cout<<"The cube of 3 is : "<<cube(3);
//     return 0;
// }

//write a c++ program using inline function to evaluate a given expression

//write a c++ program using inline function to write GCD of two numbers.

// int gcd(int a,int b){
//     if(b==0)
//     return a;
//     return gcd(b,a%b);
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<gcd(a,b)<<endl;
//     cout<<"The value address of GCD is "<<&gcd<<endl;
//     return 0;
// }

//write a C++ program using pointers to display the address location of variable name.

//write a C++ program to swap two numbers using functions and pointers.

// #include<iostream>
// void swap(int x,int y);
// void swap( int *x,int *y){
//     int temp;
//     temp = *x;
//     *x=*y;
//     *y=temp;
    
//     cout<<temp;
//     }


// #include<iostream>
// using namespace std;

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
    cout << "Swapped values: " << *x << " " << *y << endl;
}

int main() {
    int a = 5, b = 10;
    cout << "Original values: " << a << " " << b << endl;
    swap(&a, &b);
    return 0;
}
