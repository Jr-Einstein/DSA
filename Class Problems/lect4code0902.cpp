//write a C++ Program using inline function to check whether a person is eligible for voting or not. date - 09/02/24
// #include<iostream>
// using namesapce std;

// inline void vote(int a)
// {
//     if ( a<18){
//         cout<<"The person is not eligible to vote";
//     }
//     else{
//         cout<<"The person is eligible to vote";
//     }
// }

// int main(){
//     vote(6);
//     return 0;

    
// }


//exception handling

//write a C++ program using exception handling ( voting question )
// #include<iostream>
// using namespace std;


// int main()
// try{
//     int age=15;
//     if(age>=18){
//         cout<<"You are Eligible to Vote";
//     }else{
//         throw(age);
//     }
// }//EXCEPTION HANDLING IS A PROCEOSS OF HANDLING RUNTIME ERROS.
//catching an expection ( try-catch)


// #include<iostream>
// using namespace std;
// int divide(int x, int y){
//     if(y==0){
//         throw runtime_error("Division by Zero");
//     }
//     return x/y;
// }

// int main(){
//     try{
//         int result = divide(110,0);
//         cout<<"Results:  "<<result<<endl; 
//     }
//     catch(const runtime_error& e){
//         cerr<<"Error: "<<e.what()<<endl;
//     }
// }



//write a C++ program using exception handling function for divide by zero error using runtime.

#include<iostream>
using namespace std;


void main(){
    try{
        int age=15;
        if(age>=18){
            cout<<"Access Granted - You are old enough.";
        }else{
            throw 505;
        }
    }
    catch(...){
        cout<<"Access Denied - You must be atleast 18 year old.\n"
    }
    return 0;
}




























































catch(int myNum){
    cout<<"Access denied bitch ass nigga"<<'\n';
    cout<<"You age is : "<<myNum<<'\n';

    return 0;
}