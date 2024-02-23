//write a C++ Code with function and arguement to find the sum of first 10 natural numbers.
#include <iostream>

// Function to find the sum of first 10 natural numbers
int sumOfFirst10NaturalNumbers() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    // Call the function and display the result
    int result = sumOfFirst10NaturalNumbers();
    std::cout << "Sum of the first 10 natural numbers: " << result << std::endl;

    return 0;
}


//write a C++ program to implement functions without arguement and return valuesto find out the factorial of given number.
#include <iostream>

// Function to calculate the factorial of a given number
void calculateFactorial() {
    int num;
    long long factorial = 1;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Calculate factorial
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    // Display the result
    std::cout << "Factorial of " << num << " is: " << factorial << std::endl;
}

int main() {
    // Call the function to calculate factorial
    calculateFactorial();

    return 0;
}
//teaching reference variable


//write a c++ program to display the reference of any variable through it's address using address operator.
#include<iostream>
int main(){
    int i;
    double d;
    int &r=i;
    doubt &s =d;
    i=5;
    cout<<"Value of i: "<<i<<endl;
    cout<<"Value of i reference : "<<r<<endl;
    cout<<"Value of d: "<<<<endl;
    cout<<"Value of i reference: "<<s<<endl;
}


//teaching 1.8 - Reference : Independent reference function

// 1) independent reference. - swapping
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=5,y=10;
    swap(x,y);
    cout<<" x: "<<x;
    cout<<" y: "<<y;
}

//independent and reference arguments.

//c++ pointers and cal by reference functions. What is a pointer?

//write a c++ program using pointers display the variable x and it's address through a pointer variable using the pointers p.
void{

int x=10;
int *p;
p=&x;

cout<<p;
cout<<*p;
cout<<(*p);
getch();


}
//*p is the value of the address p.


//write a c++ program to find maximum from an given array using function returning reference.
int& getmax(int arr[],int size){
    int maxindex=0;
    for(int i=1;i<size;i++){
        if(arr[i]>arr(maxindex)){
            maxindex=i;
        }
    }
    return arr[maxindex];
}

int main(){
    int arr[]=(3,8,5,1);
    int& maxElement = getmax(arr,4);
    cout<<"Max element : "<<maxElement<<endl;
    
}