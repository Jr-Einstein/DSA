//started with access specifiers 
//private , public and protected.
//example of access specifiers in c++


//write a C++ program to declare the access specifer private , public and protected and create a class called A.

class A{
    public:
    in x;
    float Exp;
    private:
    int y=5;
};

int main(){
    Class A a;
    a.x=10;
    a.Exp=a.x*a.x**a.x+a.y*.a.y*a.y+a.x*a.y+a.x/a.y;
    cout<<a.Exp;
}


//write a C++ program to illustreate classes and access specifiers to read and siplay the interger and floating point of the number using the meta functions getinterger and ger floatnumber.

#include<iostream>
using namespace std;

class Sample{
    private:
    int data_1;
    float data_2;
    public:
    void getinteger(int d_1){
        data_1=d_1;
        cout<<"Number : "<<data_1;
    }
    float getfloat(){
        cout<<"\n Enter data: ";
        cin>>data_2;
        return data_2; 
    }
}

//Write a C++ code ( bank account wala)

//access specifiers real time applications


//Write a C++ Program using access modifers to swap two numbers using member function.
#include<iostream>
#include<conio.h>
using namespace std;

class swap{
    private:
    int a,b;
    public:
    void getdata();
    void swapvalue();
    void display();
};
void swap::getdata(){
    cout<<"Enter Two Number : ";cin>>a>>b;
}

void swap::swapvalue(){
    s.a=s.a+s.b;
    s.b=a-s.b;
    s.a=s.a-s.b;
}

void swap::display(){
    cout<<"a="<<s.a<<"\tb="<<s.b;
}

int main(){
    swap s;
    s.getdata();
    cout<<"\n Before swap:\n";
    s.display();
    s.swapvalue();
    cout<<"\nAfter swap";
    s.display();
    return 0;
}


//structure and union


//write a C++ program to create a structure called point and display there structure members and it's coordinate.


struct point{
    int x;
    float y;
};

int main(){
    struct point p={10,20.5};
    cout<<"Point coordinates: "<<p.x<<p.y<<endl;

    //cout<<"Point coordinates: ( "p.x<<" , "<<p.y<<") "<<endl;

}

//Write a C++ program to differentiate classes and structure by creating a strcutre and creating a class called circle.