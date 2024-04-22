#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    void say(){
        cout<<"I am A";
    }
    
};

class B:public A{
     public:
    void say1(){
        cout<<"I Am B  ";
        say(); 
    }
   
};

class C : public A{
    public:
    void say2(){
        cout<<"I Am C  ";
        say();
    }

};

class D :public B{
    public :
    void show1(){
        cout<<"I am D ";
        say1();
    }
};

class E :public B{
    public :
    void show2(){
        cout<<"I am E  ";
        say1();
    }
};

class F :public C{
    public :
    void show3(){
        cout<<"I am F  ";
        say2();
    }
};

int main(){
    D ob1;
    ob1.show1();
    E ob2;
    ob2.show2();
    F ob3;
    ob3.show3();

    return 0;
}