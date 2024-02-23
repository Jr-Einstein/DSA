//what are constructors , destructors.

#include<iostream>
using namespace std;

class wall{
    private:
    double length;
    double height;

    public:
    wall(double len,double hgt){
        length = len;
        height = hgt;
    }
    double calculateArea(){
        return length*height;
    }
};

// ~wall(){ //~denotes that this is not a contrustors.
//     cout<<"The destructor function ~wall() is called : ";
//     getch();
// }

int main(){
    wall wall1(10.5,8.6);
    wall wall2(8.5,6.3);
    cout<<"Area of Wall 1 : "<<wall1.calculateArea()<<endl;
    cout<<"Area of Wall 2 : "<<wall2.calculateArea()<<endl;

    return 0;
}


//types of constructors

//write a C++ program to Overload the constructors function and illustrate default constructor , parametrized constructor , and copy constructor function with a variable side of cube.
class cube{
    public:
    int side;

    //default constructor
    cube(){
        side=0;
    }
    cube(int x){
        side=x;
    }

    cube(const cube &c){
        side = c.side; //constructor defined as cube c3=c2;
    }
};

int main(){
    class cube c1; //data constructor
    class cube c1(101);
    cube c3 (cube c4){
        c4.side=55;
        return 0;
    }

}

//c++ copy constructors

//write a C++ to illustrate constructors and destructors using the class called  file.
//Write a C++ program to illustrate constructors and destructors using student class.

class student{
    public:
    string name;
    int rollNo;

    student(string n,int r): name(n),rollNo(r){
        cout<<"\n The Constructor function is Called : "
        //destructor ( no specific action needed here)
        ~student(){
            cout<<"\n The destructor function is executed";
        }
    };
}


//Write a C++ program to demonstrate the role of copy constructors using an class called bank account.

class Bankaccount{
    public:
    int accountnumber;
    double balance;

    BankAccount( const Bankaccount& other):
    accountnumber(other.accountnumber),
    balance(other.balance){}

};

int main(){
    Bankaccount a1(100,1000);
    Bankaccount a2(a1);
    a1.balance = 500;

    cout<<"a2 balance : "<<a2.balance<<endl;
}


//Write a C++ program to demonstrate an operation of copy constructor using  the class called point using x,y coordinates 
// copy the value of old object * new object through the address using copy constructor.