#include<iostream>
// #include"hero.cpp"
using namespace std;

    //forming class;
class hero{

    //properties of Hero
    char name[100];
    public:
    int health;
    
    char level;

    void print(){
        cout<<level<<endl;
    }
    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(int a){
        level=a;
    }

};

int main(){
    //creation of object; object - instance of class
    hero ramesh;
    ramesh.sethealth(70);
    ramesh.setlevel(50);
    
    // To get the value of properties from class we will use dot operator.
    cout<<"The Value of Health is : "<<ramesh.gethealth()<<endl;
    cout<<"The Value of Level is : "<<ramesh.getlevel()<<endl;

    //  cout<<"The Size of the object h1 is "<<sizeof(h1)<<endl;
    //  //output : 4 as integer takes 4 bites.

    return 0;
}